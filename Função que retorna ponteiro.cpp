#include<stdio.h>

struct lista{
	int valor;
	struct lista *proximo;
};

int main(void){
	struct lista *ponteiro(struct lista *pLista, int valor );
	struct lista m1, m2, m3;
	struct lista *resultado, *gancho = &m1;
	int num;
	m1.valor = 10;
	m2.valor = 20;
	m3.valor = 30;
	printf("Digite um numero a ser procurado: ");
	scanf("%d", &num);
	resultado = ponteiro(gancho, num);
	if(resultado != (struct lista *) 0){
		printf("o numero digitado %d esta na memoria %d",num, resultado);
	}else{
		printf("O numero nao esta no banco de dados");
	}
	
	
}
struct lista *ponteiro(struct lista *pLista, int valor){
	while(pLista != (struct lista *) 0){
		if(pLista->valor == valor){
			return pLista;
		}else{
			pLista= pLista->proximo;
		}
	}return (struct lista *) 0;
}
