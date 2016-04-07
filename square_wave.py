import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)
GPIO.setup(17, GPIO.OUT)

#Stability happens around 5kHz with 1% deviation
p = GPIO.PWM(17, 5000)
p.start(0)

x=0

p.ChangeDutyCycle(50)
while 1:
  x=x+1

p.stop()
GPIO.cleanup()
