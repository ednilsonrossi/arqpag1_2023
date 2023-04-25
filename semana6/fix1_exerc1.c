#include <stdio.h>

double calcular_valor_pagar(int utilizacao);
int quantidade_horas();
int pacotes(int horas);
int avulsas(int horas);


int main(int argc, char const *argv[])
{
    int horas;
    double valor_pagar;
    horas = quantidade_horas();

    valor_pagar = calcular_valor_pagar(horas);

    printf("Valor a pagar: R$ %.2lf\n\n", valor_pagar);
    return 0;
}

int quantidade_horas(){
    int h;
    printf("Quantidade de horas utilizadas: \n");
    scanf("%d", &h);
    return h;
}

double calcular_valor_pagar(int utilizacao){
    //Preco pacote de 3 eh 8.5 e o preco de horas avulsas eh 3.5.

    return pacotes(utilizacao) * 8.5 + avulsas(utilizacao) * 3.5;
}

int pacotes(int horas){
    return horas / 3;
}

int avulsas(int horas){
    return horas - pacotes(horas) * 3;
    //return horas % 3;
}