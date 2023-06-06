#include <stdio.h>

int main(int argc, char const *argv[])
{
    int controle;
    int number;
    int conta_par, conta_impar;

    conta_par = 0;
    conta_impar = 0;

                                //ESTRUTURA DE REPETIÇÃO DEFINIDA
    controle = 0;               //INICIALIZAÇÃO
    while(controle != 10){      //CONDIÇÃO DE PARADA
        
        printf("Digite o número: ");
        scanf("%d", &number);
        
        if(number % 2 == 0){
            conta_par += 1;
        }else{
            conta_impar = conta_impar + 1;
        }

        controle += 1;          //INCREMENTO
    }

    printf("Total de pares: %d\nTotal de impares: %d\n\n", conta_par, conta_impar);

    return 0;
}
