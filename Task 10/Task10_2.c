#include <stdio.h>
#include <stdlib.h>

void summation_subtraction(float *Ptr_Num1,float *Ptr_Num2);

float NumberOne , NumberTwo   ;
float summation , subtraction ;


int main()
{
    printf("Enter two numbers : \n");
    scanf("%f%f", &NumberOne , &NumberTwo);

    printf("\nThe Number One is = %0.3f\n", NumberOne );
    printf("The Number Two is = %0.3f\n", NumberTwo );

    summation_subtraction(&NumberOne,&NumberTwo);
    printf("\nThe summing of Two Numbers is = %0.3f\n", summation );
    printf("The subtracting of Two Numbers is = %0.3f\n",subtraction );

    return 0;
}


void summation_subtraction(float *Ptr_Num1,float *Ptr_Num2)
{
    float *ptr_summation = NULL ;
    float *ptr_subtraction = NULL ;


    ptr_summation = &summation;
    ptr_subtraction = &subtraction;

    *ptr_summation= *Ptr_Num1+ *Ptr_Num2;
    *ptr_subtraction = *Ptr_Num1 - *Ptr_Num2;

}
