#include <stdio.h>

int main(int argc, char const *argv[])
{
    int controle;
    int n;
    int number;
    int maior;


    maior = 0;
    printf("Quantidade de números: ");
    scanf("%d", &n);

    printf("Digite número: ");
    scanf("%d", &maior);
    n = n - 1;
    while (n != 0){
        printf("Digite número: ");
        scanf("%d", &number);

        if(number > maior){
            maior = number;
        }

        n = n - 1;
    }

    /*
    controle = 0;
    while(controle != n){
        printf("Digite número: ");
        scanf("%d", &number);

        if(controle == 0){
            maior = number;
        }

        if(number > maior && controle >= 1){
            maior = number;
        }
        controle += 1;
    }
    */
    

    printf("Maior valor: %d\n\n", maior);
    

    return 0;
}
