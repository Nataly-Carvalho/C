/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
  
/*Q.Faça um programa que leia dois números inteiros A e B e 
imprima o resultado da subtração de A por B. A resposta deve 
ter o seguinte formato: “6 – 2 = 4”.*/

//subtração de A e B//
#include <stdio.h>

main() 
{
int A, B, X; 
A = 6;
B = 2;
X = 0;
//O resultado tem que aparecer 6-2=4//
X = A - B;
printf("\n\nSubtração A e B");
printf("\n%d - %d = %d", A, B, X);
  return 0;
}
