/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
  
 /*Q.Faca um programa que leia o nome do usuário e a sua idade e 
imprima quantos anos ele terá em 2020. A resposta deve ter o 
formato deste exemplo: “Carlos, em 2020 voce estara com 45 
anos”.*/

//Ler Nome do usuario e dizer sua idade em 2020//
#include <stdio.h>
main() 
{
  int idade, ano, data;
  char nome[30];
  
  printf("Digite Seu nome: ");
  fflush(stdin);
  
  gets(nome);
  printf("\nQuantos anos você tem?: ");
  scanf("%d", &idade);
  
  printf("\nEm que ano você nasceu?:");
  scanf("%d", &data);
  
  //Subtração de 2020 - o ano que ela nasceu//
  ano = 2020 - data;
  
  printf("\n\n%s, em 2020 voce tinha %d anos", nome, ano);
    
  
  return 0;
}
