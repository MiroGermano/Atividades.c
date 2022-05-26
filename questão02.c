#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int finish = 1;
  while (finish != 0)
  {

    float firstGrade, secondGrade, thirdGrade;

    printf("Digite a sua primeira nota: ");
    scanf("%f", &firstGrade);

    printf("Digite a sua segunda nota: ");
    scanf("%f", &secondGrade);

    float solution = (firstGrade + secondGrade) / 2;

    if (solution >= 5 && firstGrade > 3 && secondGrade > 3)
    {
      printf("Parabens! sua nota foi %.2f.", solution);
    }

    else
    {
      printf("Digite a sua nota da Final: ");
      scanf("%f", &thirdGrade);

      if (firstGrade > secondGrade)
      {
        solution = (firstGrade + thirdGrade) / 2;
      }

      else
      {
        solution = (secondGrade + thirdGrade) / 2;
      }

      printf("sua nota foi: %.2f", solution);

      if (solution >= 5)
      {
        printf("\nVoce quase reprova, passou nas ultimas!");
      }
      else
      {
        printf("\nReprovado!!");
      }
    }

    printf("\nDigite 0 para encerrar, caso queira continuar digite qualquer numero!!");
    scanf("%d", &finish);
  }
  return 0;
}