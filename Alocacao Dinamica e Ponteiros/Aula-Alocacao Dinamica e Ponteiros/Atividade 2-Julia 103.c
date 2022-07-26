//Bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Definições 
#define SUCESSO 0
//Inicio do programa
int main(int argc, char ** argv)
{   //Variaveis
    int nlinhas,ncolunas,i=0;
    float**matrizreais;
    
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
    
    //liberando espaço
    for(i=0;i<nlinhas;i++)
    {
        free(matrizreais[i]);
    }
    free(matrizreais);
    return SUCESSO;
}