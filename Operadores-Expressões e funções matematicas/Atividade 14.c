/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   
/*Q.. Faça um programa para um caixa eletrônico, que lê o valor 
que o cliente quer sacar e calcula o menor número possível de 
notas de 100,00, 50, 20 e 10 reais em que o valor lido pode ser 
decomposto. Escrever o valor do saque e a relação de notas 
necessárias. Suponha que o sistema monetário não utiliza 
centavos. Atenção: Só digite números múltiplos de 10.*/


#include <stdio.h>

int main(void) {
int V1, V2, V5, V10, Valor, R1, R2, R5, R10;

printf("Caixa eletrônico");

printf("\n\nDigite quanto você quer retirar: ");
scanf("%d", &Valor);
  
V10 = Valor/ 100; 
R10 = Valor % 100;
  
V5 = R10/50; 
R5 = R10 % 50;
  
V2 = R5/20; 
R2 = R5 % 20;
  
V1 = R2/10;
R1 = R2 % 10;

printf("\n\nO total de notas de 100 é de: %d", (V10));
printf("\n\nO total de notas de 50 é de: %d ", (V5)); 
printf("\n\nO total de notas de 20 é de: %d ", (V2)); 
printf("\n\nO total de notas de 10 é de: %d ", (V1));


  return 0;
}
