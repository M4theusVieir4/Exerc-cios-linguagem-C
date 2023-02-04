#include<stdio.h>
#include<stdlib.h>

struct aluno{
	int numero;
	struct aluno *link;
};

void mostrarDadosDaLista (struct aluno *ptr){
	printf("Dados da Lista: \n\n");
	if(ptr){
		do{
			printf(" %d", ptr->numero);
			ptr = ptr->link;
			
		}while(ptr);
	}else{
		printf("Lista vazia");
	}
}

int main(){
	struct aluno *aluno_1 = NULL;
	struct aluno *aluno_2 = NULL;
	struct aluno *aluno_3 = NULL;
	
	aluno_1	= (struct aluno*) malloc(sizeof(struct aluno));
	aluno_1->numero = 10;
	aluno_2	= (struct aluno*) malloc(sizeof(struct aluno));
	aluno_2->numero = 20;
	aluno_3	= (struct aluno*) malloc(sizeof(struct aluno));
	aluno_3->numero = 30;
	
	aluno_1->link = aluno_2;
	aluno_2->link = aluno_3;
	aluno_3->link = NULL;
	
	if(aluno_1){
		mostrarDadosDaLista(aluno_1);
	}
}
