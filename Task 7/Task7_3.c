#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, i, sum=0;
    printf("Enter the num of numbers:");
    scanf("%d", &n);


    int arr[n];

    printf("Enter the numbers:");
    for (int i = 0; i < n; i++)
        {
          scanf("%d", &arr[i]);

        }

     for ( i = 0; i < n; i++)
        {
          sum += arr[i];
        }


    printf("%d\n", sum);

    return 0;
}
