/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   
/*Q.Fazer um programa que leia uma data (dia e mês) e informe se é 
primavera, verão, outono ou inverno. Sabe-se que as estações, 
no hemisfério sul, começam nas seguintes datas:
» Primavera: 22/Set
» Verão: 21/Dez 
» Outono: 20/Mar
» Inverno: 20/Jun*/

#include <stdio.h>
#include <stdlib.h>

int dia,mes,hemisferio;

int main()
{

printf("Digite \"1\" para Hemisferio Norte e \"2\" para Hemisferio Sul: "); scanf("%u",&hemisferio); printf("\n");

printf("Digite o dia: "); scanf("%u",&dia); printf("\n");

printf("Digite o mes: "); scanf("%u",&mes); printf("\n");

if(hemisferio==1) {
if((mes==4 || mes==5) || (mes==3 && dia>=21) || (mes==6 && dia<=20))                           
{
printf("A estacao atual e PRIMAVERA\n\n"); system("PAUSE"); return 0;          
 }
if((mes==7 || mes==8) || (mes==6 && dia>=21) || (mes==9 && dia<=22))
  {
 printf("A estacao atual e VERAO\n\n"); ; return 0;
}
if((mes==10 || mes==11) || (mes==9 && dia>=23) || (mes==12 && dia<=20))
 {
printf("A estacao atual e OUTONO\n\n"); ; return 0;
 }
 if((mes==1 || mes==2) || (mes==12 && dia>=21) || (mes==3 && dia<=20)) 
{
 printf("A estacao atual e INVERNO\n\n");  return 0;
  }
  }

 if(hemisferio==2) {
  if((mes==4 || mes==5) || (mes==3 && dia>=21) || (mes==6 && dia<=20)) 
 {
printf("A estacao atual e OUTONO\n\n"); ; return 0;
 }
 if((mes==7 || mes==8) || (mes==6 && dia>=21) || (mes==9 && dia<=22))                  
 {
printf("A estacao atual e INVERNO\n\n"); ; return 0;                  
 }
 if((mes==10 || mes==11) || (mes==9 && dia>=23) || (mes==12 && dia<=20))
 {
printf("A estacao atual e PRIMAVERA\n\n");  return 0;
 }
 if((mes==1 || mes==2) || (mes==12 && dia>=21) || (mes==3 && dia<=20))
{
printf("A estacao atual e VERAOO\n\n");  return 0;
 }
 }

return 0;
}
