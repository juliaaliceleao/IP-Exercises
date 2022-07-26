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
    int tamanho, contador=0;
    char string[TAMANHOMAX];
    //leitura da string
    printf("Digite sua string:");
    fgets(string,TAMANHOMAX,stdin);
    tamanho=strlen(string);
    for(int i=0;i<=tamanho;i++)
    {
        //sempre que encontrar ' ' conte
        if(string[i]==' ')
        {
            contador++;
        }
    }
    printf("%s",string);
    
    printf("Sua string:%s  possui %i espaços em branco",string,contador);
    return SUCESSO;
}
