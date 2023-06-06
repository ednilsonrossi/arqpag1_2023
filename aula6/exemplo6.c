#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    float somatorio;


    somatorio = 0.0;
    i = 1;
    while(i <= 100){
        somatorio += 2 * i;
        i += 1;
    }

    printf("Soma: %f\n\n", somatorio);

    return 0;
}
