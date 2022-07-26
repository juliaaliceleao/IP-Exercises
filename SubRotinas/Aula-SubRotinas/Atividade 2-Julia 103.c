#define SUCESSO 0
#include <stdio.h>

void IdadeEmDias(void)
{
    int anos,meses,dias,idade;    
    printf("Preencha as informações abaixo\n");
    printf("Digite sua idade:");
    scanf("%d",&anos);
    printf("Digite seu meses de vida:");
    scanf("%d",&meses);
    printf("Digite seus dias de vida:");
    scanf("%d",&dias);
    idade=anos*365+meses*30+dias;
    printf("Idade em dias: %i",idade);

}
int main(int argc, char ** argv){
    
    IdadeEmDias();
    return SUCESSO;
}