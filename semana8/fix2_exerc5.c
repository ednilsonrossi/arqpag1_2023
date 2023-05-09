#include <stdio.h>

void ordenar(int arg1, int arg2, int arg3);
void ordenar_2(int arg1, int arg2, int arg3);
void imprime(int arg1, int arg2, int arg3);

int main(int argc, char const *argv[])
{
    int a, b, c;

    printf("Digite 3 números: ");
    scanf("%d%d%d", &a, &b, &c);

    ordenar(a, b, c);
    ordenar_2(a, b, c);

    return 0;
}

void ordenar(int arg1, int arg2, int arg3){
    if(arg1 < arg2){
        if(arg2 < arg3){
            imprime(arg1, arg2, arg3);
        }else{
            if(arg1 < arg3){
                imprime(arg1, arg3, arg2);
            }else{
                imprime(arg3, arg1, arg2);
            }
        }
    }else{
        if(arg2 < arg3){
            if(arg1 < arg3){
                imprime(arg2, arg1, arg3);
            }else{
                imprime(arg2, arg3, arg1);
            }
        }else{
            imprime(arg3, arg2, arg1);
        }
    }
}

void ordenar_2(int arg1, int arg2, int arg3){
    int troca;

    if(arg1 > arg2){
        troca = arg1;
        arg1 = arg2;
        arg2 = troca;
    }

    if(arg1 > arg3){
        troca = arg1;
        arg1 = arg3;
        arg3 = troca;
    }

    if(arg2 > arg3){
        troca = arg2;
        arg2 = arg3;
        arg3 = troca;
    }

    imprime(arg1, arg2, arg3);
}


void imprime(int arg1, int arg2, int arg3){
    printf("[%d, %d, %d]\n\n", arg1, arg2, arg3);
}