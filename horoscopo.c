/* 
 * Devolve o horoscopo do dia de um signo
 */ 
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	int dataNasc, diaNasc, mesNasc, anoNasc; 
	char signo[15];
	
	
	printf("Entre com sua data de nascimento: (formato ddmmaaaa)
	scanf("%d", &dataNasc);
	anoNasc = dataNasc % 10000;
	dataNasc = dataNasc / 10000;
	mesNasc = dataNasc % 100;
	
	signo = syscall(mesNasc); // chamar syscall que retorna o signo de acordo com o mês de nascimento 
	
	
	
	printf("Retorno da chamada de sistema: %d.\n", r);
  	return r;
}
