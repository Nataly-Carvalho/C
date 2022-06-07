/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   
/*Q.Ler um vetor de números e imprimir os valores armazenados nas posições PARES e em seguida,
os valores armazenados nas posições ÍMPARES.*/


#include <stdio.h>
#include <stdlib.h>

int vetor[6], i, x = 0;

int main(void) {
  do {
    printf("\nDigite um valor inteiro:");
    scanf("%d", &vetor[x]);
    x++;
  } while (x < 6);

  printf("\nOs valores armazenados nas posições pares são\n");
  for (i = 0; i < x; i++) {
    if (i % 2 == 0)
      printf("%d", vetor[i]);
  }
  printf("\n\nOs valores armazenados nas posições impares são\n");
  for (i = 0; i < x; i++) {
    if (i % 2 != 0)
      printf("%d", vetor[i]);
  }
  getchen();
}
