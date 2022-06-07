/*Nome: Nataly Carvalho da Silva
  Escola: ETE Ginasio Pernambucano
   Turma: Modulo 1 A*/
   
/*Q.Faça um programa que cadastre e apresente os dados dos alunos de uma escola. Os
dados dos alunos devem ser armazenados em um vetor de registro, com a capacidade
de armazenar até 20 alunos.*/


#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main() {
  typedef struct {
    int num_matricula, serie, irmao;
    char nome[20];
    float mensalidade;
  } boletim;

  boletim aluno[20];
  int i, qa=0,cadastro;
  
do
   {
  printf("\nCADASTRO DO ALUNO\n");

  printf("\nDigite o nome do aluno: \n");
  fflush(stdin);
  gets(aluno[qa].nome);

  printf("\nDigite a matricula do aluno: \n");
  scanf("%d", &aluno[qa].num_matricula);

  printf("\nDigite a serie do aluno: \n");
  scanf("%d", &aluno[qa].serie);

  printf("\nO aluno tem irmão na escola? Digite 1 se sim e 0 se não\n");
scanf("%d", &aluno[qa].irmao);
  switch (aluno[qa].serie)
    {
  case 1:
    if (aluno[qa].irmao == 1) {
      aluno[qa].mensalidade = 110 - (110 * 0.20);
    } else {
      aluno[qa].mensalidade = 110;
    } break;

case 2:
  if (aluno[qa].irmao == 1) {
    aluno[qa].mensalidade = 130 - (130 * 0.20);
  } else {
    aluno[qa].mensalidade = 130;
  } break;

case 3:
  if (aluno[qa].irmao == 1) {
    aluno[qa].mensalidade = 160 - (160 * 0.20);
  } else {
    aluno[qa].mensalidade = 160;
  } break;
case 4:
  if (aluno[qa].irmao == 1) {
    aluno[qa].mensalidade = 180 - (180 * 0.20);
  } else {
    aluno[qa].mensalidade = 180;
  }break;
}
  
  printf("\n\nDeseja cadastrar outro aluno(1-sim/0-nao)? ");
   scanf("%d",&cadastro);
     switch(cadastro){
       case 1:
         {
           qa++;break;
         }
       default:
         {
            cadastro=0;break;
         }
     }
}while (cadastro == 1 && qa < 20);

  printf("\nCadastro do aluno\n");
  printf("\n________________________________");
  printf("\nMatricula     Nome    Serie   Irmao    Mensalidade");
  for (i = 0; i <= qa; i++)
    {
    printf("\n%d %20s %5d %5d %11.2f",aluno[i].num_matricula, aluno[i].nome,aluno[i].serie, aluno[i].irmao, aluno[i].mensalidade);
  }
  printf("\n_______________________________");
  printf("\nTecle enter para sair...");
  getche();
  }
