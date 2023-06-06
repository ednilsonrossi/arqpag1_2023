#include <stdio.h>

int main(int argc, char const *argv[])
{
    int controle, number, conta_par;
    char continuar;

    /*
    conta_par = 0;
    controle = 1;
    while(controle != 0){
        printf("Digite o número: ");
        scanf("%d", &number);
        
        if(number % 2 == 0){
            conta_par += 1;
        }

        printf("Continuar digitando (1 - sim | 0 - não): ");
        scanf("%d", &controle);
    }

    printf("Foram digitados %d números pares\n\n", conta_par);
    */

    conta_par = 0;
    continuar = 's';
    while(continuar == 's' || continuar == 'S'){
        printf("Digite o número: ");
        scanf("%d", &number);
        //fflush(stdin);
        __fpurge(stdin); //Limpa o buffer do teclado.
        
        if(number % 2 == 0){
            conta_par += 1;
        }

        printf("Continuar digitando (s - sim | n - não): ");
        //scanf("%c", &continuar);
        continuar = getchar();
    }

    printf("Foram digitados %d números pares\n\n", conta_par);

    return 0;
}
