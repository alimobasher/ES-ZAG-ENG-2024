#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ,i , a,bin=0;
    printf("Enter the number:\n");
    scanf("%d",&x);

    for(i=1;x>0;i*=10)
    {
    bin += (x%2) * i;
    x /=2;

    }

    printf(" -->> %d",bin);

    return 0;//
}
