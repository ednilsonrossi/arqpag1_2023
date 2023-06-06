#include <stdio.h>

int main(int argc, char const *argv[])
{
    int controle;

    controle = 1;
    while(controle != 10001){
        if(controle % 2 == 0){
            printf("%d - ", controle);
        }
        controle += 1;
    }
    printf("\n----\n");
    controle = 2;
    while(controle <= 10000){
        printf("%d - ", controle);
        controle += 2;
    }
    return 0;
}
