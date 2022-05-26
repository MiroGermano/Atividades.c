#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int vet[100];
  int i, j, aux;

  srand(time(NULL));

  printf("Colocando valores em oredem crescente: \n");

  for (i = 0; i <= 99; i++) // array para criação de valores aleatórios
  {
    vet[i] = rand() % 100;
  }

  for (i = 0; i <= 99; i++) // Mostrando os valores criados
  {
    printf("%d\t", vet[i]);
  }

  for (i = 0; i <= 99; i++) // trocando os valores
  {
    for (j = i + 1; j <= 99; j++)
    {
      if (vet[i] > vet[j])
      {

        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
      }
    }
  }

  printf("\n\n");

  for (i = 0; i <= 99; i++) // exibição
  {
    printf("%d\t", vet[i]);
  }

  return 0;
}