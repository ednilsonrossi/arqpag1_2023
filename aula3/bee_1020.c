#include <stdio.h>

int main(int argc, char const *argv[])
{
    int entrada, ano, mes, dia;

    scanf("%d", &entrada);

    ano = entrada / 365;
    entrada = entrada % 365;
    mes = entrada / 30;
    dia = entrada % 30;

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);

    return 0;
}
