//bibliotecas
#include <stdio.h>
//Constantes
#define SUCESSO 0
#define TAMANHOMAX 10000
//Inicio
int main(int argc, char** argv)
{
    //variaveis
    float media,somamedia=0.0;
    int tamanho,i,num[TAMANHOMAX];
    //descobrindo o tamanho desejado
    printf("Digite uma quantidade de numeros para um conjunto de inteiros: ");
    scanf("%i",&tamanho);
    //lendo numeros do vetor de tamamanho desejado
    for(i=0;i<tamanho;i++){
    printf("Digite o %iº numero:",i+1);
    scanf("%i",&num[i]);
    //somando valores do vetor
    somamedia+=num[i];
    }
    //calculo da media
    media=somamedia/tamanho;
    printf("media: %f", media);
    
    return SUCESSO;
}