/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   
/*Q.Faça um programa que lê 2 valores A e B (inteiros) e informa se 
A é divisível por B ou não*/

#include <stdio.h>

int main(void) {
 int A, B, Resto;

printf("\nDigite o valor de A: ");
scanf("%d", &A);

printf("\nDigite o valor de B: ");
scanf("%d", &B);

(Resto = A % B);

if (Resto == 0)
  printf("\nÉ divisivel ");

else {

  printf("\nNão é divisivel");

  
}
  return 0;
}
