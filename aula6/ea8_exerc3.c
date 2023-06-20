#include <stdio.h>


int main(int argc, char const *argv[]){

    int base, expoente;
    int calculo, parcial;

    do{
        printf("Digite base e expoente (ambos positivos e inteiros): \n");
        scanf("%d%d", &base, &expoente);
    }while(base < 1 || expoente < 1);

    calculo = base;
    for(int produtos = 1; produtos != expoente; produtos += 1){

        parcial = calculo;
        for(int somas = 2; somas != base; somas += 1){
            parcial += calculo;
        }

        calculo += parcial;
    }  

    printf("%d ^ %d = %d\n\n", base, expoente, calculo);

    return 0;
}
