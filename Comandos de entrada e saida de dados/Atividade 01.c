/*Nome: Nataly Carvalho da Silva
Escola: ETE Ginasio Pernambucano
Turma: Modulo 1 A*/

/*Q.Faça um programa que leia dois números reais A e B e os 
imprima na tela. O valor da variável A deve ser apresentado 
com duas casa decimais e o valor da variável B com três casas 
decimais.*/

#include<stdio.h>
float A, B;
main()
{
  A = 29.34;
  B = 20.987;
  
  printf("Valor de A = %.2f\n", A);
  
  printf("Valor de B = %.3f\n", B);
  return 0;
}
