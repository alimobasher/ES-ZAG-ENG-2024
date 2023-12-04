#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    char y;

    printf("Enter the char:");
    scanf("%c",&y);

    printf("Enter the number:");
    scanf("%d",&x);



    if(x%2==0) {printf("%c",y);}

    else if (x%2!=0) {printf("%c",y^(1<<5));}

    else {printf("Erorr");}




    return 0;
}
