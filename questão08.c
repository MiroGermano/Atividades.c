#include <stdio.h>

int main(void)
{
  int vet[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {
                                                          11,
                                                          12,
                                                          13,
                                                          14,
                                                          15,
                                                      },
                   {16, 17, 18, 19, 20},
                   {21, 22, 23, 24, 25}};

  // preencher vetor
  /* for (int i = 0; i < 5; i++) {
     for (int j = 0; j < 5; j++) {
       printf("vet[%d][%d] \n",i ,j);
       vet[i][j] = scanf("%d",&vet[i][j]);
     }
   }
   */
  // print vetor
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("%d ", vet[i][j]);
    }
    printf("\n");
  }
  // inverter vetor
  printf("\n");
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("%d ", vet[j][i]);
    }
    printf("\n");
  }
  return 0;
}