import os
import subprocess
from shutil import which
from termcolor import colored
import sys
import urllib.request
import zipfile

# Needed for parser
class Keycode:A=4;B=5;C=6;D=7;E=8;F=9;G=10;H=11;I=12;J=13;K=14;L=15;M=16;N=17;O=18;P=19;Q=20;R=21;S=22;T=23;U=24;V=25;W=26;X=27;Y=28;Z=29;ONE=30;TWO=31;THREE=32;FOUR=33;FIVE=34;SIX=35;SEVEN=36;EIGHT=37;NINE=38;ZERO=39;ENTER=40;RETURN=ENTER;ESCAPE=41;BACKSPACE=42;TAB=43;SPACEBAR=44;SPACE=SPACEBAR;MINUS=45;EQUALS=46;LEFT_BRACKET=47;RIGHT_BRACKET=48;BACKSLASH=49;POUND=50;SEMICOLON=51;QUOTE=52;GRAVE_ACCENT=53;COMMA=54;PERIOD=55;FORWARD_SLASH=56;CAPS_LOCK=57;F1=58;F2=59;F3=60;F4=61;F5=62;F6=63;F7=64;F8=65;F9=66;F10=67;F11=68;F12=69;PRINT_SCREEN=70;SCROLL_LOCK=71;PAUSE=72;INSERT=73;HOME=74;PAGE_UP=75;DELETE=76;END=77;PAGE_DOWN=78;RIGHT_ARROW=79;LEFT_ARROW=80;DOWN_ARROW=81;UP_ARROW=82;KEYPAD_NUMLOCK=83;KEYPAD_FORWARD_SLASH=84;KEYPAD_ASTERISK=85;KEYPAD_MINUS=86;KEYPAD_PLUS=87;KEYPAD_ENTER=88;KEYPAD_ONE=89;KEYPAD_TWO=90;KEYPAD_THREE=91;KEYPAD_FOUR=92;KEYPAD_FIVE=93;KEYPAD_SIX=94;KEYPAD_SEVEN=95;KEYPAD_EIGHT=96;KEYPAD_NINE=97;KEYPAD_ZERO=98;KEYPAD_PERIOD=99;KEYPAD_BACKSLASH=100;APPLICATION=101;POWER=102;KEYPAD_EQUALS=103;F13=104;F14=105;F15=106;F16=107;F17=108;F18=109;F19=110;F20=111;F21=112;F22=113;F23=114;F24=115;LEFT_CONTROL=224;CONTROL=LEFT_CONTROL;LEFT_SHIFT=225;SHIFT=LEFT_SHIFT;LEFT_ALT=226;ALT=LEFT_ALT;OPTION=ALT;LEFT_GUI=227;GUI=LEFT_GUI;WINDOWS=GUI;COMMAND=GUI;RIGHT_CONTROL=228;RIGHT_SHIFT=229;RIGHT_ALT=230;RIGHT_GUI=231
duckyCommands={'WINDOWS':Keycode.WINDOWS,'GUI':Keycode.GUI,'APP':Keycode.APPLICATION,'MENU':Keycode.APPLICATION,'SHIFT':Keycode.SHIFT,'ALT':Keycode.ALT,'CONTROL':Keycode.CONTROL,'CTRL':Keycode.CONTROL,'DOWNARROW':Keycode.DOWN_ARROW,'DOWN':Keycode.DOWN_ARROW,'LEFTARROW':Keycode.LEFT_ARROW,'LEFT':Keycode.LEFT_ARROW,'RIGHTARROW':Keycode.RIGHT_ARROW,'RIGHT':Keycode.RIGHT_ARROW,'UPARROW':Keycode.UP_ARROW,'UP':Keycode.UP_ARROW,'BREAK':Keycode.PAUSE,'PAUSE':Keycode.PAUSE,'CAPSLOCK':Keycode.CAPS_LOCK,'DELETE':Keycode.DELETE,'END':Keycode.END,'ESC':Keycode.ESCAPE,'ESCAPE':Keycode.ESCAPE,'HOME':Keycode.HOME,'INSERT':Keycode.INSERT,'NUMLOCK':Keycode.KEYPAD_NUMLOCK,'PAGEUP':Keycode.PAGE_UP,'PAGEDOWN':Keycode.PAGE_DOWN,'PRINTSCREEN':Keycode.PRINT_SCREEN,'ENTER':Keycode.ENTER,'SCROLLLOCK':Keycode.SCROLL_LOCK,'SPACE':Keycode.SPACE,'TAB':Keycode.TAB,'BACKSPACE':Keycode.BACKSPACE,'A':Keycode.A,'B':Keycode.B,'C':Keycode.C,'D':Keycode.D,'E':Keycode.E,'F':Keycode.F,'G':Keycode.G,'H':Keycode.H,'I':Keycode.I,'J':Keycode.J,'K':Keycode.K,'L':Keycode.L,'M':Keycode.M,'N':Keycode.N,'O':Keycode.O,'P':Keycode.P,'Q':Keycode.Q,'R':Keycode.R,'S':Keycode.S,'T':Keycode.T,'U':Keycode.U,'V':Keycode.V,'W':Keycode.W,'X':Keycode.X,'Y':Keycode.Y,'Z':Keycode.Z,'F1':Keycode.F1,'F2':Keycode.F2,'F3':Keycode.F3,'F4':Keycode.F4,'F5':Keycode.F5,'F6':Keycode.F6,'F7':Keycode.F7,'F8':Keycode.F8,'F9':Keycode.F9,'F10':Keycode.F10,'F11':Keycode.F11,'F12':Keycode.F12}
final = []

def init():
    if os.path.isdir('circuitpython'):
        pass
    else:
        print(colored('[+]> It looks like the circuitpython code is not downloaded yet, I will download it for you.', 'green'))
        urllib.request.urlretrieve('https://github.com/compromyse/raspi-ducky/releases/latest/download/circuitpython.zip', 'circuitpython.zip')
        with zipfile.ZipFile('circuitpython.zip', 'r') as h:
            h.extractall('.')

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
    print(colored('[+]> Building image, this may take a few minutes.. This will only happen on the first run.', 'green'))
    subprocess.call('docker build -t raspiducky .', shell=True)
    print("Done!")

# Check if image already exists
def imagecheck():
    if subprocess.check_output('docker images -q raspiducky', shell=True):
        return True
    else:
        return False

def convertLine(line):
    newline = []
    for key in filter(None, line.split(" ")):
        key = key.upper()
        command_keycode = duckyCommands.get(key, None)
        if command_keycode is not None:
            newline.append(command_keycode)
        elif hasattr(Keycode, key):
            newline.append(getattr(Keycode, key))
        else:
            print(colored(f"Unknown key: \"{key}\"", 'red'))
            sys.exit(1)
    return newline

def runScriptLine(line):
    for k in line:
        final.append(f"kbd.press({k})")
    final.append("kbd.release_all()")

def parseLine(line):
    global defaultDelay
    if(line[0:3] == "REM"):
        # ignore ducky script comments
        pass
    elif(line[0:5] == "DELAY"):
        final.append(f'time.sleep({int(line[6:])})')
    elif(line[0:6] == "STRING"):
        final.append(f'layout.write(\'{line[7:]}\')')
    else:
        newScriptLine = convertLine(line)
        runScriptLine(newScriptLine)

# Final docker section
def dockersection():
    # Build image, skip build if image is already built
    if imagecheck():
        print(colored("[+]> Looks like the Docker image is already built, I will skip that step.", 'green'))
    else:
        if os.path.isdir('circuitpython'):
            print(colored('[+]> Circuitpython directory is present, build can continue.', 'green'))
        else:
            print(colored('[-]> Circuitpython directory is absent, build cannot continue. Exitting...', 'red'))
            sys.exit(1)
        buildimage()
    
    # Run container and start build
    subprocess.call("docker rm raspiduckyrun >/dev/null 2>/dev/null", shell=True)

    print(colored('[+]> Everything went fine, starting firmware build..', 'green'))
    # For some reason the firmware has to be built twice for cp to work
    subprocess.call(f'docker run --name raspiduckyrun raspiducky', shell=True)

    # Copy UF2 file
    print(colored('[+]> Looks like the build succeeded, copying the file here...','green'))
    subprocess.call("docker cp raspiduckyrun:/circuitpython/firmware.uf2 firmware.uf2", shell=True)

    # Remove container before exitting
    subprocess.call("docker rm raspiduckyrun", shell=True, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)

def duckyscriptsection():
    try:
        with open('payload.ds', 'r') as h:
            lines = [line.rstrip() for line in h]
    except FileNotFoundError:
        print(colored('[-]> File "payload.ds" not found, please create it before running the script.', 'red'))
        sys.exit(1)

    for line in lines:
        parseLine(line.replace("'", "\\'"))
    print(colored('[+]> Creation of payload successful, script can continue.', 'green'))
    
    with open('code.py', 'w') as h:
        h.write('def main():')
        h.write('\t# Made by compromyse: https://compromyse.tk/\n')
        h.write('\timport usb_hid\n')
        h.write('\tfrom adafruit_hid.keyboard import Keyboard\n')
        h.write('\tfrom adafruit_hid.keyboard_layout_us import KeyboardLayoutUS as KeyboardLayout\n')
        h.write('\timport time\n')
        h.write('\timport board\n')
        h.write('\timport digitalio\n')
        h.write('\tled = digitalio.DigitalInOut(board.LED)\n')
        h.write('\tled.direction = digitalio.Direction.OUTPUT\n')
        h.write('\tkbd = Keyboard(usb_hid.devices)\n')
        h.write('\tlayout = KeyboardLayout(kbd)\n')
        h.write('\ttime.sleep(1)\n')
        h.write('\tled.value = True\n')
        for line in final:
            h.write(f'\t{line}\n')
        h.write('\tled.value = False')

def cleanup():
    try:
        os.remove('code.py')
    except FileNotFoundError:
        pass

def main():
    init()
    duckyscriptsection()
    dockersection()
    cleanup()

if __name__ == "__main__":
    main()