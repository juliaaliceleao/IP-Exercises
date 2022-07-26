//bibliotecas
#include <stdio.h>
#include <stdlib.h>
//constantes 
#define TAMANHOMAX 49+1
//Struct
typedef struct DadosAluno{
    //campos 
    char nome[TAMANHOMAX];
    char curso[TAMANHOMAX];
    int idade;
    }DadosAluno;
//
 int main(int argc, char ** argv)
 {  //variaveis
    DadosAluno a1;
    printf("Digite o nome do aluno:");
    fgets(a1.nome,TAMANHOMAX,stdin);
    printf("Digite o curso do aluno:");
    fgets(a1.curso,TAMANHOMAX,stdin);
    printf("Digite a idade do aluno:");
    scanf("%i",&(a1.idade));
    printf("ALUNO(A): %s\n",a1.nome);
    printf("CURSO:%s\n",a1.curso);
    printf("IDADE: %i",a1.idade);
 }