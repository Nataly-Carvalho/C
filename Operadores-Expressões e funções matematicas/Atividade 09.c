/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   
/*Q.Uma empresa vai dar um aumento de salário ao seu 
funcionário. Faça um programa para ler o salário do funcionário 
e o percentual de reajuste. Calcular e escrever o valor do novo 
salário.*/

#include <stdio.h>
#include <math.h>

main() {
float novo_salario, A, salario;
  
//30/100 =0.3// 
A = 0.3;

printf("Reajuste de salario"),
  
printf("\n\nEscreva seu salario atual: R$ ");
  
scanf("%f", &salario); 
novo_salario = (salario*A);
salario = salario + novo_salario;

printf("\n\nO Seu reajuste de salario foi de 30%: \n%2.f Seu novo salario  é de: R$ %.2f", novo_salario, salario);

  return 0;
} 
