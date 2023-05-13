/*
1- Pegar parte INTEIRA
2- Subtrair com o valor inicial para conseguir parte DECIMAL
3 - Mult por 100 
4 - Arredondar com round() 
5 - Tentar modf()
*/

#include <stdio.h>
#include <math.h>

void initFunc();
int quantidadeFunc(int total, int valorDivisao);
int restoFunc(int total, int quantidade, int valorDivisao);

int main(int argc, char const *argv[])
{
  initFunc();
  return 0;
}

void initFunc(){
  double total;
  scanf("%lf", &total);
  int parteInteira, parteDecimal;
  int quantidade;

  parteInteira = (int) total;
  parteDecimal = round((total - parteInteira) * 100);
  //parteDecimal =  (int) ((total - parteInteira) * 100);

  /*
  double inteira, decimal;
  decimal = modf(total, &inteira);
  parteDecimal = (int) (decimal * 100);
  parteInteira = (int) inteira;
  */

  //printf("Parte inteira: %d\n", parteInteira);
  //printf("Parte decimal: %d\n", parteDecimal);

  printf("NOTAS:\n");

  quantidade = quantidadeFunc(parteInteira, 100);
  parteInteira = restoFunc(parteInteira, quantidade, 100);
  printf("%d nota(s) de R$ 100.00\n", quantidade);

  quantidade = quantidadeFunc(parteInteira, 50);
  parteInteira = restoFunc(parteInteira, quantidade, 50);
  printf("%d nota(s) de R$ 50.00\n", quantidade);

  quantidade = quantidadeFunc(parteInteira, 20);
  parteInteira = restoFunc(parteInteira, quantidade, 20);
  printf("%d nota(s) de R$ 20.00\n", quantidade);

  quantidade = quantidadeFunc(parteInteira, 10);
  parteInteira = restoFunc(parteInteira, quantidade, 10);
  printf("%d nota(s) de R$ 10.00\n", quantidade);

  quantidade = quantidadeFunc(parteInteira, 5);
  parteInteira = restoFunc(parteInteira, quantidade, 5);
  printf("%d nota(s) de R$ 5.00\n", quantidade);

  quantidade = quantidadeFunc(parteInteira, 2);
  parteInteira = restoFunc(parteInteira, quantidade, 2);
  printf("%d nota(s) de R$ 2.00\n", quantidade);

  printf("MOEDAS:\n");

  quantidade = quantidadeFunc(parteInteira, 1);
  parteInteira = restoFunc(parteInteira, quantidade, 1);
  printf("%d moeda(s) de R$ 1.00\n", quantidade);

  quantidade = quantidadeFunc(parteDecimal, 50);
  parteDecimal = restoFunc(parteDecimal, quantidade, 50);
  printf("%d moeda(s) de R$ 0.50\n", quantidade);

  quantidade = quantidadeFunc(parteDecimal, 25);
  parteDecimal = restoFunc(parteDecimal, quantidade, 25);
  printf("%d moeda(s) de R$ 0.25\n", quantidade);

  quantidade = quantidadeFunc(parteDecimal, 10);
  parteDecimal = restoFunc(parteDecimal, quantidade, 10);
  printf("%d moeda(s) de R$ 0.10\n", quantidade);

  quantidade = quantidadeFunc(parteDecimal, 5);
  parteDecimal = restoFunc(parteDecimal, quantidade, 5);
  printf("%d moeda(s) de R$ 0.05\n", quantidade);

  quantidade = quantidadeFunc(parteDecimal, 1);
  parteDecimal = restoFunc(parteDecimal, quantidade, 1);
  printf("%d moeda(s) de R$ 0.01\n", quantidade);

  
}

int quantidadeFunc(int total, int valorDivisao){
  return total/valorDivisao;
}

int restoFunc(int total, int quantidade, int valorDivisao){
  return total - (quantidade * valorDivisao);
}