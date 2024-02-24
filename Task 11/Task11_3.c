#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    signed int salary;
    signed int bonus;
    signed int deduction;

     char Name[20];
}employee;


employee Ahmed;
employee Waleed;
employee Amr;
int total;

int main()
{
    printf("Please Enter Ahmed Salary: ");
    scanf("%i", &Ahmed.salary);
    printf("Please Enter Ahmed Bonus: ");
    scanf("%i", &Ahmed.bonus);
    printf("Please Enter Ahmed Deductions: ");
    scanf("%i", &Ahmed.deduction);

    printf("Please Enter Waleed Salary: ");
    scanf("%i", &Waleed.salary);
    printf("Please Enter Waleed Bonus: ");
    scanf("%i", &Waleed.bonus);
    printf("Please Enter Waleed Deductions: ");
    scanf("%i", &Waleed.deduction);

    printf("Please Enter Amr Salary: ");
    scanf("%i", &Amr.salary);
    printf("Please Enter Amr Bonus: ");
    scanf("%i", &Amr.bonus);
    printf("Please Enter Amr Deductions: ");
    scanf("%i", &Amr.deduction);

    total = Ahmed.salary  + Ahmed.bonus  - Ahmed.deduction  +
            Waleed.salary + Waleed.bonus - Waleed.deduction +
            Amr.salary    + Amr.bonus    - Amr.deduction;

    printf("Total Value Needed is %i ",total);


    return 0;
}


