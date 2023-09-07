import serial
import sys
import time

ser = serial.Serial('/dev/ttyUSB0', 9600, timeout=100)

def write_read(x):
    ser.write(bytes(x, 'utf-8'))
    time.sleep(1)
    data = ser.readline()
    return data

def main():
    print("Before start please wait for an answer from device - `Start listening...`")

    value = write_read("3")
    print(value.decode())

    while True:
        num = input('[root@usbSwitch]# ')

        if num == 'exit':
            ser.close()
            sys.exit(0)

        value = write_read(num)
        print('response: ' + value.decode())

if __name__ == '__main__':
    sys.exit(main())
