#include <stdio.h>

int main(int argc, char const *argv[])
{

    char nome[30];
    int idade;

    printf("Digite o nome.........: ");
    scanf("%s", nome);

    printf("Digite a idade (anos).: ");
    scanf("%d", &idade);

    idade = idade * 365;

    printf("%s, você já viveu %d dias. \n", nome, idade);
    return 0;
}
