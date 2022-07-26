//bibliotecas
#include <stdio.h>
#include <stdlib.h>
//constantes 
#define SUCESSO 0
#define TAMANHOMAX 49+1
#define numNotas 3
#define Media 60
//Struct
typedef struct DadosAluno{
    //campos  
    char nome[TAMANHOMAX];
    char curso[TAMANHOMAX];
    int idade;
    float Notas[numNotas];
    }DadosAluno;
//
 int main(int argc, char ** argv)
 {  //variaveis
    DadosAluno a1;
    float somanotas=0.0,medianotas=0.0;
    int i;
    //lendo dados do aluno
    printf("Digite o nome do aluno:");
    fgets(a1.nome,TAMANHOMAX,stdin);
    printf("Digite o curso do aluno:");  
    fgets(a1.curso,TAMANHOMAX,stdin);
    printf("Digite a idade do aluno:");
    scanf("%i",&(a1.idade));
    for(int i=0;i<numNotas;i++){ 
    printf("Digite a nota da prova %i:",i+1);
    scanf("%f",&(a1.Notas[i]));
    //soma das notas
    somanotas+=a1.Notas[i];
    }
    //media das notas
    medianotas=somanotas/numNotas;
    //exibindo resultado e dados
    printf("ALUNO(A): %s\n",a1.nome);
    printf("CURSO:%s\n",a1.curso);
    printf("IDADE: %i\n",a1.idade);
    if(medianotas>=Media)
    {
        printf("VOCÊ FOI APROVADO");
    }
    else{
        printf("VOCÊ FOI REPROVADO");
    }
    return SUCESSO;
 }