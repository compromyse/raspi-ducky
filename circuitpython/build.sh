#!/bin/bash
a=$PWD

cd $a/ports/raspberrypi/
make BOARD=raspberry_pi_pico -j4

cp $a/ports/raspberrypi/build-raspberry_pi_pico/firmware.uf2 $a
