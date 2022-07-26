#include <stdio.h>
#define SUCESSO 0
#define VERDADEIRO 1
#define FALSO 2
int VerificaPrimo(int num)
{
    int i,fat,resultado=0;
    for(i=2;num>i;i++)
    {
        if(num!=2)
            {
                if(num%i==0)
                {
                resultado=0;
                printf("%i não é primo",num);
                return FALSO;
                }
                else
                {
                resultado+=1;
                continue;
                }
            }
        fat=fat*i;
    }
    if(resultado=!0)
    {
    printf("%i é primo",num);
    return VERDADEIRO;
    
    }
return fat;
}
int main(){
    int X;
    printf("Digite um número:");
    scanf("%i",&X);
    VerificaPrimo(X);  
    
    
    return SUCESSO;
}
