//bibliotecas
#include <stdio.h>
#include <stdlib.h>
//constantes 
#define SUCESSO 0
#define TAMANHOMAX 49+1
#define numNotas 2
//Struct
typedef struct DadosAluno
{   //campos  
    char nome[TAMANHOMAX];
    float notas[numNotas];
    float media;
}DadosAluno;

 int main(int argc, char ** argv)
 {  
    //variaveis
    DadosAluno * a;
    int i,nalunos;
    FILE* variavel;
    
    variavel=fopen("ju.txt","w");
    //caso não abra 
    if(variavel==NULL)
    {
        printf("Erro!O arquivo não foi aberto com sucesso.");
    return 1;
    }
    
    //lendo tamanho
    printf("Digite a quantidade de alunos:");
    scanf("%i",&nalunos);
    
    a=(DadosAluno*)malloc(nalunos*sizeof(DadosAluno));
    
    //lendo dados dos alunos
    for(i=0;i<nalunos;i++)
    {
        getchar();
        printf("Digite o nome do aluno:");
        fgets(a[i].nome,TAMANHOMAX,stdin);
        fprintf(variavel,"Nome:%s\n",a[i].nome);
        //notas:prova
        float somamedia=0;
        for(int j=0;j<numNotas;j++)
        { 
            printf("Digite a nota da prova %i:",j+1);
            scanf("%f",&a[i].notas[j]);
            fprintf(variavel,"Nota da prova %i:%f\n",j+1,a[i].notas[j]);
            //soma das notas
            somamedia=a[i].notas[j];
        }
        a[i].media=somamedia/2;
        fprintf(variavel,"media:%f\n",a[i].media);
    }
     //IMPRESSAO:exibindo resultado e dados de um alunos, apenas imprimindo
      for(int i=0;i<nalunos;i++)
    {   //imprimindo nome
        printf("\nNome:%s",a[i].nome);
        
        //imprimindo media das provas
        for(int j=0;j<numNotas;j++)
        { 
            printf("\nNota da prova %i:%f",j+1,a[i].notas[j]);
           
        }
        //imprimindo media das notas
         printf("\nMédia da notas:%f",a[i].media);
    }
    //libera memoria 
    free(a);
    fclose(variavel);
    return SUCESSO;
 }