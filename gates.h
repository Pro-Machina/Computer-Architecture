// #pragma once

int AND(int a, int b)
{
    if(a==1 && b ==1)
        return 1;
    else
        return 0;
}

int NOT(int a)
{
    if(a == 1)
        return 0;
    else
        return 1;
}

int OR(int a, int b)
{
    if (a == 0 && b == 0)
        return 0;
    else
        return 1;
}

int NAND(int a, int b)
{
    return NOT(AND(a, b));
}
