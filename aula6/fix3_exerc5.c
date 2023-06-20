#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number;
    int controle;

    number = 1;
    while(number <= 10){

        printf("\n\nTabuada do %d\n", number);
        controle = 0;
        while (controle <= 10){
            printf("%d x %d = %d\n", number, controle, number * controle);
            controle += 1;
        }
    
        number += 1;
    }

    return 0;
}
