#include <stdio.h>
#include <stdlib.h>

int main()
{

    int min, max, arr[10], i;

    printf("Enter 10 values:\n");


    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = max = arr[0];

    for ( i = 1; i < 10; i++)
    {

        if (arr[i] < min)
        {
            min = arr[i];
        }


        if (arr[i] > max)
        {
            max = arr[i];
        }
    }


    printf("The minimum value is %d\n", min);
    printf("The maximum value is %d\n", max);

    return 0;
}
