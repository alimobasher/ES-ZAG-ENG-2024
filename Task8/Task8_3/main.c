#include <stdio.h>
#include <stdlib.h>
#include "headerfun.h"

unsigned int Number,Bit;

int main()
 {
     printf("Enter the number you want to eidt : \n");
     scanf("%i",&Number);
     printf("Enter the bit position : \n");
     scanf("%i",&Bit);


    Set_Bit(Number,Bit);
        printf("The number after set operation is = %i\n",Number);
    Clr_Bit(Number,Bit);
        printf("The number after clear operation is = %i\n",Number);
    Toggle_Bit(Number,Bit);
        printf("The number after Toggle operation is = %i\n",Number);


     return 0;
 }
