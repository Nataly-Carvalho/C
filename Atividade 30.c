/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   
/*Q. Desenvolva uma função que recebe como parâmetro o mês atual e retorna quantos meses faltam para o final do ano.*/


#include <stdio.h>
int mes_atual;
int mes = 12;

int main(void) {
  printf("Digite mês em que você está:  ");
  scanf("%d", &mes_atual);
  meses_que_faltam();
  return 0;
}
meses_que_faltam(){
  printf("\n\nFaltam  %d meses para o ano acabar!", mes - mes_atual);
  
}
