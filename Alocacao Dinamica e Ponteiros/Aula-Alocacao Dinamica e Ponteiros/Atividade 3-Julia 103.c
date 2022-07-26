 //Bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Definições 
#define SUCESSO 0
#define TAMANHOMAX (999+1)
//Inicio do programa
int main(int argc, char ** argv)
{   //Variaveis
    float * reais;
    int tamanho;
    float media=0.0,somamedia=0.0;
    //leitura do tamanho
    printf("Digite o tamanho do seu vetor de reais:");
    scanf("%i",&tamanho);
    //alocando espaço
    reais=(float*) malloc(tamanho*sizeof(float));
    
    for(int i=0;i<tamanho;i++)
    {   //leitura dos numeros
        printf("Digite o %i numero:",i+1);
        scanf("%f",& reais[i]);
        somamedia+=reais[i];
    }
    //media 
    media=somamedia/tamanho;
    //exibindo resultado
    printf("media igual a:%f",media);
    free(reais);
}