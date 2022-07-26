//Bibliotecas
#include <stdio.h>

//Definições
#define SUCESSO 0
//Funções
int fibonacci (int num)
 {
    if(num==1)
    {
        return 0;
    }
    if(num==2||num==3)
    {
        return 1;
    }
    if(num==0)
    {
        return 0;
    }
     else
     {
    return fibonacci(num-1) + fibonacci(num-2);
    }

}
//Programa
int main (int argc, char ** argv)
{   int n;
    
    
    printf("Digite um valor POSITIVO:");
    scanf("%i",&n);
    printf("fibonacci :%i",fibonacci(n));
    return SUCESSO;
}