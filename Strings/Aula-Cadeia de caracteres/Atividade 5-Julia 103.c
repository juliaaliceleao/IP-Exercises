//Bibliotecas
#include <stdio.h>
#include <string.h>

//Definições 
#define SUCESSO 0
#define TAMANHOMAX (100+1)
//Inicio do programa
int main(int argc, char ** argv)
{
    //variaveis
    char string[TAMANHOMAX];
    int j,contador=0;
    
    //leitura da string
    printf("Digite sua string:");
    fgets(string,TAMANHOMAX,stdin);
    //leu string + \0  ex.ana\0
    //j igual ao tamanho sem \0  ex.3
    j=strlen(string)-1;
    //para i=0 3 maior ou igual a 0
    for(int i=0;j>=0;i++)
    {
     if   (string[i]==string[j-1])
        {
            contador++;
        }
        else { 
            break;
        }
        //andando uma posição para tras
        j--;
    }
    
    //se for um palindromo.
    //contador:o numero de vezes que acho uma letra igual
    //strlen:quantidade de caracteres na string menos o\0
    if (contador==strlen(string)-1)
    {
    printf("a palavra %s é um palindromo",string);
    }
    //se não for um palindromo
    else
    {
        printf("a palavra %s não é palindromo",string);
    }
    return SUCESSO;
}