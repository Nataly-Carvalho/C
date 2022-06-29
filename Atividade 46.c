/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   
/*Q.Faça um programa para uma Agência de Turismo armazenando 
os dados em um arquivo. O programa deverá ter as seguintes 
funções: Cadastrar roteiro, Consultar roteiro, Listagem de todos 
os roteiros e Simular valor de viagem*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//Declaração do registro globalmente 

typedef struct {
  int codigo, dias,roteiro, quarto, carro_diaria, diaria;
float total;
  char nome[50];
  }turismo;
  turismo roteiro[54];

    void Nome (int i);
    void codigo (int i);
    void tipo_quarto (int i);
    void quantidade_d (int i);
    void Roteiro (int i);
    void carro (int i);
    void total (int i);
   
int main(void) {
  /*Declara as variaveis do indice e da opção de continuar*/
  int i,i2, cont=0;
  for (i=0;i<54;i++){
    
  
     Nome (i);
     codigo ( i);
     Roteiro (i);
    tipo_quarto (i);
     quantidade_d (i);
     carro (i);
     total (i);
  
  printf("\nDeseja registar outro? \n");
    printf("1- Se deseja continuar 0 - Sair");
    scanf("%d",&cont);
    if(cont==0){
      break;
    }
    else if(cont==1){
      continue;
    }
    }
  printf("\nNome\tCodigo\tRoteiro\tQuarto\tDias\tTotal\n");
  for(i2=0;i2<=i;i2++){
    printf("%s\t%d\t%d\t%d\t%d\t%.2f\n",roteiro[i2].nome,roteiro[i2].codigo, roteiro[i2].roteiro, roteiro[i2].quarto, roteiro[i2].dias, roteiro[i2].total);  
  

    }
    }
  //modulação do nome
  void Nome (int i){
  int i2;
  for (i2=i; i2<= i; i2++)
  {
    printf("\nDigite o nome do cliente: \n");
    fflush(stdin);
    gets(roteiro[i2].nome);
  }
  }


void codigo (int i){
  int i2;
  for (i2=i; i2<= i; i2++)
    {
    printf("\nDigite o codigo do cliente: \n");
      scanf("%d",&roteiro[i2].codigo);
    }

}


void tipo_quarto(int i){
  int i2;
  for (i2=i; i2<= i; i2++)
    {
    printf("\nQual o quarto desejado?\n");
    printf("\n1- Standard, 2- Luxo:  \n");
    scanf("%d",&roteiro[i2].quarto);
    
  switch (roteiro[i2].quarto){
    case 1:
    roteiro[i2].quarto=1; break;
    case 2:
    roteiro[i2].quarto=2 ; break;
    default:
    printf("Opção invalida digite novamente");
    sleep (2);
    tipo_quarto (i);break;
    }
      }
    
  
}
void quantidade_d (int i){
  int i2;
  for (i2=i; i2<= i; i2++){
    printf("\nQuantidade de dias: ");
    scanf("%d",&roteiro[i2].dias);
    if(roteiro[i2].roteiro==1&&roteiro[i2].quarto==1){
      roteiro[i2].diaria=170;
      break;
    }
    else if(roteiro[i2].roteiro==2&&roteiro[i2].quarto==1){
roteiro[i2].diaria=350;
      break;
    }
    else if(roteiro[i2].roteiro==3&&roteiro[i2].quarto==1){
      roteiro[i2].diaria=370;
      break;
}
if(roteiro[i2].roteiro==1&&roteiro[i2].quarto==2){
  roteiro[i2].diaria=170+30;
      break;
}
else if(roteiro[i2].roteiro==2&&roteiro[i2].quarto==2)
{
  roteiro[i2].diaria=350+30;
      break;
}
  else if(roteiro[i2].roteiro==3&&roteiro[i2].quarto==2){
        roteiro[i2].diaria=370+30;
      break;

  }
    }
  }

  void Roteiro (int i) {
  int i2;
  for (i2=i; i2<=i; i2++)
    {
    printf("\nQual o roteiro desejado?\n");
    printf("\n1-Brasil, 2-EUA, 3-África: \n");
    scanf("%d",&roteiro[i2].roteiro);
      
    }

  }

  void carro(int i){
    int i2;
    for (i2=i; i2<= i; i2++) {
    printf("\nO cliente deseja alugar carro?\n");
    printf("\nDigite 1 se sim e 0 se não:\n");
    scanf("%d", &roteiro[i2].carro_diaria);
    switch (roteiro[i2].roteiro){
        case 1:
          if ((roteiro[i2].carro_diaria=1) && (roteiro[i2].roteiro =1))
          {
          roteiro[i2].carro_diaria= 50;}break;
          
        case 2:
          if ((roteiro[i2].carro_diaria=1) && (roteiro[i2].roteiro =2))
        {
        roteiro[i2].carro_diaria= 60;}break;
        
        case 3:
          if ((roteiro[i2].carro_diaria=1) && (roteiro[i2].roteiro =3))
          {
          roteiro[i2].carro_diaria= 75;}break;
      }
  }
    
    }
void total (int i)
{
  roteiro[i].total= roteiro[i].dias* roteiro[i].diaria + roteiro[i].dias*roteiro[i].carro_diaria;
}
