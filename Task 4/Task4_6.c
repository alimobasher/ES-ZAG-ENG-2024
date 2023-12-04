#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, x, y;

    printf("Enter four numers : ");
    scanf("%d %d %d %d", &a, &b , &c, &d);

    x= a * b * c * d;

    y = x % 100;

    printf("%d\n",y);

    return 0;
}
