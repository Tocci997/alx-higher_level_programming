#!/usr/bin/python3
if __name__ == "__main__":

    import sys

    SUM = 0
    for i in range(1, len(sys.argv)):
        SUM += int(sys.argv[i])
    print("{}".format(SUM))

