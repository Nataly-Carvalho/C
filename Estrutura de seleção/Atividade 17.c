/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   
/*Q.Tendo como dados de entrada a altura e o sexo(1-feminino/2-masculino) 
de uma pessoa,construa um programa que calcula  e escreve seu peso ideal, 
utilizando as seguintes fórmulas:
» para homens: (72.7*altura)-58
» para mulheres: (62.1*altura)-44.7*/

#include <stdio.h>

int main(void) {
float Altura,peso;
int Sexo;

printf("\n\nDigite a sua altura em metros: ");
scanf("%f",&Altura);

printf("\n\nDigite o seu sexo (1 para Masculino e 2 para Feminino):");  
scanf("%d",&Sexo);
  
if(Sexo == '1')
{
peso = (72.7*Altura)-58;
printf("\n\nO seu peso ideal é: %.2f\n",peso);
}
else
 {
peso= (62.1*Altura)-44.7;
printf("\n\nO seu peso ideal é: %.2f\n",peso);
 }

    return 0;
}
