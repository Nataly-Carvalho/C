/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   
/*Q.Faça um programa que leia o nome do usuário, a idade do 
usuário, o nome da mãe do usuário e a idade da mãe do 
usuário. O programa deverá imprimir na tela quantos anos a 
mãe do usuário tinha quando ele nasceu. A resposta deve ter 
o formato deste exemplo: “Carlos, quando voce nasceu, Dona 
Cecilia tinha 27 anos”.*/


#include <stdio.h>

main()
{
 int Sua_idade, ano, idade_Mae;
  char nome[30];
  char nome2[30];
  
  printf("Digite Seu nome: ");
  fflush(stdin);
  gets(nome);
  
  printf("\nDigite o nome da sua mãe: ");
  
  fflush(stdin);
  gets(nome2);
  
  printf("\nQuantos anos você tem?: ");
  scanf("%d", &Sua_idade);
  
  printf("\nQuantos anos sua mãe tem?: ");
  scanf("%d", &idade_Mae);
  
//subtração da idade da sua mãe - a sua idade//
  ano = idade_Mae - Sua_idade;
  
  printf("\n\n%s, Quando você nasceu, Dona %s Tinha %d Anos", nome, nome2, ano);
  
  return 0;

}
