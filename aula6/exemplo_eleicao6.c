#include <stdio.h>
#include <string.h>

int eh_eleitor(int age);
int leitura();
void impressao(int is_voter);

int main(int argc, char const *argv[]){
    int idade, eleitor, conta_eleitor, conta_aluno;
    
    conta_eleitor = 0;
    conta_aluno = 1;

    while(conta_aluno <= 1400){
        idade = leitura();
        eleitor = eh_eleitor(idade);
        impressao(eleitor);
        if(eleitor){
            conta_eleitor += 1;
        }
        conta_aluno += 1;
    }

    printf("São eleitores: %d alunos\n\n", conta_eleitor);
    return 0;
}

int eh_eleitor(int age){
    return age >= 16 ? 1 : 0;
}

int leitura(){
    int value;
    printf("Digite idade: \n");
    scanf("%d", &value);
    return value;
}

void impressao(int is_voter){
    char resposta[20];
    if(is_voter)
        strcpy(resposta, "Pode votar.");
    else
        strcpy(resposta, "Não pode votar.");
    
    printf("%s\n", resposta);
}