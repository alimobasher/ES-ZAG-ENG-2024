#include <stdio.h>
#include <stdlib.h>


int main()
 {

  int x=1,y=2,num;

    printf("Enter the Positive int number: ");
    scanf("%d",&num);


    if(num==2){printf("The number is prime");}


    else if ((num==1) | (num==0))
            {
                printf("The number is not prime");
            }

    else if(num>2)
    {

            while((y!=num) & (x!=0))
            {
                x=num%y;
                y++;
            }
            if(x==0)
            {
                printf("The number is not prime");
            }
            else
            {
                printf("The number is prime");
            }

        }

    else{printf("erorr");}

return 0;
 }

