//Bibliotecas
#include <stdio.h>
#include <string.h>

//Definições 
#define SUCESSO 0
#define TAMANHOMAX (999+1)
//Inicio do programa
int main(int argc, char ** argv)
{
    //variaveis
    char string[TAMANHOMAX];
    //leitura da string
    printf("Digite sua string:");
    fgets(string,TAMANHOMAX,stdin);
    //enquanto for menor que tamanho
    for(int i=0;i<=strlen(string);i++)
    {
        //sempre que encontrar ' ' pule
        if(string[i]==' ')
        {
            continue;
        }
        //se não, imprime
        else
        {
           printf("%c",string[i]);
        }
    }
    return SUCESSO;
}