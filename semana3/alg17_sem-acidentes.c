#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tempo, dias, meses, anos;

    printf("Dias sem acidentes: ");
    scanf("%d", &tempo);

    anos = tempo / 360;
    tempo = tempo - anos * 360;
    meses = tempo / 30;
    dias = tempo % 30;

    printf("São %d anos, %d meses e %d dias sem acidentes.", anos, meses, dias);
    return 0;
}
