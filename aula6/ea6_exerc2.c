#include <stdio.h>

int main(int argc, char const *argv[]){
    
    int n;
    int number;
    int linhas, colunas, celula;
    printf("Digite N: ");
    scanf("%d", &n);

    number = 1;
    colunas = 1;
    for(linhas = 0 ; linhas < n; linhas+=1){
        for(celula = 0; celula < colunas; celula++){
            printf("%d ", number);
            number += 1;
        }
        printf("\n");
        colunas += 1;
    }

    return 0;
}
