#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i,j,a,x;
    printf("Enter the number of rows: ");
    scanf("%d",&a);
     x=0;

    for(i=0;i<a;i++)
    {
       for(j=0;j<=i;j++)
      {
       x=++x;
       printf("%d ",x);
      }
    printf("\n");
    }

     return 0;
}
