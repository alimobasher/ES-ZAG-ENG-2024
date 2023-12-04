#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x, y=0;

    printf("Enter the number: ");
    scanf("%u", &x);

    while (x!=0)
    {
        if (x & 1)
        {
         y++;
        }

        x>>= 1;
    }

    printf("The number of 1's is %d", y);

    return 0;
}
