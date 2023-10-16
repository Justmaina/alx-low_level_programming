from ctypes import CDLL

lib = CDLL('./libsum.so')

addition = lib.add(5, 10)
print("sum from c: ", addition)

subtraction = lib.sub(6, 3)
print("subtraction from c: ",subtraction)
