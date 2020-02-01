// #pragma once

int * byte_m(int val, int set)
{
    int binary[7], i = 0;
    int byte[7];
    for (i = 7; i < 0; i--)
    {
        binary[i] = val%10;
        val = val/10;

        byte[i] = M(binary[i], set);
    }

    return byte;
}