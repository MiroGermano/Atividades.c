#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int i;
  int vet[100];

  srand(time(NULL));

  for (i = 0; i < 100; i++)
  {
    vet[i] = rand() % 100;
  }

  int menor = vet[0];
  int indice = 0;
  int anterior = vet[0], posterior = vet[0];

  for (i = 0; i <= 99; i++)
  {
    if (vet[i] <= menor)
    {
      menor = vet[i];
      indice = i;
      if (i == 0)
      {
        anterior = 0;
        posterior = vet[i + 1];
      }
      else if (i == 99)
      {
        anterior = vet[i - 1];
        posterior = 99;
      }
      else
      {
        anterior = vet[i - 1];
        posterior = vet[i + 1];
      }
    }
    printf("\n%d° - %d", i, vet[i]);
  }

  printf("\nmenor valor: %d", menor);
  printf("\nmenor valor está no indice : %d", indice);
  if (indice != 0)
  {
    printf("\nValor armazenado na posicao anterior: %d", anterior);
  }
  if (indice != 99)
  {
    printf("\nValor armazenado na posicao posterior: %d", posterior);
  }

  return 0;
}