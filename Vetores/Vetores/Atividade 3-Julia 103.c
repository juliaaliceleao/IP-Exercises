//bibliotecas
#include <stdio.h>
//Constantes
#define SUCESSO 0
#define tamanho 10

int main(int argc, char** argv)
{
    float valores1[tamanho],valores2[tamanho],prod_escalar=0.0f;
    int i;
    //lendo primeiro vetor
    printf("Calcule o produto escalar de dois vetores.");
    printf("\n-Digite um vetor de 10 valores:\n");
    for(i=0;i<tamanho;i++)
    {
        printf("%dº número:",i+1);
        scanf("%f",&valores1[i]);
    }
    //lendo segundo vetor 
    printf("Digite um segundo vetor de 10 valores:\n");
    for(i=0;i<tamanho;i++)
    {
        printf("Digite o %iº número:",i+1);
        scanf("%f",&valores2[i]);
        prod_escalar+=valores1[i]*valores2[i];
       
    }
    printf("\nEscalares \nex.num[1] X num[1]");
    for(i=0;i<tamanho;i++)
    {
        printf("\nPosições[%d]:%f",i+1,valores1[i]*valores2[i]);
    }
    printf("\nRESULTADO DO PRODUTO ESCALAR=%f",prod_escalar);
    return SUCESSO;
}