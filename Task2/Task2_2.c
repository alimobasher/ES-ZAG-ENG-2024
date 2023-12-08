#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C;

    printf("Enter 3 numbers\nA:");
    scanf("%d",&A);

    printf("\nB:");
    scanf("%d",&B);

    printf("\nC:");
    scanf("%d",&C);

     int max,min;

    if (A < B && A < C) {
        min = A;
    } else if (B < C) {
        min = B;
    } else {
        min = C;
    }


    if (A > B && A > C) {
        max = A;
    } else if (B > C) {
        max = B;
    } else {
        max = C;
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

}
