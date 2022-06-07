/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   
/*Q.Escrever um programa que lê a matrícula do aluno e suas 3 
notas. Calcular a média e verificar qual o seu conceito*/



#include <stdio.h>
#include <stdlib.h>

int main(void) {
float  Nota1, Nota2, Nota3, Media;
  
char nome[30];


printf("\nNome do aluno:");
scanf("%s", &nome);
  
printf("\nNota 1: ");
scanf("%f", &Nota1);
  
printf("\nNota 2: ");
scanf("%f", &Nota2);
  
printf("\nNota 3: ");
scanf("%f", &Nota3);

Media = (Nota1 + Nota2 + Nota3)/3;
  
printf("\n\nO Aluno:  %s , \nTem a media:  %.1f ", nome, Media);

if (Media >= 9.0){ 
   printf("\nConceito A, Aprovado.");
  }else 
{
if (Media >= 7.5 && Media< 9.0){
   printf("\nConceito B, Aprovado.");
  }
else 
{
if (Media >= 6.0 && Media < 7.5){
printf("\nConceito C, Aprovado.");
  }
else
{
if (Media >= 4.0 && Media < 6.0) {
printf("\nConceito D, Reprovado.");
  }
else 
if (Media < 4.0)
{printf("\nConceito E, Reprovado.");}
  }
    }
      }
  
  return 0;
}
