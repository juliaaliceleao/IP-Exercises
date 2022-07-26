//Bibliotecas
#include <stdio.h>

//Definições
#define SUCESSO 0

//Funções
int SomaVetor (int* vetor,int tamanho,int i,int soma)
{ 
    if(i<tamanho)
    {
        soma = soma + vetor[i];
        SomaVetor(vetor,tamanho, i+1,soma);
    }
    else
    {
        return soma;
    }
}
float Calculamedia(int* vetor,int tamanho,float media,float soma,int i)
{ 
    if(i<tamanho)
    {
        
        soma = soma + vetor[i];
        i=i+1;
        Calculamedia(vetor,tamanho,media,soma,i);
    }
    if(i==tamanho)
    {
    media = soma/tamanho *1.0f;
        return media;
    }
}

//Funcao que descobre soma do vetor
//Funcao que descobre o maior valor do vetor
 int DescobreoMaior (int* vetor, int tamanho,int maior,int i)
{
    if(i < tamanho)
    {
        if (maior < vetor[i])
        {
            maior = vetor[i];
            i = i + 1;
            DescobreoMaior (vetor,tamanho,maior,i);
        }
        
        if (maior >= vetor[i])
        {
            i = i + 1;
        DescobreoMaior (vetor,tamanho,maior,i);
        }
        
    }
    else
    {
        
    return maior;
}

    
}

//Programa
int main (int argc, char ** argv)
{
    int tamanho = 6;
    int vetor[6] = {0,10,2,2,300,11};
    float media=0;
    
    int ResMaior = DescobreoMaior(vetor,tamanho,0,0);
    printf("O maior Número do vetor:%i  ",ResMaior);
    int ResSoma = SomaVetor(vetor,tamanho,0,0);
    printf("A soma do vetor:%i  ",ResSoma);
    printf("A média do vetor é:%f",Calculamedia(vetor,tamanho,media,0,0));
    return SUCESSO;
}