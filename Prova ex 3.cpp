#include<stdio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf("Digite sua idade: \n");
	scanf("%d", &idade);
	if(idade < 16){
		printf("Sua idade � %d logo voc� n�o � eleitor ent�o n�o pode votar", idade);
	}else if(idade >= 18 && idade < 65){
		printf("Sua idade � %d logo voc� � eleitor obrigat�rio, voc� tem que votar", idade);
	}else if(16<= idade < 18 || idade >= 65){
		printf("Sua idade � %d logo voc� � eleitor facultativo, seu voto n�o � obrigat�rio", idade);
	}
	
}

