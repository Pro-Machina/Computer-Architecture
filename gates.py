def AND(a, b):
    if(a==1 and b ==1):
        return 1
    else:
        return 0


def NOT(a):
    if(a == 1):
        return 0
    else:
        return 1


def OR(a, b):
    if (a == 0 and b == 0):
        return 0
    else:
        return 1


def NAND(a, b):
    return NOT(AND(a, b))