#include <stdio.h>

int main()
{
    int nota_1, nota_2, nota_3;
    int peso_1, peso_2, peso_3;
    int soma_pesos, soma_multiplicacao;
    int media;

    peso_1 = 5;
    peso_2 = 7;
    peso_3 = 3;

    soma_pesos = peso_1 + peso_2 + peso_3;

    printf("Digite três notas: \n");
    scanf("%d%d%d", &nota_1, &nota_2, &nota_3);

    soma_multiplicacao = nota_1 * peso_1;
    soma_multiplicacao = soma_multiplicacao + nota_2 * peso_2;
    soma_multiplicacao = soma_multiplicacao + nota_3 * peso_3;

    media = soma_multiplicacao / soma_pesos;

    printf("Média ponderada: %d\n\n", media);

    return 0;
}
