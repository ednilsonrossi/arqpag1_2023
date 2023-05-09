#include <stdio.h>

float calcular(int arg1, int arg2, char arg3);
float soma(int n1, int n2);
float subtracao(int a, int b);
float multiplicacao(int x, int y);
float divisao(int numerador, int denominador);

int main(int argc, char const *argv[])
{
    int n1, n2;
    char op;
    float resultado;

    printf("Digite número operação número: \n");
    scanf("%d %c %d", &n1, &op, &n2);

    resultado = calcular(n1, n2, op);

    printf("Calculo: %d %c %d = %.4f\n\n", n1, op, n2, resultado);
    return 0;
}

float calcular(int arg1, int arg2, char arg3){
    float resultado;
    switch (arg3){
        case '+': 
            resultado = soma(arg1, arg2);
            break;
        case '-': 
            resultado = subtracao(arg1, arg2);
            break;
        case '*': 
            resultado = multiplicacao(arg1, arg2);
            break;
        case '/': 
            resultado = divisao(arg1, arg2);
            break;
        default:
            printf("Operação inválida\n");
            resultado = 0;
    }
    return resultado;
}

/*
float calcular(int arg1, int arg2, char arg3){
    if(arg3 == '+'){
        return soma(arg1, arg2);
    }else{
        if(arg3 == '-'){
            return subtracao(arg1, arg2);
        }else{
            if(arg3 == '*'){
                return multiplicacao(arg1, arg2);
            }else{
                if(arg3 == '/'){
                    return divisao(arg1, arg2);
                }else{
                    printf("Operação inválida\n");
                    return 0;
                }
            }
        }
    }
}
*/

float soma(int n1, int n2){
    return n1 + n2;
}

float subtracao(int a, int b){
    return a - b;
}

float multiplicacao(int x, int y){
    return x * y;
}

float divisao(int numerador, int denominador){
    if(denominador == 0){
        printf("Não existe divisão por zero!");
        return 0.0;
    }
    return (float) numerador / denominador;
}