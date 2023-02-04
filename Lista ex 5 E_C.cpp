#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	int idade;
	
	
	printf("Idade do carro: \n");
	scanf("%d", &idade);
	
		
	printf("%s", idade <= 3 ? "seu carro é novo" : "seu carro é velho");
}
