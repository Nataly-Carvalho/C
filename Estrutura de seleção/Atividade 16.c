/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   
/*Q.Faça um programa que leia um número inteiro e mostre uma 
mensagem indicando se este número é par ou ímpar, e se é 
positivo ou negativo.*/

#include <stdio.h>
#include <math.h>
int main(void) {
int num;

printf("\n\nDigite um número:");
scanf("%d", &num);

if (num = num % 2 == 0)
  {
printf("\nSeu numero é par");
    }
 else
{
 printf("\nEsse número é impar");
}
if(num>0)
{
printf("\nSeu número é positivo");
  }
else {
printf("\nSeu número é negativo");
}
  return 0;
}
