#include <stdio.h>
//definicoes 
#define tamanho 1000
#define SUCESSO 0
#define NULO NULL
#define Erro 1
//funcao conta numero de carracteres exceto espaço e \n
int ContaNumDeLetras(FILE *arquivotxt)
{
    //variaveis da funcao
    int NumChar=0;
    char charx;
    char arquivousuario[tamanho];

    printf("Digite o nome do arquivo");
    scanf("%s",arquivousuario);
    arquivotxt = fopen(arquivousuario,"r");
    
    //caso tenha erro ao abrir
    if(arquivotxt==NULO)
    {
        printf("Erro! Arquivo não aberto");
        return Erro;
    }
    //caso abrir com sucesso
    else
    {
        //enquanto nao chega ao final do arquivo
        while(!feof(arquivotxt))
        {
            
            fscanf(arquivotxt,"%c",&charx);
            if(charx==' '||charx=='\n')
            {   
            continue;
            }
            else
            {
            NumChar++;
            }
        }
    }
    fclose(arquivotxt);
    return NumChar;
}
//inico do programa
int main(int argc, char ** argv)
{
    //variaveis
    int funcao;
    FILE * arquivotxt;
    //chamada da funcao e exibicao do resultado
    printf("Num. de caracteres(exceto espacos e quebras de linha):%i",ContaNumDeLetras(arquivotxt)-1);
    return SUCESSO;
}