#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,j,a,f;
    printf("enter number A: \n");
    scanf("%d",&x);

    a=x;
    f=x;


    for(j=--x;j>0;--j)
    {
        a=a*j;
    }

    printf("%d!=%d",f,a);

    return 0;
}
