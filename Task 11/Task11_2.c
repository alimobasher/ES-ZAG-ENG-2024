#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char Name[20];
    float Price;
    unsigned int Quantity;
    float value_of_item;

}values;

void update_values(values *ptr);

values item;
unsigned int var1 , var2 ;


int main()
{
    printf("input increment values : price increment and quantity increment\n");
    scanf("%i %i",&var1, &var2);
    printf("Update  values of item\n");

    update_values(&item);

    return 0;
}


void update_values(values *ptr){

    printf("Name: ");
    gets(&(ptr->Name));

    printf("Price : ");
    scanf("%f", &(ptr->Price));

    printf("Quantity : ");
    scanf("%i",&(ptr->Quantity));

    ptr->value_of_item = ptr->Price * ptr->Quantity;

    printf("\nValue of the item %f " ,ptr->value_of_item);
}
