/* 
 * Devolve o horoscopo do dia de um signo
 */ 
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	int dataNasc, diaNasc, mesNasc, anoNasc, Nasc, erro; 
	char signo[15];
	
	
	printf("Entre com sua data de nascimento: (formato ddmmaaaa)
	scanf("%d", &dataNasc);
	anoNasc = dataNasc % 10000;
	Nasc = dataNasc / 10000;
	
	erro = syscall(Nasc); // chamar syscall que retorna o signo de acordo com o mês de nascimento 
	
	
	printf("Seu signo eh %s.\n", signo);
  	return r;
}
