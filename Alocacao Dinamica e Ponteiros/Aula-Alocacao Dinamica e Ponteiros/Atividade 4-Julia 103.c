 //Bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Definições 
#define SUCESSO 0

//Inicio do programa
int main(int argc, char ** argv)
{   //Variaveis
    int tamanho,imenor=0,imaior=0,i;
    float auxiliarmaior,auxiliarmenor;
    
    //leitura do tamanho
    printf("Digite o tamanho do seu vetor de reais:");
    scanf("%i",&tamanho);
    
    //alocando espaço
    float * reais=(float*) malloc(tamanho*sizeof(float));
    
    //leitura dos numeros
    for(i=0;i<tamanho;i++)
    {   
        printf("Digite o %i numero:",i+1);
        scanf("%f",& reais[i]);
    }
    
    //para achar o menor numero em um vetor
    auxiliarmenor=reais[0];
    for(i=0;i<tamanho;i++)
    {   //Testando um por um vendo se é menor que o atual
        if(auxiliarmenor>reais[i])
        {   //se for o atual é subtituido
            auxiliarmenor=reais[i];
            imenor=i;
        }
    }
    
    //para achar o maior numero do vetor
    auxiliarmaior=reais[0];
    for(i=0;i<tamanho;i++)
    {   //Testando um por um vendo se é maior que o atual
        if(auxiliarmaior<reais[i])
        {
            auxiliarmaior=reais[i];
            imaior=i;
        }
    }
    
    //exibindo resultado
    printf("-O %iº número:%f\té o menor numero do vetor.\n",imenor+1,auxiliarmenor);
    printf("-O %iº número:%f\té o maior numero do vetor.",imaior+1,auxiliarmaior);
    //liberando 
    free(reais);
    return SUCESSO;
}