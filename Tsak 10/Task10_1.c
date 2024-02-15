#include <stdio.h>
#include <stdlib.h>

unsigned int NumberOne = 10;
unsigned int *Ptr = NULL;

int main()
{
    printf("NumberOne Value = %i\n\n" ,NumberOne);

    Ptr = &NumberOne;

    if(Ptr != NULL)
    {
        *Ptr = 20;
        printf("NumberOne Value edit = %i\n" ,NumberOne);
    }

    else
    {
        Printf("Error !!");

    }


    return 0;
}

