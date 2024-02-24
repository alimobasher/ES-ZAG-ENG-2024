#include <stdio.h>
#include <stdlib.h>

unsigned int x = 10 ,y = 20 ,z = 30;

unsigned int *p= &x ;
unsigned int *q= &y ;
unsigned int *r= &z ;

int main()
{
    /* print the Values of int variables  */
    printf("The value of x = %i\n",x);
    printf("The value of y = %i\n",y);
    printf("The value of z = %i\n\n",z);

    /* print the address of int Variables by point to them with Pointers */
    printf("The address of x by (p) = %i\n",p);
    printf("The address of y by (q) = %i\n",q);
    printf("The address of z by (r) = %i\n\n",r);

    /*print the values of int variables by point to them with pointers (dereferencing)*/
    printf("The value of x by (p) = %i\n",*p);
    printf("The value of y by (q) = %i\n",*q);
    printf("The value of z by (r) = %i\n",*r);

    printf("\n---> Swapping pointers <----\n\n");

    unsigned int temp =0;

    temp = p;
    p = q;
    q = r;
    r = temp;


    /* print the Values of int variables  */
    printf("The value of x = %i\n",x);
    printf("The value of y = %i\n",y);
    printf("The value of z = %i\n\n",z);

    /* print the address of int Variables by point to them with Pointers */
    printf("The address of x by (r) = %i\n",r);
    printf("The address of y by (p) = %i\n",p);
    printf("The address of z by (q) = %i\n\n",q);

    /*print the values of int variables by point to them with pointers (dereferencing)*/
    printf("The value of x by (r) = %i\n",*r);
    printf("The value of y by (p) = %i\n",*p);
    printf("The value of z by (q) = %i\n",*q);



    return 0;
}
