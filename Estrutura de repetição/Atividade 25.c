/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   
/*Q.Uma empresa deseja aumentar seus preços em 20%. Faça um 
programa que leia o código e o preço de custo de cada produto 
e calcule o preço novo. Calcule, também, a média dos preços 
com e sem aumento. Mostre o código e o preço novo de cada 
produto e, no final, as médias. A quantidade de dados que serão 
cadastrados é desconhecida.*/


#include <stdio.h>

int main() {

  int codigo_produto, continuar;
  float preco_produto, novo_preco, reajuste, media;
  do {

    printf("\nDigite o codigo do produto: ");
    scanf("%d", &codigo_produto);

    printf("\nDigite o preço: ");
    scanf("%f", &preco_produto);

    reajuste = (preco_produto * 0.2);
    novo_preco = reajuste + preco_produto;
    if (reajuste >= 0)

      printf("\nO novo preço é de: %.2f", novo_preco);

    media = (novo_preco + preco_produto) / 2;

    printf("\nA media é de: %.2f", media);
    printf("\nDeseja cadastrar um novo produto? 1 -sim 2 - não\n");
    scanf("%d", &continuar);
  } while (continuar == 1);

  return 0;
}
