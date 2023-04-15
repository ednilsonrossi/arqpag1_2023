#include <stdio.h>

int main(int argc, char const *argv[])
{
    int moedas;
    float valor;

    printf("Moedas de R$ 0.01: ");
    scanf("%d", &moedas);
    valor = moedas * 0.01;

    printf("Moedas de R$ 0.05: ");
    scanf("%d", &moedas);
    valor = valor + moedas * 0.05;

    printf("Moedas de R$ 0.10: ");
    scanf("%d", &moedas);
    valor = valor + moedas * 0.1;

    printf("Moedas de R$ 0.25: ");
    scanf("%d", &moedas);
    valor = valor + moedas * 0.25;

    printf("Moedas de R$ 0.50: ");
    scanf("%d", &moedas);
    valor = valor + moedas * 0.5;

    printf("Moedas de R$ 1.00: ");
    scanf("%d", &moedas);
    valor = valor + moedas;

    printf("Valor da economia: R$ %.2f\n\n", valor);
    return 0;
}
