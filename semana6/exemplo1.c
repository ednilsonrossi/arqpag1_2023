/*
    Considerando a assinatura da função:

        int soma(int a, int b);

    Implemente um programa que realiza a soma de três valores. O resultado da soma
    deve ser apresentado ao usuário. Atenção, o programa consegue utilizar apenas a 
    scanf(), printf() e soma().
*/

#include <stdio.h>

int soma(int a, int b);

int main(int argc, char const *argv[])
{
    int v1, v2, v3, v4, r;
    v1 = 5;
    v2 = 10;
    v3 = 15;
    v4 = 20;

    //r = soma(v1, soma(v2, v3));
    r = soma(soma(v1, v2), soma(v3, v4));

    printf("SOMA = %d\n\n", r);
    return 0;
}

int soma(int a, int b){
    return b + a;
}