/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   
/*Q.Um motorista de táxi deseja calcular o rendimento de seu carro 
na praça. Sabendo-se que o preço do combustível é de R$2.59, 
faça um programa para ler: a marcação do odômetro (Km) no 
início do dia, a marcação (Km) no final do dia, a quantidade 
de litros de combustível gasto e o valor total (R$) recebido dos 
passageiros. Calcular e escrever: a média do consumo em km/l 
e o lucro (líquido) do dia.*/


#include <stdio.h>

int main(void) {
 float media_con, odo_ini, odo_fim, comb_gasto, lucro_pass, lucro_liqui;


printf("\n\nCalcular a media de combustível gasto e o lucro liquido do dia.");
  
printf("\n\nOdômetro Inicio do dia:");
scanf("%f", &odo_ini);

printf("\n\nOdômetro final do dia:");
scanf("%f", &odo_fim);

printf("\n\nCombustivel Gasto:");
scanf("%f", &comb_gasto);

printf("\n\nLucro do dia: ");
scanf("%f", &lucro_pass);

media_con = (odo_ini - odo_fim)/comb_gasto;
lucro_liqui = (comb_gasto * 2.59)- lucro_pass;

printf("\n\nMedia de KM: %.2f KM", media_con);
  
printf("\n\nLucro do dia: %.2f km/L", lucro_liqui);
  

  return 0;
}
