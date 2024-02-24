#include <stdio.h>
#include <stdlib.h>

unsigned int index2;
float the_average_of_numbers(unsigned int Array_Num[index2]);

signed int Number;
unsigned int index1;
unsigned int index2;

int main()
{
    printf("Please enter the numbers of array =");
    scanf("%i",&Number);

    unsigned int Array_Num[Number];

    for (index1 = 0; index1 < Number ;index1++)
    {
        printf("\nPlease enter The %i element in the array ",index1 +1);
        scanf("%i",&Array_Num[index1]);

    }
    printf(" the average of these numbers = %0.6f",the_average_of_numbers(Array_Num[Number]));


    return 0;
}


float the_average_of_numbers(unsigned int Array_Num[index2])
{
    float Resault = 0;

    if(index2 == Number)
    {
        Resault = 0;

    }
    else
    {
        Resault = ((Array_Num[index2] +the_average_of_numbers(Array_Num[index2+1]) ) / Number);
    }




    return Resault;
}
