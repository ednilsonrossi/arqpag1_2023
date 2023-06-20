#include <stdio.h>

int main(int argc, char const *argv[]){
    
    int number, mult;

    printf("Digite N: \n");
    scanf("%d", &number);

    printf("Tabuada do %d\n\n", number);
    mult = 0;
    do{
        printf("\t %2d x %2d = %2d\n", number, mult, number*mult);
        mult += 1;
    }while(mult <= 10);

    
    printf("\n\nTabuada do %d\n\n", number);
    for(mult = 0;mult <= 10; mult += 1){
        printf("\t %2d x %2d = %2d\n", number, mult, number*mult);
    }

    printf("\n\nTabuada do %d\n\n", number);
    mult = 0;
    while(mult <= 10){
        printf("\t %2d x %2d = %2d\n", number, mult, number*mult);
        mult += 1;
    }


    return 0;
}
