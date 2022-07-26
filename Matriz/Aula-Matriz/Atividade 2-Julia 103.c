//bibliotecas
#include <stdio.h>

//constantes
#define TAMANHOMAX 1000
#define SUCESSO 0

float LeSomaMatriz()
{   //variaveis
    float valores[TAMANHOMAX][TAMANHOMAX],somamatriz;
    int Ncolunas,Nlinhas,i,j;
    
    
    //Lendo tamanho da matriz de reais
    printf("Digite um tamanho para uma matriz de numeros reais.\n");
    printf("Quantidade de linhas:");
    scanf("%i",&Nlinhas);
    printf("Quantidade de colunas:");
    scanf("%i",&Ncolunas);
    printf("Digite um conjunto de numeros reais:\n");
    for(i=0;i<Nlinhas;i++)
    {   
        for(j=0;j<Ncolunas;j++)
        {
            printf("Coluna %i - Linha %i\n número:",j+1,i+1);
            scanf("%f",&valores[i][j]);
            somamatriz+=valores[i][j]*1.00f;
            
        }
    }
    
    return somamatriz;
    
}
//Inicio do Programa
   int main(int argc , char ** argv)
{
    //Invocando funcao que imprime a transposta
    LeSomaMatriz();
    
    return SUCESSO;
}