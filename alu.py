
def num_to_bin(value):
    binary = []
    while value != 0:
        bit = value % 2
        binary.insert(0, bit)
        value = value / 2

    binary_val = binary
    for i in range(0, (8 - len(binary))):
        binary_val.insert(i, 0)

    return binary_val

print(num_to_bin(34))

def bin_to_num(binary):
    decimal = 0
    for i in range(0, len(binary)):
        if(binary[i] == 1):
            decimal = decimal + ( 2**((len(binary)-1) - i) )
        else:
            pass

    return decimal

def half_adder(value1, value2):
    sum_half_adder = 0
    carry_half_adder = 0
    
    if (value1 == value2 == 1):
        sum_half_adder = 0
        carry_half_adder = 1
    elif (value1 == value2 == 0):
        sum_half_adder = 0
    elif (value1 == 1 and value2 == 0) or (value1 == 0 and value2 == 1):
        sum_half_adder = 1

    return[carry_half_adder, sum_half_adder]

