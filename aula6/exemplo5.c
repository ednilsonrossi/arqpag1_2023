#include <stdio.h>

int main(int argc, char const *argv[])
{
    float anacleto, felisberto;
    int anos;

    anacleto = 1.5;
    felisberto = 1.1;
    anos = 0;

    while (felisberto < anacleto){
        anacleto += 0.02;
        felisberto += 0.03;
        anos += 1;
    }
    
    printf("Felisberto será maior que Anacleto em %d anos\n\n", anos);

    return 0;
}
