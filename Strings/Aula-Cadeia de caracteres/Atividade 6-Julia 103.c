//Bibliotecas
#include <stdio.h>
#include <string.h>
void ImprimePalindroma(int d, int contador)
{
    if (contador==d)
    {
        printf("\na frase é palindroma\n");
    }
    //se não for um palindromo
    else
    {
        printf("\na frase é palindroma\n");
    }
}
//Definições 

#define TAMANHOMAX (999+1)
//Inicio do programa
int main(int argc, char ** argv)
{
    //variaveis
    char string[TAMANHOMAX];
    char stringmod[TAMANHOMAX];
    int j=0,i=0,contador=0;
    
    //leitura da string
    printf("Digite sua string e verifique se ela é palindroma:");
    fgets(string,TAMANHOMAX,stdin);
    int d=strlen(stringmod)-3;//3
    int pos=d;
    //para i=0 3 maior ou igual a 0
    for(int i=0;pos>=0;i++)
    {
        if   (stringmod[i]==stringmod[pos])
        {
            contador++;
        }
        else 
        { 
            break;
        }
        //andando uma posição para tras
        pos--;
    }
    ImprimePalindroma(d,contador);
    
    return;
}
    
    