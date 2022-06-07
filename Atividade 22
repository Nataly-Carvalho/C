/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   
/*Q. Escrever um programa que lê a hora de início e hora de término 
de um jogo, ambas subdivididas em dois valores distintos: horas 
e minutos. Calcular e escrever a duração do jogo, também em 
horas e minutos, considerando que o tempo máximo de duração 
de um jogo é de 24 horas e que o jogo pode iniciar em um dia e 
terminar no dia seguinte.*/

#include <stdio.h>
#include<stdlib.h>

int main()

{

int hora1, hora2, min1, min2;
int valorHora, valorMin;
printf("Digite a hora e depois os minutos do inicio do jogo: \n");
scanf("%d %d", &hora1, &min1);
printf("Digite a hora e depois os minutos do termino do jogo: \n");
scanf("%d %d", &hora2, &min2);

if (hora2 >= hora1) {

if (min2 >= min1) {

valorHora = hora2 - hora1;
valorMin = min2 - min1;
printf("O jogo durou %d hora(s) e %d minuto(s)", valorHora, valorMin);

}

else {
valorHora = hora2 - hora1 - 1;
valorMin = min2 + (60 - min1);
printf("O jogo durou %d hora(s) e %d minuto(s)", valorHora, valorMin);

}
}

else {
if (min2 >= min1) {
valorHora = 12 + hora2;
valorMin = min2 - min1;
printf("O jogo durou %d hora(s) e %d minuto(s)", valorHora, valorMin);

}
else {
valorHora = 12 + hora2 - 1;
valorMin = min2 + (60 - min1);
printf("O jogo durou %d hora(s) e %d minuto(s)", valorHora, valorMin);
}
}
return 0;

}
