#include<stdio.h>

int main()
{

int i =1;

printf("%i\n",i);


printf("%i\n",++i);

i++;
printf("%i\n",i);
/* 1)Incremento\
-------------------------> Pré ou Pós
2) Decremento/

Pre> o Valor será incrementado/decrementado na instrução que a variável estiver contida

Pos> o valor será incrementado/decrementado na próxima instrução */
int x = 0;
x=x+1;//incrementar quantas unidades desejarmos
x+=1;//incrementar quantas unidades desejarmos
++x;//op. incremento ,só podemos incrementar uma unica unidade
printf("%i",x);



return 0;
}
