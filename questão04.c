#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  printf("JOGO DA SENHA!!!");

  int key;
  int password;
  int i;

  // choosing password
  printf("\nDigite uma senha entre 0 e 100 para que adivinhem: ");
  scanf("%d", &key);
  if (key > 0 && key < 100)
  {
    // guessing password
    for (i = 1; i < 6; i++)
    {
      printf("\nessa é a tentativa %d", i);

      printf("\nAdivinhe a senha: ");
      scanf("%d", &password);

      if (password == key)
      {
        printf("\nParabéns!! Você acertou!! O jogador 1 digitou %d.", key);
        break;
      }
      else if (password < key)
      {
        printf("A senha é menor que o valor digitado, tente novamente");
      }
      else
      {
        printf("A senha é maior que o valor digitado, tente novamente");
      }
    }
  }
  else
  {
    printf("valor inválido, tente novamente!! ");
  }
  return 0;
}