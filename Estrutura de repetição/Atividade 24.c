/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   
/*Q.Pablo tem 1,50 m e cresce 2 centímetros por ano, enquanto 
Edson tem 1,10 m e cresce 3 centímetros por ano. Construa 
um programa que calcule e imprima quantos anos serão 
necessários para que Edson seja maior que Pablo*/

#include <stdio.h>
#include <stdlib.h>

main() {
  float altura, maior, menor;
  int matri, x, matrimaior, matrimenor;
  maior = 0;
  menor = 300;
  for (x = 1; x <= 5; x++) {
    printf("\nPesquisa sobre altura dos alunos\n\n");
    printf("\nMatricula do aluno %d:\n", x);
    scanf("%d", &matri);
    printf("\nAltura do aluno:");
    scanf("%f", &altura);
    if (altura > maior) {
      maior = altura;
      matrimaior = matri;
    }
    if (altura < menor) {
      menor = altura;
      matrimenor = matri;
    }
  }
  printf("\nResultado\n\n");
  printf("O aluno mais baixo: Matricula %d e altura %.2fcm\n", matrimenor,
         menor);
  printf("O aluno mais alto: Matricula %d e altura %.2fcm\n", matrimaior,
         maior);

  return 0;
}
