//bibliotecas
#include <stdio.h>
//definindo 
#define SUCESSO 0
#define tamanho 20
//inicio do programa
int main(int argc, char** argv)
{
    //variaveis
    int i,valoresintei[tamanho], menor;
    //Lendo os 20 valores
    printf("\n Digite 20 valores \n");
    for(i=0;i<tamanho;i++)
    {
        printf("%dº numero:",i+1);
        scanf("%d",&valoresintei[i]);
            
    }
    //Definindo a primeira posicao como menor
    menor=valoresintei[0];
        for(i=0;i<tamanho;i++)
        {
            //se o atual for o menor numero ocorre uma substituição
            if(valoresintei[i]<menor)
            {
                menor=valoresintei[i];
            }
            
        }
        //resultado
        printf("O menor valor do conjunto é %i",menor);
    return SUCESSO;
}
