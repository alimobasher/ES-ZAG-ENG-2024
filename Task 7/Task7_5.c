#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the num of char:");
    scanf("%d", &n);

    char s[n];
    printf("Enter the char  :");
    scanf("%s", s);

     int f[10] = {0};

     for (int i = 0; s[i] != '\0'; i++)
        {

        if (s[i] >= '0' && s[i] <= '9')
          {

        int x = s[i] - '0';

        f[x]++;
          }
        }

    for (int i = 0; i < 10; i++)
      {
        printf("%d",f[i]);
      }
    printf("\n");

    return 0;
}
