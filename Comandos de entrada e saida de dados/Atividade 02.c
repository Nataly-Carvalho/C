/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   
/* Q.Faça um programa que leia o nome do usuário e escreva uma 
frase de saudação, desejando um bom dia de trabalho para 
o mesmo. A resposta deve ter o formato deste exemplo: “Ola 
Joao, tenha um otimo dia de trabalho!”. Faca o programa soar 
um sinal sonoro(beep) ao escrever esta frase*/


#include <stdio.h>
//Ler Nome de usuário e escrever saudação//
main() 
{
  char nome [20];
  
printf("Digite seu nome: ");
  
scanf("%s",nome);
  
printf("\aOlá %s ", nome);
printf("Tenha um Otimo dia de trabalho!");
  
  return 0;
}
