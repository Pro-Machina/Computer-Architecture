import gates

def memory(i, s):
    a = 0
    b = 0
    c = 0
    o = 0

    a = gates.NAND(i, s)
    b = gates.NAND(a, s)
    c = gates.NAND(o, b)
    o = gates.NAND(a, c)

    print("Output bit = ", o)