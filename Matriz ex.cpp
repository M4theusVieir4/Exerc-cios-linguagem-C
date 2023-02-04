#include<stdio.h>
int main(){
	float matrizA[3] [2];
	float matrizB[3][2];
	float matrizC[3][2];
	float valA;
	float valB;
	for(int lin=0; lin<3; lin++){
		for(int col=0; col<2; col++){
			scanf("%f",&valA);
			matrizA[lin][col]=valA;
			scanf("%f",&valB);
			matrizB[lin][col]=valB;
			matrizC[lin][col]=matrizA[lin][col] + matrizB[lin][col];
		}
		
	}
	for(int lin=0; lin<3; lin++){
		for(int col=0;col<2;col++){
			printf("O valor da matriz C eh %.2f",matrizC[lin][col]);
			
		}
		printf("\n");
	}
	
	
	
	
}
