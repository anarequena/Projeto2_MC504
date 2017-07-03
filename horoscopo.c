#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
  char signo[15]; 
  int dia, mes, ano, r;

  printf("Informe a data de nascimento no formato dd/MM/ano:\n");
  scanf("%d/%d/%d", &dia, &mes, &ano);
  
  r = syscall(384, dia, mes, signo);
  if(strcmp(signo,"Aries")==0)
      printf("O clima promete esquentar na intimidade\n");
  else if(strcmp(signo,"Touro")==0)
      printf("Nao sou oceano para ser pacifico\n");
  else if(strcmp(signo,"Gemeos")==0)
      printf("Toma jeito\n");
  else if(strcmp(signo,"Cancer")==0)
      printf("O mundo gira e vacilao roda\n");
  else if(strcmp(signo,"Leao")==0)
      printf("Nao tenha preguica de ser feliz\n");
  else if(strcmp(signo, "Virgem")==0)
      printf("De dia santinha, de noite soltinha\n");
  else if(strcmp(signo, "Libra")==0)
      printf("Se der certo beleza, se nao der paciencia\n");
  else if(strcmp(signo, "Escorpiao")==0)
      printf("O que voce tem, todo mundo pode ter, mas o que voce eh... ninguem pode ser\n");
  else if(strcmp(signo, "Sagitario")==0)
      printf("Felicidade sem plateia dura mais\n");
  else if(strcmp(signo, "Capricornio")==0)
      printf("Falta J C no seu coracao\n");
  else if(strcmp(signo, "Aquario")==0)
      printf("Se me atacar vou te atacar\n");
  else if(strcmp(signo, "Peixes")==0)
      printf("A noite, tainha, vinho e muito sexo\n");
      
  return r;
}
