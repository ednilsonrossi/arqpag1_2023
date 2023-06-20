#include <stdio.h>

void fibo_while();
void fibo_for();

int main(int argc, char const *argv[]){

    //fibo_while();
    fibo_for();

    return 0;
}


void fibo_while(){
    int termo_x, termo_y, termo;
    int controle;

    termo_x = 0;
    termo_y = 1;

    printf("%dº termo: %d\n", 1, termo_x);
    printf("%dº termo: %d\n", 2, termo_y);

    controle = 3;                               //Inicialização
    while(controle != 21){                      //Condição de parada
        termo = termo_x + termo_y;
        printf("%dº termo: %d\n", controle, termo);

        termo_x = termo_y;
        termo_y = termo;

        controle += 1;                          //Incremento
    }

}
void fibo_for(){
    int termo_x, termo_y, termo;
    int controle;

    termo_x = 0;
    termo_y = 1;

    printf("%dº termo: %d\n", 1, termo_x);
    printf("%dº termo: %d\n", 2, termo_y);

    for(controle = 3;controle != 21; controle += 1){
        termo = termo_x + termo_y;
        printf("%dº termo: %d\n", controle, termo);

        termo_x = termo_y;
        termo_y = termo;
    }
}