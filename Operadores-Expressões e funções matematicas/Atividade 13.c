/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   
/*Q..Faça um programa que leia o tempo de duração de um evento 
em uma fábrica expressa em segundos e mostre-o expresso 
em horas, minutos e segundos.*/

#include <stdio.h>

int main(void) {
float H, M, S;

M = 60;
S = 3600;


printf("\n\nQuantas horas de um evento: ");
scanf("%f", &H);

S = (H * S);
M = (H * M);

printf("\n\nHoras do evento: %.2f Horas %.0f Minutos %.0f Segundos", H, M, S);

  return 0;
}

