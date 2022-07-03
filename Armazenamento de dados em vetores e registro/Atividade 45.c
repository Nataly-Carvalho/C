/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   

/*Q.Ler dois vetores e caso tenham tamanhos iguais, armazene seus elementos
alternadamente em um terceiro vetor.*/

#include <stdio.h>

int main(void) {
  
  int Vetor1 [5],Vetor2[5], Vetor3[10], i;
    
  for (i=0; i<5; i++)
    {
      printf("\n-----Digite um numero para o vetor 1 possição %d: ",i);
      scanf("%d", &Vetor1[i]);
    }
  for (i=0; i<5; i++)
    {
      printf("\n------Digite um numero para o vetor 2 possição %d: ",i);
      scanf("%d", &Vetor2[i]);
    }
  for (i=0; i<5; i++){
    Vetor3[i*2] = Vetor1[i];
      }
  for (i=0; i<5; i++){
    Vetor3[i*2+1] = Vetor2[i];
      }
  for (i=0; i<10; i++){
    printf("\n---Os Vetores são: %d---\n", Vetor3[i]);
      }
  }
