#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int vet[3] = {0};
  int i;

  for (i = 0; i <= 2; i++)
  {

    printf("Digite um valor: ");
    scanf("%d", &vet[i]);
  }

  if (vet[0] > vet[1] && vet[0] > vet[2])
  {
    if (vet[1] > vet[2])
    {
      printf("%d, %d, %d", vet[0], vet[1], vet[2]);
    }
    else
    {
      printf("%d, %d, %d", vet[0], vet[2], vet[1]);
    }
  }

  else if (vet[1] > vet[0] && vet[1] > vet[2])
  {
    if (vet[0] > vet[2])
    {
      printf("%d, %d, %d", vet[1], vet[0], vet[2]);
    }
    else
    {
      printf("%d, %d, %d", vet[1], vet[2], vet[0]);
    }
  }

  else
  {
    if (vet[0] > vet[1])
    {
      printf("%d, %d, %d", vet[2], vet[0], vet[1]);
    }
    else
    {
      printf("%d, %d, %d", vet[2], vet[1], vet[0]);
    }
  }

  return 0;
}