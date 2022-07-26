//Bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Definições 
#define SUCESSO 0
//Inicio do programa
int main(int argc, char ** argv)
{  
    //Variaveis
    int nlojas,nprodutos;
    int i=0,j=0,menorloja,menorlojaindice;
    int**matriz;
    int * somaplojas;
    int* somaprodutos;
    
    //leitura do numero de lojas e numero de produtos
    printf("Digite o numero de lojas:");
    scanf("%i",&nlojas);
    printf("Digite a variedades de produtos das lojas:");
    scanf("%i",&nprodutos);

    //alocando nlojas
    matriz=(int**)malloc(nlojas*sizeof(int*));
    //alocando nprodutos
    
    for(i=0;i<nlojas;i++)
    {
        matriz[i]=(int*)malloc(nprodutos*sizeof(int));
        
    }
    //alocando vetor que guarda soma das lojas
    somaplojas=(int*)malloc(nlojas*sizeof(int));
    //alocando vetor que guarda soma dos produtos
    somaprodutos=(int*)malloc(nprodutos*sizeof(int));
    //lendo numero de produtos-linhas
    for(i=0;i<nlojas;i++)
    {
        printf("\tLoja %i\t\n",i+1);
        for(j=0;j<nprodutos;j++)
        {
            printf("Produto %i:\n",j+1);
            scanf("%i",&matriz[i][j]);
            somaplojas[i]+=matriz[i][j];
        }
    }
    //tabela
    //lendo numero de produtos-linhas
    printf("\tTotal de Produtos\t\n");
    for(i=0;i<nprodutos;i++)
    {   
        for(j=0;j<nlojas;j++){
            somaprodutos[i]+=matriz[j][i];
        }
        printf("\tProduto %i:quantidade %i\n",i+1,somaprodutos[i]);
    }
    

    //Loja com menor quantidade de produtos
    menorloja=somaplojas[0];
    menorlojaindice=0;
    for(i=0;i<nlojas;i++)
    {
        if(menorloja>somaplojas[i])
        {
            menorloja=somaplojas[i];
            menorlojaindice=i;
        }
    }
    //imprimindo a loja com a menor quantidade de produtos
    printf("\nA loja %i possui a menor quantidade de produtos:%i",menorlojaindice+1,menorloja);
    
    //liberando espaço das colunas e linhas
    for(i=0;i<nlojas;i++)
    {
        free(matriz[i]);
    }
    free(matriz);
    
    return SUCESSO;
}