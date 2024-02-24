#include <stdio.h>
#include <stdlib.h>

unsigned int Number = 10;
unsigned int *Ptr_Number = &Number;


int main()
{
   printf("The Number is =%i\n\n",Number);

   *Ptr_Number = 20;

   printf("The Number after edit  is =%i\n",Number);



    return 0;
}

