//bibliotecas
#include <stdio.h>

//constantes
#define Nlinhas 5
#define Ncolunas 5
#define SUCESSO 0

void ImprimeTransposta(float valores[Nlinhas][Ncolunas])
{
    //variaveis da funcao
    int i,j;
    printf("Transposta:\n");
    for(i=0;i<Nlinhas;i++)
    {
        for(j=0;j<Ncolunas;j++)
        {
            printf("%f\t", valores[j][i]);
        }
        
        printf("\n");
    }
    return;

}
//Inicio do programa
int main(int argc , char ** argv)
{
    //Variaveis
    float valores[Nlinhas][Ncolunas];
    int i,j;
    //Lendo transposta
    printf("Digite um conjunto de numeros com 5 colunas e 5 linhas e calcule a sua transposta\n");
    for(i=0;i<Nlinhas;i++)
    {
        for(j=0;j<Ncolunas;j++)
        {
            printf("Coluna %i - Linha %i\n número:",j+1,i+1);
            scanf("%f",& valores[i][j]);
        }
    }
    //Exibindo conjunto digitado
        printf("Conjunto digitado:\n");
    for(i=0;i<Nlinhas;i++)
    {
        for(j=0;j<Ncolunas;j++)
        {
            printf("%f\t",valores[i][j]);
        }
         printf("\n");
    }  
   
    //Invocando funcao que imprime a transposta
    ImprimeTransposta(valores);
    
    return SUCESSO;
}
