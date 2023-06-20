#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[]){

    /*
    A sememte do randomico é definida apenas uma vez, visto que a renovação resseta
    o valor inicial e, usando a mesma semente, o resultado gerado será o mesmo. Assim,
    colocar o srand() dentro de uma estrutura de repetição pode gerar valores aleatórios
    repetidos se a repetição executar antes que a soma de milésimos seja alterada.
    */
    srand( (unsigned) time(NULL) );

    int n, number, pares, impares, nulos;

    /*Inicializa os contadores*/
    pares = 0;
    impares = 0;
    nulos = 0;

    printf("Informe quantidade de números: ");
    scanf("%d", &n);

    /*
    Estrutura de repetição definida que executa n vezes a geração de um valor
    aleatório e conta em qual grupo o valor se enquadra.
    */
    for(int controle = 0; controle != n; controle += 1){
        /*Gera um valor aleatório entre 0 e 9999.*/
        number = rand() % 10000;

        /*Testa os grupos em que o number se enquadra.*/
        if(number == 0){
            nulos += 1;
        }else if(number % 2 == 0){
            pares += 1;
        }else{
            impares += 1;
        }
    }

    /*Apresentação dos resultados.*/
    printf("Total de pares..: %d\n", pares);
    printf("Total de impares: %d\n", impares);
    printf("Total de nulos..: %d\n\n", nulos);
    return 0;
}
