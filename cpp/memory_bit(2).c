#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "gates.h"

int main()
{
    int i = 0, s = 0, a = 0, b = 0, c = 0, o = 0;

    while(i != 999)
    {
        printf("To remember: \n");
        fflush;
        scanf("%d", &i);

        printf("Set value: \n");
        fflush;
        scanf("%d", &s);

        a = NAND(i, s);
        printf("a: %d\n", a);
        b = NAND(a, s);
        printf("b: %d\n", b);
        c = NAND(o, b);
        printf("c: %d\n", c);
        o = NAND(a, c);
        printf("o: %d\n", o);

        printf("The output is: %d\n", o);
    }
}