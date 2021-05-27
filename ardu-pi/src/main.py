import serial


if __name__ == '__main__':
    ard = serial.Serial("/dev/ttyACM0", 9600, timeout=1)
    ard.flush()

    while True:
        if ard.in_waiting > 0:
            line = ard.readline().decode('utf-8').rstrip()
            print(line)