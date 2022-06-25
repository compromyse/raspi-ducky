#!/bin/bash

file=$b64file

echo $file | base64 -d > frozen/compromyse/raspiducky.py

cd /circuitpython/ports/raspberrypi/
make BOARD=raspberry_pi_pico -j4

cp /circuitpython/ports/raspberrypi/build-raspberry_pi_pico/firmware.uf2 /circuitpython