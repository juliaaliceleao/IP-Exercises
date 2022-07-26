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
    int i,contador=0;
    
    //leitura da string
    printf("Digite umas string cuja as primeiras letras da palavras são minusculas:");
    fgets(string,TAMANHOMAX,stdin);
    //para i=0  subtrair 32
    string[0]-=32;
    for(i=0;i<strlen(string);i++)
    if(string[i]==' '){
        string[i+1]-=32;
    }
    
    printf("string: %s",string);

    return SUCESSO;
}