#include <stdio.h>

int data_valida(int dia, int mes, int ano);

int main(int argc, char const *argv[])
{
    int d, m, a;

    printf("Digite dia: ");
    scanf("%d", &d);
    printf("Digite mês: ");
    scanf("%d", &m);
    printf("Digite ano: ");
    scanf("%d", &a);

    if( data_valida(d, m, a) )
        printf("Data é válida.");
    else
        printf("Data é inválida");

    return 0;
}


int data_valida(int dia, int mes, int ano){
    int ehValida = 0;

    if(dia >= 1 && dia <= 31)
        ehValida = 1;

    if( ehValida && ( mes < 1 || mes > 12) ){
        ehValida = 0;
    }

    if( ehValida && ano >= 1900 && ano <= 2100){
        ehValida = 1;
    }else{
        ehValida = 0;
    }

    return ehValida;
}

/*
int data_valida(int dia, int mes, int ano){
    int ehValida = 0;

    if(dia >= 1)
        if(dia <= 31)
            ehValida = 1;

    if( ehValida ){
        if(mes < 1)
            ehValida = 0;
        if(mes > 12)
            ehValida = 0;
    }

    if( ehValida ){
        ehValida = 0;
        if(ano >= 1900)
            if(ano <= 2100)
                ehValida = 1;
    }

    return ehValida;
}
*/