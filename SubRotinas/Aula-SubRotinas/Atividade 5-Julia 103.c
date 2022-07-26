#include <stdio.h>
#define SUCESSO 0
int CalculaFatorial(int num)
{
    int i,fat=1;
    for(i=num;i!=0;i--){
    printf("%i",i);
        if(i!=1){
        printf(" X ");
    }
    fat=fat*i;
    }
return fat;
}
int main(){
    int X, fat;
    printf("Digite um número:");
    scanf("%i",&X);
    printf("=%i",CalculaFatorial(X));  
    
    
    return SUCESSO;
}
