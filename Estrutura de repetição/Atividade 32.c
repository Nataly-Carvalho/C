/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   

#include <stdio.h>
//Vetor//
int main(void) {

  float nota[7];
  float soma = 0;
  int i;
  int semana [7]= {1,2,3,4,5,6,7};
//indice igual a i//
  for (i = 0; i < 7; i++) {
    printf("\nEntre com a %da. nota: ", (i + 1));
    scanf("%f", &nota[i]);
    soma = soma + nota[i];
    printf("\nEntre com o dia %d da semana:\n", semana[i]);
    printf("\nMostre o indice %d\n", i);
  }

  printf("\nMédia da disciplina = %f", soma / 7);
return 0;
}
