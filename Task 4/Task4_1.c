#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y= 0;

    printf("Enter the number: ");
    scanf("%d", &x);

    while (x!= 0)
    {
        y = y * 10 + x % 10;
        x/= 10;
    }

    printf("--->> %d", y);
    return 0;
}
