/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   
/*Q.Deixar a mensagem em maiusculo*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void maiusculo(char msg1 [], char msg2[]) {
int i = 0;
  while (msg1[i] != ('\0')){
    msg2[i] = toupper(msg1[i]);
    i++;
    
  }
  msg2[i]= '\0';
}

int main(void) {
  char mensagem[200], maius[200];
  printf("\n\nDigite uma mensagem:");
   fflush(stdin);
  gets(mensagem);

  maiusculo(mensagem, maius);
  printf("\n\n%s\n", maius);
  
}
