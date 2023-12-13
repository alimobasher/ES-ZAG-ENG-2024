#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, s=0, e,t;
    printf("Enter the num of numbers:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the numbers:");

    for (int i = 0; i < n; i++)
     {

           scanf("%d", &arr[i]);
     }

    e= n - 1;
    while (s<=e)
     {

    int t = arr[s];
    arr[s] = arr[e];
    arr[e] = t;
    s++;
    e--;
     }


   for (int i = 0; i < n; i++)
    {
    printf("%d ", arr[i]);
    }
   printf("\n");

    return 0;
}
