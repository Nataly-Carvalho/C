/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   
/*Q.Desenvolva uma função que recebe o ano de nascimento do usuário e retorna a sua idade. Faça o cálculo usando o ano atual.*/

#include <stdio.h>
#include <stdlib.h>
int ano_atual = 2022;
int ano_nasc;

int main(void) {

  printf("\nDigite o ano em que você nasceu: ");
  scanf("%d", &ano_nasc);
  idade();
  return 0;
}
int idade() 
{ printf("Você tem: %d anos", ano_atual - ano_nasc); }
