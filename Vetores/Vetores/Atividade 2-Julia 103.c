//bibliotecas
#include <stdio.h>
//definindo 
#define SUCESSO 0
#define tamanhomax 10
int main(int argc, char** argv)
{
    //variaveis
    float escalar,valoresreais[tamanhomax];
    int i,tamanho;
    //lendo o vetor
    printf("\n Digite um tamanho desejado para um vetor de números reais:\n");
    scanf("%i",& tamanho);
    for(i=0;i<tamanho;i++){
    printf("%dº número:",i+1);
    scanf("%f",&valoresreais[i]);
    }
    //lendo o escalar
    printf("Digite um escalar pra multiplicar pelos numeros do vetor:\n");
    printf("Escalar:");
    scanf("%f",&escalar);
    //resultado do vetor vezes o escalar
    for(i=0;i<tamanho;i++){
    printf("Escalar Posição%iº =\t %f X %f = %f\n",i+1,valoresreais[i],escalar,escalar*valoresreais[i]);
    }
    
    return SUCESSO;
}