/*
Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos 
reais conseguiu poupar. Faça um algoritmo para ler a quantidade de 
cada tipo de moeda, e imprimir o valor total economizado, em reais. 
Considere que existam moedas de 1, 5, 10, 25 e 50 centavos, e ainda 
moedas de 1 real. Não havendo moeda de um tipo, a quantidade 
respectiva é zero. ​
*/

#include <stdio.h>
int main(){

    int qtdade;
    int valor;

    printf("Quantidade de moedas de R$ 0,01: ");
    scanf("%d", &qtdade);
    valor = qtdade;

    printf("Quantidade de moedas de R$ 0,05: ");
    scanf("%d", &qtdade);
    valor = valor + qtdade * 5;

    printf("Quantidade de moedas de R$ 0,10: ");
    scanf("%d", &qtdade);
    valor = valor + qtdade * 10;

    printf("Quantidade de moedas de R$ 0,25: ");
    scanf("%d", &qtdade);
    valor = valor + qtdade * 25;    

    printf("Quantidade de moedas de R$ 0,50: ");
    scanf("%d", &qtdade);
    valor = valor + qtdade * 50;

    printf("Quantidade de moedas de R$ 1,00: ");
    scanf("%d", &qtdade);
    valor = valor + qtdade * 100;

    printf("Pedrinho possui R$ %.2f \n\n", valor/100.0);
}

