#include <stdio.h>
#define SUCESSO 0
void ImprimeIntervalo(int a, int b,int i)
{
    if (a>b)
    {
        printf("Erro!");
    }
    if(a==b)
    {
        if(i==b){
        printf("Intervalo vazio.");
        }
    }
    if(a<b)
    {
         
            printf("%i ",a);
            ImprimeIntervalo(a+1,b,i-1);
    }
    
}
int main(int argc,char ** argv){
    int a, b;
    printf("digite A e B sendo A<B");
    printf("digite A:");
    scanf("%i",& a);
    printf("digite B:");
    scanf("%i",& b);
    int i=b-1;
    ImprimeIntervalo(a+1,b,i);
    return SUCESSO;
}