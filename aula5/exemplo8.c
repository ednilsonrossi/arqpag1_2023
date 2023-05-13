#include <stdio.h>

void mes_extenso(int arg);

int main(int argc, char const *argv[])
{
    int m;

    printf("Digite o mês: ");
    scanf("%d", &m);

    mes_extenso(m);

    return 0;
}


void mes_extenso(int arg){

    switch(arg){
        case 1: printf("Janeiro"); break;
        case 2: printf("Fevereiro"); break;
        case 3: printf("Março"); break;
        case 4: printf("Abril"); break;
        case 5: printf("Maio"); break;
        case 6: printf("Junho"); break;
        case 7: printf("Julho"); break;
        case 8: printf("Agosto"); break;
        case 9: printf("Setembro"); break;
        case 10: printf("Outubro"); break;
        case 11: printf("Novembro"); break;
        case 12: printf("Dezembro"); break;
        default:
            printf("Mês inválido");
            break;
    }
}

/*
void mes_extenso(int arg){
    if(arg == 1)
        printf("Janeiro");
    else
        if(arg == 2)
            printf("Fevereiro");
        else
            if(arg == 3)
                printf("Março");
            else
                if(arg == 4)
                    printf("Abril");
                else
                    if(arg == 5)
                        printf("Maio");
                    else
                        if(arg == 6)
                            printf("Junho");
                        else
                            if(arg == 7)
                                printf("Julho");
                            else
                                if(arg == 8)
                                    printf("Agosto");
                                else
                                    if(arg == 9)
                                        printf("Setembro");
                                    else
                                        if(arg == 10)
                                            printf("Outubro");
                                        else
                                            if(arg == 11)
                                                printf("Novembro");
                                            else
                                                if(arg == 12)
                                                    printf("Dezembro");
                                                else
                                                    printf("Mês Inválido");
    printf("\n\n");
}
*/