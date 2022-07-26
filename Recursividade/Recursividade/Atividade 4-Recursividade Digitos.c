#include <stdio.h>
int ContaNumerodedigitosinteiro(int num,int x,int conta)
{
    if(num >=x)
    { 
        conta=conta+1;
        ContaNumerodedigitosinteiro(num,x*10,conta);
    }
    else
    {
	conta = conta;
	x=x;
        return conta;
    }
}
int main()
{
    int x=1, conta=0, num;

    
    printf("Digite seu numero");
    scanf("%i",& num);
    printf("Número de digitos:%i",ContaNumerodedigitosinteiro(num,x,conta));
    
}