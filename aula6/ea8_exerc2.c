#include <stdio.h>
#define TARGET 4

int main(int argc, char const *argv[])
{
    long number, denominator, sum, count_perfects;

    count_perfects = 0;
    number = 2;

    /*
    A contagem de números perfeitos é feita em uma estrutura de repetição indefinida, isso
    porque não sabe-se a quantidade de repetições que será executada. De forma que a estrutura
    correta para essa ação é o while.
    */
    while (count_perfects != TARGET)
    {
        sum = 1; //Soma ŕ reiniciada a cada novo number.

        /*
        Estrutura de repetição definida, sabe-se que será realizado o cálculo
        até a metade de number com passo de 1 em 1.*/
        for(denominator = 2; denominator <= (number/2); denominator += 1){
            if(number % denominator == 0){
                sum += denominator;
            }
        }

        if(sum == number){
            printf("É perfeito: %d\n", number);
            count_perfects += 1;
        }

        number += 1;
    }
    
    return 0;
}
