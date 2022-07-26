//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//constantes 
#define SUCESSO 0
#define TAMANHOMAX 49+1
#define numNotas 2
#define tamanho 1000
#define ERRO 1
#define NULO NULL

int ContaNumLinhaArquivo(FILE* arquivotxt)
{   //declaração de variaveis
    int contadorlinhas=1;
    char charx;
    //endereço do descritor do arquivo:ponte com sistema operacional
    //CONTANDO AS LINHAS
     char arquivousuario[tamanho];

    printf("Digite o nome do arquivo");
    scanf("%s",arquivousuario);
    arquivotxt = fopen(arquivousuario,"r");
    if(arquivotxt==NULO)
    { //nao conseguiu abrir o arquivo
       printf("Erro na abertura do arquivo");
       return ERRO;
    }
    else
    {
        while(!feof(arquivotxt))
        {
            fscanf(arquivotxt,"%c",&charx);
            if(charx=='\n')
            {
                contadorlinhas++;
            }
        }
    }
 
    fclose(arquivotxt);
    return contadorlinhas;
}
int main(int argc, char ** argv)
{
    FILE * arq;

    printf("Num. de Linhas: %i",ContaNumLinhaArquivo(arq));
    return SUCESSO;
}