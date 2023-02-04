#include<stdio.h>

int main(){
	int maior=0,menor=0,aux=0,i=0;
	do{
		printf("\nDigite um numero positivo e se quiser sair do programa digite -1\n");
		scanf("%i", &aux);
		if(i==0){
			maior=aux;
			menor=aux;
			++i;
		}
		else if(aux==-1){
		
		printf("\nprograma encerrado\n");
		break;
		}
		else if(maior<aux)
		maior=aux;
		else if(menor>aux)
		menor=aux;
		
	}while(1);
	printf("\n O valor maior eh %i\n O valor menor eh %i\n",maior,menor);	
	
	
	return 0;
}
