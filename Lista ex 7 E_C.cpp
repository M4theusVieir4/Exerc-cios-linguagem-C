#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int categoria;
	
	printf("		Categoria do produto \n");
	printf("Escolha uma opção [1;2;3;4;5]: \n");
	scanf("%d", &categoria);
	
	switch(categoria){
		case 1:
			printf("produto custa 10,00 reais.");
			break;
		case 2:
			printf("produto custa 15,00 reais.");
			break;
		case 3:
			printf("produto custa 19,00 reais.");
			break;
		case 4:
			printf("produto custa 23,00 reais.");
			break;
		case 5:
			printf("produto custa 27,00 reais.");
			break;
			
		default:
			printf("Categoria escolhida está errada.");
	}
	
	
	
	
}
