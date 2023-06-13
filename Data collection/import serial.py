import serial
import time

ser = serial.Serial('COM7', 9600)
i = 1

while i < 600:
    j = 0
    stringa = str(i) + '.csv'
    f = open(stringa, 'x')
    while j < 200:
        if ser.inWaiting():
            data = ser.read()
            word = str(data)
            word = data.decode('utf-8').replace('\r', '')
            print(data)
            f.write(word)
            if word == "\n":
                j = j + 1
            f.flush()
    i = i + 1
    f.close()
