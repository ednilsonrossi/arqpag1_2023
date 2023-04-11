/*
A granja Frangoehtech possui um controle automatizado de cada frango 
da sua produção. No pé direito do frango há um anel com um chip de 
identificação; no pé esquerdo são dois anéis para indicar o tipo de 
alimento que ele deve consumir. Sabendo que o anel com chip custa 
R$4,00 e o anel de alimento custa R$3,50, faça um algoritmo para 
calcular o gasto total da granja para marcar todos os seus frangos. ​
*/

#include <stdio.h>

int main(){
    int frangos;
    float custo;

    printf("Quantidade de frangos: ");
    scanf("%d", &frangos);

    //Calcular custo das anilhas eletrônicas
    custo = frangos * 4;

    //Calcular custo das anilhas de alimentação e acumular com a outra
    custo = frangos * (2 * 3.5) + custo;

    printf("Custo total: R$ %.2f\n\n", custo);
    return 0;
}