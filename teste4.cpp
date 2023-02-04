#include<stdio.h>
	char cpf[11];
int main(void){
	for(int i = 0; i<11; i++){
		cpf[i] -='0';
		printf("%c", cpf[i]);
	}

}
