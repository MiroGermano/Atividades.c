#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  int firstNumber, secondNumber;
  char op; //

  fflush(stdin);

  printf("escolha uma operacao: \n [ + ] Adicao \n [ - ] Subtracao \n [ x ] Multiplicacao \n [ / ] Divisao \n");
  printf("= ");
  scanf("%c", &op);

  printf("Digite o Primeiro Valor: ");
  scanf("%d", &firstNumber);

  printf("Digite o Segundo Valor: ");
  scanf("%d", &secondNumber);

  switch (op)
  {
  case '+':
    printf("Resultado: %d + %d = %d", firstNumber, secondNumber, firstNumber + secondNumber);
    break;
  case '-':
    printf("Resultado: %d - %d = %d", firstNumber, secondNumber, firstNumber - secondNumber);
    break;
  case 'x':
    printf("Resultado: %d x %d = %d", firstNumber, secondNumber, firstNumber * secondNumber);
    break;
  case '/':
    printf("Resultado: %d / %d = %d", firstNumber, secondNumber, firstNumber / secondNumber);
    break;
  default:
    printf("Digite um valor válido!");
  }

  return 0;
}