import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)
GPIO.setup(17, GPIO.OUT)

p = GPIO.PWM(17, 50)
p.start(0)

p.ChangeDutyCycle(50)
time.sleep(3)
p.stop()
GPIO.cleanup()
