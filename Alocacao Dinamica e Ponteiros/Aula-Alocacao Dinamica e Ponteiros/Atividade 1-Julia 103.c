//Bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Definições 
#define SUCESSO 0

//funcões
int* AlocaVetor(int tamanho)
{
 return (int*)malloc(tamanho*sizeof(int));
}
//Inicio do programa
int main(int argc, char ** argv)
{   //Variaveis
    int tamanho;
    int* inteiros;
    
    //leitura do tamanho
    printf("Digite o tamanho do seu vetor de inteiros:");
    scanf("%i",&tamanho);
    
    //alocando espaço
    inteiros=AlocaVetor(tamanho);

    free(inteiros);
    return SUCESSO;
}