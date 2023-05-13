#include <stdio.h>

int main()
{
    int num_1, num_2;
    int resultado;

    printf("Digite dois números: \n");
    scanf("%d", &num_1);
    scanf("%d", &num_2);

    resultado = num_1 + num_2;
    printf("Soma: %d \n", resultado);

    resultado = num_1 - num_2;
    printf("Subtração de %d e %d é igual a %d \n", num_1, num_2, resultado);
    
    resultado = num_1 * num_2;
    printf("%d x %d = %d \n", num_1, num_2, resultado);

    resultado = num_1 / num_2;
    printf("Divisão: %d\n\n", resultado);
    
    return 0;
}
