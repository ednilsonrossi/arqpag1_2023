#include <stdio.h>

float average(float arg1, float arg2, float arg3, float arg4, float arg5);
void resultado_final(float media);

int main(int argc, char const *argv[])
{
    float n1, n2, n3, n4, n5;

    printf("Digite 5 notas: \n");
    scanf("%f%f%f%f%f", &n1, &n2, &n3, &n4, &n5);

    resultado_final( average(n1, n2, n3, n4, n5) );
    printf("\n\n");

    return 0;
}

void resultado_final(float media){
    if( media >= 7 ){
        printf("\nAluno aprovado.");
    }else{
        if( media >= 5){
            printf("\nAluno de recuperação.");
        }else{
            printf("\nAluno reprovado.");
        }
    }
}

/*
void resultado_final(float media){
    if( media < 5 ){
        printf("\nAluno reprovado.");
    }else{
        if( media < 7){
            printf("\nAluno de recuperação.");
        }else{
            printf("\nAluno aprovado.");
        }
    }
}
*/

/*
void resultado_final(float media){
    if( media < 5 ){
        printf("\nAluno reprovado.");
    }

    if( media >= 5 ){
        if( media < 7){
            printf("\nAluno de recuperação.");
        }
    }
    
    if( media >= 7 ){
        printf("\nAluno aprovado.");
    }
}
*/

/*
void resultado_final(float media){

    if( media >= 0){
        if(media < 5){
            printf("\nAluno reprovado.");
        }
    }

    if( media >= 5 ){
        if( media < 7 ){
            printf("\nAluno de recuperação.");
        }
    }
    
    if( media >= 7 ){
        if( media <= 10 ){
            printf("\nAluno aprovado.");
        }
    }

}
*/

float average(float arg1, float arg2, float arg3, float arg4, float arg5){
    return (arg1 + arg2 + arg3 + arg4 + arg5) / 5.0;
}

