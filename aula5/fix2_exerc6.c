#include <stdio.h>

int eh_palindromo(int arg);
int inverter(int arg);

int main(int argc, char const *argv[])
{
    int number;

    printf("Digite número de 6 digitos: \n");
    scanf("%d", &number);

    if(eh_palindromo(number)){
        printf("Número é palindromo.\n\n");
    }else{
        printf("Número não é palindromo.\n\n");
    }

    return 0;
}

int eh_palindromo(int arg){
    int inverso;
    inverso = inverter(arg);
    if(arg == inverso){
        return 1;
    }
    return 0;
}

int inverter(int arg){
    int d1, d2, d3, d4, d5, d6;

    d1 = arg / 100000;
    arg = arg % 100000;
    d2 = arg / 10000;
    arg = arg % 10000;
    d3 = arg / 1000;
    arg = arg % 1000;
    d4 = arg / 100;
    arg = arg % 100;
    d5 = arg / 10;
    d6 = arg % 10;

    arg = d6 * 100000;
    arg += d5 * 10000;
    arg += d4 * 1000;
    arg += d3 * 100;
    arg += d2 * 10;
    arg += d1;

    return arg;
}