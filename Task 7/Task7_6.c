#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("Enter the sent:");
  char s[100];
  fgets(s, 100, stdin);

    for (int i = 0; s[i] != '\0'; i++) {

    if (s[i] == ' ') {
        printf("\n");
    }

    else {
        printf("%c", s[i]);
    }
}


    return 0;
}
