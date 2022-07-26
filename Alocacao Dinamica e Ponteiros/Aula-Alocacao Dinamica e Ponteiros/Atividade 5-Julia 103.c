//Bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Definições 
#define SUCESSO 0
//Inicio do programa
int main(int argc, char ** argv)
{   //Variaveis
    int nlinhas,ncolunas,i=0,j=0;
    float**matrizreais,soma=0.0f;
    
    //leitura do tamanho
    printf("Digite o numero de linhas:");
    scanf("%i",&nlinhas);
    printf("Digite o numero de colunas:");
    scanf("%i",&ncolunas);
    //alocando linha
    matrizreais=(float**)malloc(nlinhas*sizeof(float*));
    
     //alocando colunas
     for(i=0;i<nlinhas;i++)
     {
        matrizreais[i]=(float*)malloc(ncolunas*sizeof(float));
     }
    //lendo elementos da matriz
    printf("Digite os elementos da matriz\n");
    for(i=0;i<nlinhas;i++)
     {
        printf("\tLINHA %i\t\n",i+1);
        for(j=0;j<ncolunas;j++)
        {
            printf("COLUNA %i:",j+1);
            scanf("%f",&matrizreais[i][j]);
        }
     }
     
    //somando elementos da matriz
    for(i=0;i<nlinhas;i++)
     {
        for(j=0;j<ncolunas;j++){
        soma+=matrizreais[i][j];
        }
     }
     printf("Soma dos numeros reais: %f",soma);
    //liberando espaço
    for(i=0;i<nlinhas;i++)
    {
        free(matrizreais[i]);
    }
    free(matrizreais);
    return SUCESSO;
}