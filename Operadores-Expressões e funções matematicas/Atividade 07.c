/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   

//Declarar verdadeiro ou falso//

#include <stdio.h>

main() {
int A, B, C, D, E;

  A = 10;
  B = 3;
  C = 2;
  D = 2;
  E = 25;
  
(A == D);
printf("\n(A == D),É Falso");

((A>B) && (C==D));
printf("\n(A>B) && (C==D), É Verdadeiro");

(E+2<B+C) && (A==10);
printf("\n(E+2<B+C) && (A==10), É Faso ");
  
(D*E>100) || (B<5);
 printf("\n(D*E>100) || (B<5), É Verdadeiro");
   
((E==25) && (A >B+C+D) && (C<B));
  printf("\n(E==25) && (A >B+C+D) && (C<B), É Verdadeiro ");
    
!(A < 15) && (B>=3);
printf("\n!(A < 15) && (B>=3), É Falso");
  
((D>2) || (C == 7) && (E > 20));
printf("\n(D>2) || (C == 7) && (E > 20) È Verdadeiro");
  
  
  return 0;
  }
