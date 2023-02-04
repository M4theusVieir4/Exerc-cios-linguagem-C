#include<stdio.h>

int main()
{
	int idade;
	printf("Por favor informar sua idade:\n");
	scanf("%i",&idade);
	
		if(idade < 18){
			printf("bebidas alcoolicas n estao liberadas");
		} else{
			printf("Bebidas alcoolicas estao liberadas");
		}
	
	
	return 0;
}
