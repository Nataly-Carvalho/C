/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   
/*Q.Elaborar um programa que irá ler quatro inteiros diferentes e informa qual é o menor valor.*/


#include <stdio.h>

int main(void) 
{
  int num1,num2,num3,num4;
  
  printf("\nDigite o Primeiro numero: ");
  scanf("%d", &num1);
  
   printf("\nDigite o Segundo numero: ");
  scanf("%d", &num2);
  
   printf("\nDigite o Terceiro numero: ");
  scanf("%d", &num3);
  
   printf("\nDigite o Quarto numero: ");
  scanf("%d", &num4);

  if ((num1<num2) && (num1 <num3) && (num1<num4))
{
printf("\n%d É o Menor número",num1);
}
  if ((num2<num1)&&(num2 <num3) && (num2<num4))
{
printf("\n%d É o Menor número",num1);
}
  if ((num3<num1)&&(num3 <num2) && (num3<num4))
{
printf("\n%d É o Menor número",num1);
}
  if ((num4<num1)&&(num4 <num2) && (num4<num3))
{
printf("\n%d É o Menor número",num1);
}
return 0;
}
