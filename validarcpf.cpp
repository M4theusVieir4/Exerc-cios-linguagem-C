#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

void obter_cpf(void);
int validar_cpf(void);

char cpf[11];

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	obter_cpf();
	
	if(validar_cpf()){
		printf("\n Esse é um cpf válido!\n\n");
	}else{
		printf("\n ***CPF inválido!!! ***\n\n");
	}
	
	return 0;
}
void obter_cpf(){
	int pos = 0;
	char caractere;
	
	printf("\n Digite um CPF[só números]:");
	
	while(1){
		caractere = getch();
		
		if(pos <11 && caractere >= '0' && caractere <= '9'){
			putchar(caractere);
			cpf[pos++] = caractere;
		}
		if(pos==11 && caractere == '\r'){
			break;
		}
		if(pos>0 && caractere == '\b'){
			--pos;
			putchar('\b');
			putchar(' ');
			putchar('\b');
		}
		
	}
	printf("\n\n CPF Digitado:");
	for (int i=0; i < 11; i++){
		putchar(cpf[i]);
		
		if(i == 2 || i == 5){
			putchar('.');
		}
		if(i == 8){
			putchar('-');
		}
	}
	puts("\n");	
}

int validar_cpf(void)
{
	int soma = 0;
	
	for(int i=0; i<11; i++){
		cpf[i] -='0';
	}
	for(int i =0, peso=10; i<9; i++,peso--){
		soma+= cpf[i]*peso;
	}
	if (soma*10%11%10 != cpf[9]){
		return 0;
	}
	
	soma =0;
	
	for(int i =0, peso=11; i<10; i++, peso--){
		soma += cpf[11]*peso;
	}
	if(soma*10%11%10 != cpf[10]){
		return 0;
	}
	return 1;
}
