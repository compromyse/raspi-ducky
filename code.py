def main():	# Made by compromyse: https://compromyse.tk/
	import usb_hid
	from adafruit_hid.keyboard import Keyboard
	from adafruit_hid.keyboard_layout_us import KeyboardLayoutUS as KeyboardLayout
	import time
	import board
	import digitalio
	led = digitalio.DigitalInOut(board.LED)
	led.direction = digitalio.Direction.OUTPUT
	kbd = Keyboard(usb_hid.devices)
	layout = KeyboardLayout(kbd)
	time.sleep(1)
	led.value = True
	kbd.press(227)
	kbd.release_all()
	time.sleep(1)
	layout.write('subl')
	kbd.press(40)
	kbd.release_all()
	led.value = False