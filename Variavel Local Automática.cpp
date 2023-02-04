#include<stdio.h>

int gVariavelGlobal=2;
int main(void){
	void teste(void);
		printf("Global = %d\n",gVariavelGlobal);
	teste();
	teste();
	teste();
	
	return 0;	
}

void teste(void){
	
	int variavelLocalAutomatica=2;
	variavelLocalAutomatica *=2;
	static int variavelLocalEstatica =2;
	variavelLocalEstatica *= 2;
	gVariavelGlobal *= 2;
	printf("Local Automatica= %d\n",variavelLocalAutomatica);
	printf("Local Estatica= %d\n",variavelLocalEstatica);
	printf("Global = %d\n",gVariavelGlobal);
	
}
