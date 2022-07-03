/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   
/*Q.Desenvolva uma função que receba três números inteiros como 
parâmetros e retorne o menor valor*/


#include <stdio.h>
#include <stdlib.h>


int menornumero();
int nu1, nu2, nu3;


int main(void) {
  
 menornumero1();

  return 0;
}


int menornumero1() 
{
  printf("\nDigite número 1: ");
  scanf("%d", &nu1);
  printf("\nDigite número 2: ");
  scanf("%d", &nu2);
  printf("\nDigite número 3: ");
  scanf("%d", &nu3);
  
  if ((nu1 < nu2 )&& (nu1 < nu3)){
    printf("%d é o menor número.", nu1);}

 else if ((nu2 < nu1) && (nu2 < nu3)){
   printf("%d é o menor número.", nu2);
   }

  else ((nu3 < nu2) && (nu3 < nu1));{
    
    printf("%d é o maior número.", nu3);}
  }
  
