#include<stdio.h>

int main(void){
	void limparBuffer(void);
	char a,b,c;
	
	a = getchar();
	limparBuffer();
	b = getchar();
	limparBuffer();
	c = getchar();
	limparBuffer();
	
	printf("%c", a);
	printf("%c", b);
	printf("%c", c);
}

void limparBuffer(void){
	char c;	
	while((c = getchar()) != '\n' && c != EOF);
}
