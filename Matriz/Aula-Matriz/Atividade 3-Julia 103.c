//bibliotecas
#include <stdio.h>

//constantes
#define SUCESSO 0
#define tamanho 5
#define Nlinhas 5
#define Ncolunas 5


//Procedimento
void VetorXMatriz(float vet[tamanho], float valores[Nlinhas][Ncolunas])
{   
    //variaveis
    int i, j;
    printf("Vetor X Matriz \n");
    for(i=0;i<Nlinhas;i++)
    {   
        for(j=0;j<Ncolunas;j++)
        {
    //multiplicando valores do vetor por valores da matriz
    
            printf("%f X %f = %f\t \n",vet[i],valores[i][j],vet[i] * valores[i][j]);
        }
        
    }
    
}
//Inicio do Programa
   int main(int argc , char ** argv)
{
    //variaveis 
    float vet[tamanho];
    float valores[Nlinhas][Ncolunas];
    int i,j;
    
    //Lendo vetor de 5 elementos
    printf("Digite um vetor de 5 elementos\n");
    for(i=0;i<tamanho;i++)
    {
        printf("numero %d:",i+1);
        scanf("%f",&vet[i]);
    } 
    //lendo matriz quadrada de dimensao 5 
    printf("Digite 25 números para uma matriz quadrada:\n");
    
    for(i=0;i<Nlinhas;i++)
    {   
        for(j=0;j<Ncolunas;j++)
        {
            printf("Linha: %i Numero %i :",i+1,j+1);
            scanf("%f",&valores[i][j]);
        }
    }
    
    //Invocando procedimento 
    VetorXMatriz(vet,valores);
    
    return SUCESSO;
}