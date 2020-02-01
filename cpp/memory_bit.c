#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "gates.h"
#include "memoryBit.h"

int main()
{
    int i = 0, s = 0, o = 0;
    printf("Enter '99' to exit \n");
    while(1)
    {
        printf("To remember: \n");
        fflush;
        scanf("%d", &i);

        if (i != 1 && i != 0)
            break;

        else
        {
            printf("Set value: \n");
            fflush;
            scanf("%d", &s);

            if (s == 1)
            {
                o = M(i, s);
                printf("The output is: %d\n", o);
            }
            else
                printf("The output is: %d\n", o);
        }
    }
}