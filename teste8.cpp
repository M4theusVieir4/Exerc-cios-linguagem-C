#include<stdio.h>
#include<stdlib.h>

struct aluno{
	int numero;
	struct aluno *proximo;
};

 void mostrarDados(struct aluno *ptr){
 	if(ptr){
 		do{
 			printf("%d\n", ptr->numero);
 			ptr = ptr->proximo;
 			
		 }while(ptr);
	 }else{
	 	printf("Lista sem valor");
	 }
 }

int main(void){
	struct aluno *p1 = NULL;
	struct aluno *p2 = NULL;
	struct aluno *p3 = NULL;
	
	p1 = (struct aluno*) malloc(sizeof(struct aluno));
	p1->numero = 10;
	p2 = (struct aluno*) malloc(sizeof(struct aluno));
	p2->numero = 20;
	p3 = (struct aluno*) malloc(sizeof(struct aluno));
	p2->numero = 30;
	
	p1->proximo = p2;
	p2->proximo = p3;
	p3->proximo = NULL;
	
	if(p1){
		mostrarDados(p1);
	}
	
}
