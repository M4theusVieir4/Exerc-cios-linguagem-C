#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>

#define LIMITE_CARACTERES 30	

struct Elemento
{
	char *nome;
	int id;
	
	struct Elemento *proximo;
};

void ler_texto( char *texto){
	int pos = 0;
	char caractere;
	
	while(1){
		caractere = getch();
		
		if(pos < LIMITE_CARACTERES && ( caractere == ' ' || (tolower( caractere) >= 'a' && tolower(caractere) <= 'z'))){
			putchar(caractere);
			texto[pos++] = caractere; 
		}
		if (caractere == '\r')
		{
			texto[pos] = '\0';
			break;
		}
		if( pos>0 && caractere == '\b'){
			--pos;
			putchar('\b');
			putchar(' ');
			putchar('\b');
		}
	}
}

void definirElemento( Elemento *ponteiro){
	ponteiro->nome = (char*) malloc(LIMITE_CARACTERES*sizeof(char));
	fflush(stdin);
	printf("\n\n Digite um nome ( maximo de %d caracteres): ", LIMITE_CARACTERES);
	
	ler_texto( ponteiro->nome);
	
	printf("Digite o id: ");
	scanf("%d", &(ponteiro->id));
	
	ponteiro->proximo = NULL;
}

int main(){
	char opcao;
	Elemento *primeiro = NULL;
	Elemento *ponteiro;
	
	do{
		if(primeiro == NULL){
			primeiro = (Elemento*)malloc(sizeof(Elemento));
			definirElemento(primeiro);
			ponteiro = primeiro;
		}else{
			ponteiro->proximo = (Elemento*) malloc(sizeof(Elemento));
			ponteiro = (Elemento *) ponteiro->proximo;
		}
		do{
			printf("\n\n Deseja inserir mais um elemento (s, n) ?");
			opcao = getche();
		}while(tolower(opcao) != 's' && tolower(opcao) != 'n');
	}while(tolower(opcao) == 's');
	printf("\n\n Exibindo a sequencia: \n");
	ponteiro = primeiro;
	while (ponteiro != NULL){
		printf("Nome: %s\tId:%d\n", ponteiro->nome, ponteiro->id);
		ponteiro = (Elemento*) ponteiro->proximo;
	}
	printf("\n\n Deletando: \n\n");
	ponteiro = primeiro;
	Elemento *seguinte;
	
	while(ponteiro != NULL){
		printf("Apagando %s \n", ponteiro->nome);
		seguinte = (Elemento*) ponteiro->proximo;
		free(ponteiro);
		
		ponteiro = seguinte;
	}
	return 0;
}
