#include <stdio.h>

int main(){
	int ano_nascimento, ano_atual, idade;

	ano_atual = 2023;

	printf("Digite ano de nascimento: ");
	scanf("%d", &ano_nascimento);

	idade = ano_atual - ano_nascimento;

	printf("Idade: %d\n\n", idade);
}
