
//Bibliotecas
#include <stdio.h>

//Definições
#define SUCESSO 0

//Funções
int AchaIgual (int num,int* vetor,int tamanho,int i,int conta)
{ 
    if(i<tamanho)
    {
    if(num==vetor[i])
    {
        conta = conta +1;
        i+=1;
        AchaIgual(num,vetor,tamanho,i,conta);
    }
    else {
        i=i+1;
        AchaIgual(num,vetor,tamanho,i,conta);
    }
    }
    else
    {
        return conta;
    }
}

//Programa
int main (int argc, char ** argv)
{
    int tamanho = 6;
    int num;
    int vetor[] = {2,2,2,2,3,4};
    printf("Digite um numero para saber o numero de vezes que ele aparece no vetor:");
    scanf("%i",&num);
    
    int igual = AchaIgual(num,vetor,tamanho,0,0);
    
    printf("O Número aparece no vetor:%i vezes",igual);
    
    return SUCESSO;
}