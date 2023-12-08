#include <stdlib.h>
#include <stdio.h>

unsigned char set_bit(unsigned char n, int p);
unsigned char clear_bit(unsigned char n, int p);
unsigned char toggle_bit(unsigned char n, int p);
int read_bit(unsigned char n, int p);



int main()
{
    unsigned char n;
    int p,f;

    printf("Enter the numbers : ");
    scanf("%d%d%d", &n,&p,&f);

    switch(f)
    {
        case 1:
            n = set_bit(n, p);
            printf("The number after setting the bit is %d\n", n);
            break;
        case 2:
            n = clear_bit(n, p);
            printf("The number after clearing the bit is %d\n", n);
            break;
        case 3:
            n = toggle_bit(n, p);
            printf("The number after toggling the bit is %d\n", n);
            break;
        case 4:
            n = read_bit(n, p);
            printf("The bit value at the position is %d\n", n);

    }
    return 0;
}


unsigned char set_bit(unsigned char n, int p)
{

    n = n | (1 << p);
    return n;
}


unsigned char clear_bit(unsigned char n, int p)
{

    n = n & ~(1 << p);
    return n;
}


unsigned char toggle_bit(unsigned char n, int p)
{

    n = n ^ (1 << p);
    return n;
}


int read_bit(unsigned char n, int p)
{

    int bit = (n & (1 << p)) >> p;
    return bit;
}

