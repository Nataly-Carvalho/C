/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   
/*Q.Faça um programa que leia um número qualquer e imprima o 
seu cubo*/



//Calcular o cubo de qualquer numero//
#include <stdio.h>
#include <math.h>
int main() {

int Cubo,num;
  
printf("Calcular o cubo de um número");
  
printf(" \n\nDigite um número: ");
  
scanf("%d", &num);
  
Cubo = num * num * num;
printf("\nO seu resultado de: %d = %d", num, Cubo);



  return 0;
}
