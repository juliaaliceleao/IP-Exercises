//bibliotecas
#include <stdio.h>

//constantes
#define SUCESSO 0
#define Nprodutos 5
#define Nlojas 7

//Procedimento
int main (int argc , char ** argv)
{
    //variaveis
    int i,j,ind=0,somasoma;
    int QuantidadeLoja[Nlojas][Nprodutos],soma[Nprodutos],soma2[Nlojas];

    //LENDO PRODUTOS
    //ler quantidade de cada um dos sete produtos em cada uma das lojas
    //loja por loja
    for(i=0;i<Nlojas;i++)
    {
        printf("\tLoja %i\n",i+1);
        for(j=0;j<Nprodutos;j++)
        {
            printf("Produto %d\nQuantidade:",j+1);
            scanf("%d",& QuantidadeLoja[i][j]);
            
        }
    }
    //TABELA COM QUANTIDADE TOTAL DE CADA PRODUTO
    printf("\tLoja\tQuantidadeTotal\n");
    //soma [loja]+=quantidadeloja[loja][produto]
    for(j=0;j<Nlojas;j++)
    {
        for(i=0;i<Nprodutos;i++)
        {
        soma[j]+=QuantidadeLoja[j][i];
        }
        printf("\t%i\t%d\n",j+1,soma[j]);
    }
    //LOJA COM MENOR QUANTIDADE DE PRODUTOS
    //soma quantidade[loja]+=quantidade[loja][produto]
    somasoma=soma[0];
    for(i=0;i<Nlojas;i++)
    {
        if(soma[i]<somasoma)
        {
            somasoma=soma[i];
            ind=i;
        }
        
        
    }
    printf("A loja %i tem menor quantidade de produtos.\n total:%i",ind+1,somasoma);
}