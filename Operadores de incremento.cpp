#include<stdio.h>

int main()
{

int i =1;

printf("%i\n",i);


printf("%i\n",++i);

i++;
printf("%i\n",i);
/* 1)Incremento\
-------------------------> Pr� ou P�s
2) Decremento/

Pre> o Valor ser� incrementado/decrementado na instru��o que a vari�vel estiver contida

Pos> o valor ser� incrementado/decrementado na pr�xima instru��o */
int x = 0;
x=x+1;//incrementar quantas unidades desejarmos
x+=1;//incrementar quantas unidades desejarmos
++x;//op. incremento ,s� podemos incrementar uma unica unidade
printf("%i",x);



return 0;
}
