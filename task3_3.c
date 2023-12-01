#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,c;
    printf("enter the numer : \n");
    scanf("%d",&a);
    printf("enter power : \n");
    scanf("%d",&b);
    c = a ;
    for(i=1;i<b;i++)
    {
        c=a*c;
    }
    printf("%d^%d=%d",a ,b ,c);


    return 0;
}
