#include<stdio.h>

int main(void){
	int matriz[3][3]= {1, 2, 3, 4, 5, 6, 7, 8, 9};
	void funcaoPrint(int x[][3]);
	funcaoPrint(matriz);
	
}
void funcaoPrint(int x[][3]){
		for (int l=0; l< 3; ++l){
			for(int c=0; c<3; ++c){
				printf("%d ",x[l][c]);
		}
		printf("\n");
	}
}
