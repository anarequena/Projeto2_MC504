#include <linux/unistd.h>
#include <linux/linkage.h>
#include <asm/uaccess.h>
#include <string.h>

// Recebe o dia e o mes de nascimento da pessoa
asmlinkage long sys_signoCall(int nasc) {
	int mes, dia, size, erro = 0;
	char signoK[15];
	
	mes = nasc % 100;
	dia = nasc / 100;
	
	switch(mes){ 
		// Janeiro
		case 1:
			// Antes do dia 20 o signo eh Capricornio
			if(dia < 20)
				strcpy(signoK, "Capricornio");
			// A partir do dia 20 o signo eh Aquario
			else if(dia > 1)
				strcpy(signoK, "Aquario");
			else
				erro = 1;
		break;
		
		// Fevereiro
		case 2:
			// Antes do dia 19 o signo eh Aquario
			if(dia < 19)
				strcpy(signoK, "Aquario");
			// A partir do dia 19 o signo eh Peixes
			else if(dia > 1)
				strcpy(signoK, "Peixes");
			else
				erro = 1;
		break;
		
		
		// Março
		case 3:
			// Antes do dia 21 o signo eh Peixes
			if(dia < 21)
				strcpy(signoK, "Peixes");
			// A partir do dia 21 o signo eh Aries
			else if(dia > 1)
				strcpy(signoK, "Aries");
			else
				erro = 1;
		break;
		
		// Abril
		case 4:
			// Antes do dia 20 o signo eh Aries
			if(dia < 20)
				strcpy(signoK, "Aries");
			// A partir do dia 20 o signo eh Touro
			else if(dia > 1)
				strcpy(signoK, "Touro");
			else
				erro = 1;
		break;
		
		// Maio
		case 5:
			// Antes do dia 21 o signo eh Touro
			if(dia < 21)
				strcpy(signoK, "Touro");
			// A partir do dia 21 o signo eh Gemeos
			else if(dia > 1)
				strcpy(signoK, "Gemeos");
			else
				erro = 1;
		break;
		
		// Junho
		case 6:
			// Antes do dia 21 o signo eh Gemeos
			if(dia < 21)
				strcpy(signoK, "Gemeos");
			// A partir do dia 21 o signo eh Cancer
			else if(dia > 1)
				strcpy(signoK, "Cancer");
			else
				erro = 1;
		break;
		
		// Julho
		case 7:
			// Antes do dia 23 o signo eh Cancer
			if(dia < 23)
				strcpy(signoK, "Cancer");
			// A partir do dia 23 o signo eh Leao
			else if(dia > 1)
				strcpy(signoK, "Leao");
			else
				erro = 1;
		break;
		
		// Agosto
		case 8:
			// Antes do dia 23 o signo eh Leao
			if(dia < 23)
				strcpy(signoK, "Leao");
			// A partir do dia 23 o signo eh Virgem
			else if(dia > 1)
				strcpy(signoK, "Virgem");
			else
				erro = 1;
		break;
		
		// Setembro
		case 9:
			// Antes do dia 23 o signo eh Virgem
			if(dia < 23)
				strcpy(signoK, "Virgem");
			// A partir do dia 23 o signo eh Libra
			else if(dia > 1)
				strcpy(signoK, "Libra");
			else
				erro = 1;
		break;
		
		// Outubro
		case 10:
			// Antes do dia 23 o signo eh Libra
			if(dia < 23)
				strcpy(signoK, "Libra");
			// A partir do dia 23 o signo eh Escorpiao
			else if(dia > 1)
				strcpy(signoK, "Escorpiao");
			else
				erro = 1;
		break;
		
		// Novembro
		case 11:
			// Antes do dia 22 o signo eh Escorpiao
			if(dia < 22)
				strcpy(signoK, "Escorpiao");
			// A partir do dia 22 o signo eh Sagitario
			else if(dia > 1)
				strcpy(signoK, "Sagitario");
			else
				erro = 1;
		break;
		
		// Dezembro
		case 12:
			// Antes do dia 22 o signo eh Sagitario
			if(dia < 22)
				strcpy(signoK, "Sagitario");
			// A partir do dia 22 o signo eh Capricornio
			else if(dia > 1)
				strcpy(signoK, "Capricornio");
			else
				erro = 1;
		break;
	
		default:
			erro = 1;
	
	}
	
	size = strlen(signoK);
	copy_to_user(signo, signoK, size);
	
  	return(erro);
}
