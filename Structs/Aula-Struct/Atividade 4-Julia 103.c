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
    float somanotaspAluno;
    float MediaAluno;
    }DadosAluno;
//funcao e procedimentos
void OrdenaCrescenteImprime(DadosAluno a1[],int nalunos){
    int aux,i,j;
    for(int i=1;i<nalunos;i++)
    {
        for(int j=nalunos-1;j>=i;j--)
        {
            if(a1[j-1].MediaAluno>a1[j].MediaAluno)
            {
                aux=a1[j-1].MediaAluno;
                a1[j-1].MediaAluno=a1[j].MediaAluno;
                a1[j].MediaAluno=aux;
            }
        }
    }
    //imprimindo a media em ordem crescente
    printf("ORDEM CRESCENTE DE MEDIAS:\n");
    for(int j=0;j<nalunos;j++)
    {
        printf("%i-%f\n",j+1,a1[j].MediaAluno);
    }
    return;
}
//
 int main(int argc, char ** argv)
 {  //variaveis
    DadosAluno * a1;
    float mediageral=0.0;
    float Somamediageral=0.0f;
    int i,nalunos;
    
    
    //lendo tamanho
    printf("Digite a quantidade de alunos:");
    scanf("%i",&nalunos);
    
    //alocando espaço
    a1=(DadosAluno*)malloc(nalunos*(sizeof(DadosAluno)));
    
    //lendo dados dos alunos
    for(i=0;i<nalunos;i++)
    {
        getchar();
        printf("Digite o nome do aluno:");
        fgets((a1[i].nome),TAMANHOMAX,stdin);
        printf("Digite o curso do aluno:");  
        fgets((a1[i].curso),TAMANHOMAX,stdin);
        printf("Digite a idade do aluno:");
        scanf("%i",&(a1[i].idade));
        //notas:prova
        for(int j=0;j<numNotas;j++)
        { 
            printf("Digite a nota da prova %i:",j+1);
            scanf("%f",&(a1[i].Notas[j]));
            //soma das notas
            a1[i].somanotaspAluno+=a1[i].Notas[j];
   
        }
        a1[i].MediaAluno=a1[i].somanotaspAluno/numNotas;
        Somamediageral=+a1[i].MediaAluno;
    
        //exibindo resultado e dados de um alunos
        printf("ALUNO(A): %s\n",a1[i].nome);
        printf("CURSO:%s\n",a1[i].curso);
        printf("IDADE: %i\n",a1[i].idade);
        printf ("Media das notas %f\n",a1[i].MediaAluno);
    
        if(a1[i].MediaAluno>=Media)
        {
            printf("\t%s FOI APROVADO\n",a1[i].nome);
        }
        else
        {
            printf("\t%s FOI REPROVADO\n",a1[i].nome);
        }
    }
    mediageral=Somamediageral/nalunos;
    printf("\n\nmedia da turma: %f\n",mediageral);
    OrdenaCrescenteImprime(a1,nalunos);
    //libera memoria 
    free(a1);
    return SUCESSO;
 }