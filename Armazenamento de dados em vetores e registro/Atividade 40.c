/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   
/*Q.Endereçço completo*/

#include <stdio.h>

int main(void) {

  char nome[20], sobrenome[20], rua[80], numero[10], bairro[20], cidade[40];

  printf("\n\nDigite seu nome: ");
  fflush(stdin);
  gets(nome);

  printf("\nDigite seu sobrenome: ");
  fflush(stdin);
  gets(sobrenome);

  printf("\nDigite sua rua: ");
  fflush(stdin);
  gets(rua);
  
  printf("\nDigite o numero da sua casa: ");
  fflush(stdin);
  gets(numero);
  
  printf("\nDigite seu bairro: ");
  fflush(stdin);
  gets(bairro);

  printf("\nDigite sua cidade: ");
  fflush(stdin);
  gets(cidade);

  printf("\nSeu nome é %s %s", nome, sobrenome);
  printf("\nSeu endereço é %s %s %s %s ",rua, numero, bairro, cidade);
}
