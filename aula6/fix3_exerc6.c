#include <stdio.h>

int main(int argc, char const *argv[]){
    
    int number;
    int fatorial, termo;

    printf("Digite n: \n");
    scanf("%d", &number);

    for(termo = 1, fatorial = 1; termo != number+1; termo+= 1){
        fatorial = termo * fatorial;
    }

    printf("%d! = %d\n\n", number, fatorial);

    return 0;
}
