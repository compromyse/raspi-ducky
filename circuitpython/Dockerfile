FROM ubuntu:latest

COPY . /circuitpython
WORKDIR /circuitpython

RUN apt-get update
RUN apt-get install python3 python3-pip git gettext build-essential mtools gcc-arm-none-eabi -y
RUN pip3 install --upgrade -r requirements-dev.txt
RUN make -C mpy-cross

ENTRYPOINT [ "./build.sh" ]