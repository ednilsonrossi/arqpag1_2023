#include<stdio.h>

int produto(int value1, int value2);
int leitura();

int main(){
    
    printf("PROD = %d\n",produto(leitura(), leitura()));

    return 0;
}

int produto(int value1, int value2){
    return value1 * value2;
}

int leitura(){
    int variavel;
    scanf("%d",&variavel);
    return variavel;
}