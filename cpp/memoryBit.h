// #pragma once

int M(int bit, int set)
{
    int i = bit, s = set, a = 0, b = 0, c = 0, o = 0;
    a = NAND(i, s);        
    b = NAND(a, s);
    c = NAND(o, b);
    o = NAND(a, c);

    return o;
}