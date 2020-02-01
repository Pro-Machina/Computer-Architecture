def NAND(a, b):
    if a == 1 and b == 1:
        return 0
    else:
        return 1

def memory(i, s):
    a = 0
    b = 0
    c = 0
    o = 0
    while(1):
        a = NAND(i, s)
        b = NAND(a, s)
        c = NAND(o, b)
        o = NAND(a, c)

        print("Output bit: %d\n", o)
            

i = input("Enter bit to remember: ")
s = input("Set bit: ")

memory(i, s)
