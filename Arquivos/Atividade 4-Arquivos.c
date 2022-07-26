//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//constantes 
#define SUCESSO 0
#define TAMANHOMAX 49+1
#define numNotas 2
#define ERRO 1

//Struct
typedef struct DadosAluno
{   //campos  
    char nome[TAMANHOMAX];
    float notas[numNotas];
    float soma2notas;
    float media;
}DadosAluno;

//funcao
double DescobreVariancia(FILE * variavel,int nalunos,DadosAluno*a)
{
    float somamediasg = 0;
    float somap = 0;
    float mediag = 0;
    double variancia = 0;
  //CALCULO:variancia e DesvioPadrao
    //somatoria das medias
    for(int i=0;i<nalunos;i++)
    {
        int somamediasg=+a[i].media;
    }
    //media dos alunos
    mediag=somamediasg/nalunos;
    //CALCULO DA VARIANCIA 
    //devemos calcular agora a subtracao das medias de cada aluno pela media geral
    // e elevar o resultado ao quadrado.Em seguida soma-las a de cada aluno
    //depois dividir pelo numero de alunos menos 1

    for(int i=0;i<nalunos;i++) 
    {
        somap += pow(a[i].media-mediag,2);
    }
    variancia= somap/(nalunos);
    

    return variancia;
}

//função Desvio
float CalculodoDesvioPadrao(double variancia)
{
    //DESVIO PADRAO É IGUAL A RAIZ DA VARIANCIA
    //sqrt= calcula a raiz quadrada
    double DesvioPadrao;
DesvioPadrao=sqrt(variancia);
return DesvioPadrao;
}


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
    return ERRO;
    }
    
    //lendo tamanho
    printf("Digite a quantidade de alunos:");
    scanf("%i",&nalunos);

    //alocando espaço para n alunos
    a = (DadosAluno*)malloc(nalunos*sizeof(DadosAluno));
    
    //lendo dados dos n alunos
    for(i=0;i<nalunos;i++)
    {
        //tirando o \n
        getchar();
        //lendo nome
        printf("Digite o nome do aluno:");
        fgets(a[i].nome, TAMANHOMAX, stdin);

        //salvando no arquivo
        fprintf(variavel,"Nome: %s\n", a[i].nome);
   
        //lendo notas
        for(int j=0;j<numNotas;j++)
        { 
            //lendo prova 1 e 2
            printf("Digite a nota da prova %i:",j+1);
            scanf("%f",&a[i].notas[j]);
            //salvando no arquivo
            fprintf(variavel,"Nota da prova %i:%f\n",j+1,a[i].notas[j]);
            //soma das notas para media
            a[i].soma2notas+=a[i].notas[j];
        }
        //calculo da media de cada aluno: soma notas/numnotas
        a[i].media=a[i].soma2notas/numNotas;
        //salvando no arquivo
        fprintf(variavel,"media:%f\n",a[i].media);
    }
    double variancia=DescobreVariancia(variavel,nalunos,a);
    fprintf(variavel,"Variancia:%f\n",variancia);
    printf("Variancia:%f\n",variancia);
    fprintf(variavel,"Desvio Padrao:%f",CalculodoDesvioPadrao(variancia));
    printf("Desvio Padrao:%f",CalculodoDesvioPadrao(variancia));
    
    //IMPRESSAO:exibindo resultado e dados de um alunos, apenas imprimindo
      for(i=0;i<nalunos;i++)
      {   
        //imprimindo nome

        printf("\nNome:");
        printf("%s",a[i].nome);
        
        //imprimindo media das provas
        for(int j=0;j<numNotas;j++)
        { 
            printf("\nNota da prova %i:",j+1);
            printf("%f",a[i].notas[j]);
           
        }
        //imprimindo media das notas
         printf("\nMédia da notas:%f",a[i].media);
        }
    
    //FINALIZACAO
    //libera memoria 
    free(a);
    //fecha arquivo
    fclose(variavel);
    return SUCESSO;
 }