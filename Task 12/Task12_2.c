#include <stdio.h>
#include <stdlib.h>

unsigned int Num_of ;
unsigned int Cor_ans ;
unsigned int wrong_ans ;
unsigned index1;
char *Ptr1 = NULL;
char *Ptr2 = NULL;
unsigned int *ptr3 = NULL;


int main() {



  Ptr1 = (char *)malloc(10 * sizeof(char));
  printf("Input Key to the item : \n");
  for (index1 = 0; index1 < 13; index1++) {
    scanf(" %c", &(Ptr1[index1]));
  }


  Ptr2 = (char *)malloc(10 * sizeof(char));
  printf("Input responses of student : \n");
  for (index1 = 0; index1 < 13; index1++) {
    scanf(" %c", &(Ptr2[index1]));
  }


  ptr3 = (unsigned int *)malloc((10 * sizeof(unsigned int)));
  for (index1 = 0; index1 < 13; index1++) {
    if (Ptr1[index1] == Ptr2[index1])
    {
      Cor_ans++;
      Num_of++;
    }
    else
    {
      Num_of++;
      ptr3[wrong_ans] = Num_of;
      wrong_ans++;
    }
  }



  printf("Score is  %i out of 13 \n", Cor_ans);
  printf("Response to the item below are wrong: ");


  for (index1 = (wrong_ans - 1) ; index1 >= 0; index1--)
  {
    printf("%i, ", ptr3[index1]);
  }

  return 0;
}
