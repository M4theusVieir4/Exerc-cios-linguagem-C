#include<stdio.h>

#define MAIOR(x, y) x > y? x : y
#define E_MINUSCULO(char) char >= 'a' && char <= 'z' 

int main(void){
	
	int c, y;
	char x = '6';
	if(E_MINUSCULO(x)){
		printf("Eh minusculo");
	}else{
		printf("N eh uma letra minuscula ");
	}
	printf("%d", MAIOR(10, 50));
}
