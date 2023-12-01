#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,c;
    printf("enter number A: \n");
    scanf("%d",&a);
    printf("enter number B: \n");
    scanf("%d",&b);
    printf("output:\n");
    c=a;
    printf("%d\n",c);
    for(i=1;i<=(b-a);i++)
    {
        c=c+1;

      printf("%d\n",c);

    }
    return 0;
}
