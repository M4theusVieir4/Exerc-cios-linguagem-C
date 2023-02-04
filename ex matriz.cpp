#include<stdio.h>

int main(void){
	float alunos[4][4]= {0};
	float medias[4];
	float soma, media;
	int p = 1;
	for(int a=0; a<4; ++a){
		printf("Aluno %d digite suas 4 nota: \n",p);
		p += 1;
		for(int n=0; n<4; ++n){
			scanf("%f", &alunos[a][n]);
		}
	}
	p = 1;
	for(int a=0; a<4; ++a){		
		for(int n=0; n<4; ++n){
			soma += alunos[a][n];
		}
		media = soma/4;
		medias[a] = media;
		printf("O aluno %d teve media igual a %.2f \n", p ,medias[a]);
		p +=1;
		soma = 0; 
	}
	
}
