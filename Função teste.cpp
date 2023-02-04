#include<stdio.h>

void teste(void);
int main(void){
	teste();
	
}
void teste(void){
	int variavel = 2;
	variavel *= 2;
	printf("%d", variavel);
	
}
