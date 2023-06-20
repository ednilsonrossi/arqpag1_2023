#include <stdio.h>

void serie(int termo_x, int termo_y, int maximo);

int main(int argc, char const *argv[]){
    int termo_1, termo_2;

    do{
        printf("Digite 2 termos iniciais:\n");
        scanf("%d%d", &termo_1, &termo_2);
    }while(termo_1 > termo_2);

    serie(termo_1, termo_2, 30);

    return 0;
}

void serie(int termo_x, int termo_y, int maximo){
    int index, termo;
    printf("%dº termo: %d\n", 1, termo_x);
    printf("%dº termo: %d\n", 2, termo_y);

    for(index = 3; index != maximo+1; index+=1){
        termo = termo_x + termo_y;
        printf("%dº termo: %d\n", index, termo);

        termo_x = termo_y;
        termo_y = termo;
    }
}