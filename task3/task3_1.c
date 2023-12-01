#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b, c, d, e  ;
    printf("Enter five numbers :\n");
    scanf("%d %d %d %d %d ",&a,&b,&c,&d,&e);

    switch(a%3)
    {
   case 0:
    printf("%d  are divisible by 3\n",a);
   default:
       printf("%d  are not divisible by 3\n",a);
    }
    switch(b%3)
    {
   case 0:
    printf("%d  are divisible by 3\n",b);
     default:
       printf("%d  are not divisible by 3\n",b);
    }
    switch(c%3)
    {
   case 0:
    printf("%d  are divisible by 3\n",c);
     default:
       printf("%d  are not divisible by 3\n",c);
    }
    switch(d%3)
    {
   case 0:
    printf("%d  are divisible by 3\n",d);
     default:
       printf("%d  are not divisible by 3\n",d);
    }
    switch(e%3)
    {
   case 0:
    printf("%d  are divisible by 3\n",e);
     default:
       printf("%d  are not divisible by 3\n",e);
    }


    return 0;
}
