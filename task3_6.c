#include <stdlib.h>
#include <stdio.h>

int main(){

  int max,min,num,Nofnumber;

  printf("Enter The N of numbers: ");
  scanf("%d",&Nofnumber);

  printf("Enter the numbers: ");
  scanf("%d",&num);

  min=num;
  max=num;

  for(int i=1;i<Nofnumber;i++)
  {
      scanf("%d",&num);

      if(num>max)
        {
            max=num;
        }
      if(num<min)
      {
          min=num;
      }
  }

  printf("The maximum number is %d\n",max);
  printf("The minimum number is %d",min);

 return 0;
 }
