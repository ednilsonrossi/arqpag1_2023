#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0

int eh_primo(int number);
int eh_primo2(int number);


int main(int argc, char const *argv[]){
    int n1, n2, x, contador;

    printf("Digite o intervalo: \n");
    scanf("%d%d", &n1, &n2);
    
    x = n1;
    contador = 0;
    while(n1 <= n2){
        if(eh_primo2(n1)){
            printf("%d, ", n1);
            contador += 1;
        }
        n1+=1;
    }
    printf("\nTotal: %d\n", contador);
    printf("\n\n");
    

    /*
    //n1 = x;
    contador = 0;
    while(n1 <= n2){
        if(eh_primo(n1)){
            printf("%d, ", n1);
            contador += 1;
        }
        n1+=1;
    }
    printf("\nTotal: %d\n", contador);
    printf("\n\n");
    */

    return 0;
}


int eh_primo(int number){

    int divisor;
    int tem_divisor;


    tem_divisor = FALSE;
    divisor = 2;
    while(divisor < (number/2) + 1  && !tem_divisor){
        if(number % divisor == 0){
            tem_divisor = TRUE;
        }
        divisor += 1;
    }

    return !tem_divisor;
}

int eh_primo2(int number){

    int divisor;
    int tem_divisor;


    tem_divisor = FALSE;
    divisor = 2;
    while(divisor*divisor <= number  && !tem_divisor){
        if(number % divisor == 0){
            tem_divisor = TRUE;
        }
        divisor += 1;
    }

    return !tem_divisor;
}
