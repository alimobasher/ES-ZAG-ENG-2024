#include <stdio.h>
#include <stdlib.h>

unsigned int Factorial(signed int NumberOfFactorial);

signed int Number;
unsigned int Resault ;

int main()
{
  printf("Please enter signed the number = ");
  scanf("%i",&Number);


  if (Number<0)
  {
      printf("\nError !! \n");
  }
  else
  {
      printf("\nThe factorial of number %i = %i\n",Number ,Factorial(Number) );
  }

    return 0;
}



unsigned int Factorial(signed int NumberOfFactorial)
{
   if (NumberOfFactorial == 0)
   {
       Resault = 1;
   }
   else
   {
       Resault = NumberOfFactorial * Factorial(NumberOfFactorial - 1);
   }

   return Resault;
}
