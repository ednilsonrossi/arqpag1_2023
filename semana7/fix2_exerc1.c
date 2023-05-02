#include <stdio.h>

int readInt();
int is_even(int value);
double average(int n1, int n2, int n3, int n4);

int main(int argc, char const *argv[])
{
    int a, b, c, d;
    double media = 0;

    a = readInt();
    b = readInt();
    c = readInt();
    d = readInt();

    media = average(a, b, c, d);
    media != 0 ? printf("Média dos pares: %.3lf", media) : printf("Não existem valores pares");
    printf("\n\n");

    return 0;
}


double average(int n1, int n2, int n3, int n4){
    double soma_termos = 0;
    int conta_termos = 0;

    if( is_even(n1) ){
        soma_termos = soma_termos + n1;
        conta_termos = conta_termos + 1;
    }

    if( is_even(n2) ){
        soma_termos = soma_termos + n2;
        conta_termos++;
    }

    if( is_even(n3) ){
        soma_termos = soma_termos + n3;
        conta_termos += 1;
    }

    if( is_even(n3) ){
        soma_termos += n4;
        conta_termos += 1;
    }

    if(conta_termos > 0){
        return soma_termos / conta_termos;
    }

    return 0;
}

/*
double average(int n1, int n2, int n3, int n4){
    double media = 0.0;

    if( is_even(n1) ){
        if( is_even(n2) ){
            if( is_even(n3) ){
                if( is_even(n4) ){
                    media = (n1 + n2 + n3 + n4) / 4.0;
                }else{
                    media = (n1 + n2 + n3) / 3.0;
                }
            }else{
                if( is_even(n4) ){
                    media = (n1 + n2 + n4) / 3.0;
                }else{
                    media = (n1 + n2) / 2.0;
                }
            }
        }else{
            if(is_even(n3)){
                if(is_even(n4)){
                    media = (n1 + n3 + n4) / 3.0;
                }else{
                    media = (n1 + n3) / 2.0;
                }
            }else{
                if(is_even(n4)){
                    media = (n1 + n4) / 2.0;
                }else{
                    media = n1;
                }
            }
        }
    }else{
        if(is_even(n2)){
            if(is_even(n3)){
                if(is_even(n4)){
                    media = (n2 + n3 + n4) / 3.0;
                }else{
                    media = (n2 + n3) / 2.0;
                }
            }else{
                if(is_even(n4)){
                    media = (n2 + n4) / 2.0;
                }else{
                    media = n2;
                }
            }
        }else{
            if(is_even(n3)){
                if(is_even(n4)){
                    media = (n3 + n4) / 2.0;
                }else{
                    media = n3;
                }
            }else{
                if(is_even(n4)){
                    media = n4;
                }
            }
        }
    }

    return media;
}
*/

/*
int is_even(int value){
    int resto, retorno;
    resto = value % 2;
    if(resto == 0){
        retorno = 1;
    }else{
        retorno = 0;
    }
    return retorno;
}
*/

/*
int is_even(int value){
    int resto;
    resto = value % 2;
    if(resto == 0){
        return 1;
    }else{
        return 0;
    }
}
*/

/*
int is_even(int value){
    int resto;
    resto = value % 2;
    if(resto == 0){
        return 1;
    }
    return 0;
}
*/

int is_even(int value){
    return value % 2 == 0 ? 1 : 0;
}

/*
int is_even(int value){
    return value % 2 ? 0 : 1;
}
*/

int readInt(){
    int number;
    printf("Digite valor inteiro: \n");
    scanf("%d", &number);
    return number;
}
