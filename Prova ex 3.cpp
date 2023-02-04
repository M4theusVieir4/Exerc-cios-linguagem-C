#include<stdio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf("Digite sua idade: \n");
	scanf("%d", &idade);
	if(idade < 16){
		printf("Sua idade é %d logo você não é eleitor então não pode votar", idade);
	}else if(idade >= 18 && idade < 65){
		printf("Sua idade é %d logo você é eleitor obrigatório, você tem que votar", idade);
	}else if(16<= idade < 18 || idade >= 65){
		printf("Sua idade é %d logo você é eleitor facultativo, seu voto não é obrigatório", idade);
	}
	
}

