#include <stdio.h>

int main(int argc, char const *argv[])
{
    char letra;
    letra = 'A';    //aspas simples
    printf("Letra: %c\n", letra);

    //Variável composta homogênea unidimensional OU vetor
    char palavra[30];
    //palavra = "ABCD";   //aspas duplas

    printf("Enter a character: \n");
    scanf("%c", &letra);
    printf("Letra: %c\n", letra);


    printf("Enter a string: \n");
    scanf("%s", palavra);
    printf("Palavra: %s\n", palavra);

    return 0;
}
