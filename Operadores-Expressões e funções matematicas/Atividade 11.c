/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   
/*Q.Dada as seguintes entradas: quilometragem inicial, 
quilometragem final, litros consumidos, preço do litro de 
combustível. Faça um programa que imprima o seguinte 
Relatório: distância percorrida, Valor total gasto e o consumo do 
carro(quantos quilômetros percorre com 1 litro de combustível).*/


#include <stdio.h>
//quilometragem inicial,quilometragem fim, litros consumidos, preço do litro decombustível//
int main(void)
{
  float QI, QF, LC, PLC, DP, VT, CC;
//QI = Quilometragem inicial, QF = Quilometragem final, LC = Litrosconsumidos, 
PLC = preço do litro de combustivel, DP = Distancia percorrida, VT = Valor tota, CC = Consumo do carro.//

QI = 3000;
QF = 2000;
LC = 13;
PLC = 3.70;

DP = QI + QF;
printf("\n\nDistancia percorrida = %.1f km" ,DP);
  
VT = (DP/13);
CC = (VT/PLC);

printf("\n\nValor total gasto = R$ %.2f ", CC);  

printf("\n\nConsumo do carro foi de: %.2f ML por KM", VT);
  
  return 0;
}
