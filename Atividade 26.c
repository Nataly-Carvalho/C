/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   

#include <stdio.h>

int main(void) {
 float Pablo = 1.50, Edson = 1.10;
int ano = 0;

  printf("\n Pablo tem 1,50 m e cresce 2 centímetros por ano, enquanto Edson tem 1,10 m e cresce 3 centímetros por ano. Construa um programa
  que calcule e imprima quantos anos serão necessários para que Edson seja maior que Pablo.\n");
  while (Pablo>= Edson)
    {
    Pablo += 2;
    Edson += 3;
    ano ++;}
  printf("\n\nÉ necessario %d ano", ano);
      
  
  return 0;
}
