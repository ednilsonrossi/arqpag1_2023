#include <stdio.h>

int main(int argc, char const *argv[])
{
    int qnde_sanduiches;
    float queijo, presunto, carne;

    printf("Quantidade de Sanduiches: ");
    scanf("%d", &qnde_sanduiches);

    queijo = (qnde_sanduiches * 0.05) * 2;
    presunto = qnde_sanduiches * 0.05;
    carne = qnde_sanduiches * 0.1;

    printf("COMPRAR:\n");
    printf("%.3f KG de queijo\n", queijo);
    printf("%.3f KG de presunto\n", presunto);
    printf("%.3f KG de carne\n", carne);

    return 0;
}
