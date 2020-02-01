#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "gates.h"
#include "memoryBit.h"
#include "byte.h"

int main()
{
    int *A, i = 0;

    A = byte_m(10010101, 1);
    for(i = 0; i < 8; i++)
    {
        printf("%d", *(A + i));
    }
    return 0;
}