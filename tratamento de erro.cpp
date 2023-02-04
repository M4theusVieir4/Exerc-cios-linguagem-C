#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#define LIMITE_CARACTERES 30

typedef struct Elemento{
	char *nome;
	int id;
	
	struct Elemento *proximo;
};
void lerTexto(char *texto){
	int pos = 0;
	char caractere;
	while(1){
		caractere = getch();
		if(pos < LIMITE_CARACTERES && caractere >='a' && caractere <='z'){
			putchar(caractere);
			texto[pos++] = caractere;
		}
		if(caractere == '\r'){
			texto[pos] = '\0';
			break;
		}
		if(caractere == '\b'){
			--pos;
			putchar('\b');
			putchar(' ');
			putchar('\b');
		}
	}
}

int main(){
	Elemento *teste;
	lerTexto(teste->nome);
}
