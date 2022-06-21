import os
import subprocess
from shutil import which
from termcolor import colored
import sys

# Dependancy check
def depcheck():
    checklist = {}
    # Returns None if docker is not present
    checklist['docker'] = which('docker')
    checklist['circuitpython'] = os.path.isdir('circuitpython')
    return checklist

# Build image
def buildimage():
    # Get ready to build
    os.chdir('circuitpython')
    # Build the image
    print(colored('[+]> Building image, this may take a few minutes..', 'green'))
    subprocess.call('docker build -t picoducky .', shell=True)
    print("Done!")

# Check if image already exists
def imagecheck():
    if subprocess.check_output('docker images -q picoducky 2> /dev/null', shell=True):
        return True
    else:
        return False

def main():
    dockerpresent = depcheck()['docker']
    circuitpythonpresent = depcheck()['circuitpython']

    # Check if docker is present
    if dockerpresent:
        print(colored('[+]> Docker is present, script can continue..', 'green'))
    else:
        print(colored('[!]> Please make sure Docker is installed and is in your PATH.', 'red'))

    # Build image, skip build if image is already built
    if imagecheck():
        print(colored("[+]> Looks like the Docker image is already built, I will skip that step.", 'green'))
    else:
        if circuitpythonpresent:
            print(colored('[+]> Circuitpython directory is present, build can continue.', 'green'))
        else:
            print(colored('[-]> Circuitpython directory is absent, build cannot continue. Exitting...', 'red'))
            sys.exit(1)
        buildimage()
    
    # Run container and start build
    subprocess.call("docker rm picoduckyrun >/dev/null 2>/dev/null", shell=True)

    print(colored('[+]> Everything went fine, starting firmware build..', 'green'))
    subprocess.call('docker run --name picoduckyrun --mount type=bind,source="$(pwd)/generated",dst="/mounted" picoducky', shell=True)

    # Copy UF2 file
    print(colored('Looks like the build succeeded, copying the file here...','green'))
    subprocess.call("docker cp picoduckyrun:/circuitpython/firmware.uf2 firmware.uf2", shell=True)

if __name__ == "__main__":
    main()