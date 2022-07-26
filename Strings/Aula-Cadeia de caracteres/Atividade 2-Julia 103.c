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
    int contador=0;
    char string[TAMANHOMAX];
    //leitura da string
    printf("Digite sua string:");
    fgets(string,TAMANHOMAX,stdin);
    //enquanto for menor que tamanho
    for(int i=0;i<=strlen(string);i++)
    {
        //sempre que encontrar uma vogal ela sera contada
        if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u')
        {
            contador++;
        }
    }
     printf("A STRING:\n %s Possui %i vogais",string,contador);
    return SUCESSO;
}
