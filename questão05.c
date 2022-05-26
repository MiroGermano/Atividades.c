#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int loop = 1;
  while (loop != 0)
  {

    printf("JOGO DA SENHA!!!");

    int key;
    int password;
    int i;

    // choosing password
    printf("\nDigite uma senha entre 0 e 100 para que adivinhem: ");
    scanf("%d", &key);
    if (key >= 0 && key < 100)
    {
      // guessing password
      for (i = 1; i < 6; i++)
      {
        printf("\nessa e a tentativa %d", i);

        printf("\nAdivinhe a senha: ");
        scanf("%d", &password);

        if (password == key)
        {
          printf("\nParabens!! Você acertou!! O jogador 1 digitou %d.", key);
          break;
        }
        else if (password < key)
        {
          if (key - 1 == password)
          {
            printf("Tá quente");
          }
          else
          {
            printf("O valor digitado e menor que a senha! ");
          }
        }
        else
        {
          if (key + 1 == password)
          {
            printf("ta quente");
          }
          else
          {
            printf("O valor digitado e maior que a senha! ");
          }
        }
      }
      // game over
      if (key != password)
      {
        printf("\nVoce perdeu :( ");
      }
    }
    else
    {
      printf("valor invalido, tente novamente!! ");
    }

    printf("\ndeseja jogar novamente? Digite 0 para parar e qualquer numero pra continuar! ");
    scanf("%d", &loop);
  }

  return 0;
}