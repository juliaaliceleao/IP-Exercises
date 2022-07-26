#define SUCESSO 0
#include <stdio.h>

float calculosoma(float num1, float num2)
{
    return num1 + num2;

}
float calculoproduto(float num1, float num2)
{
    return num1 * num2;

}
float calculoquo(float num1, float num2)
{
    return num1 / num2;
}


int main (int argc, char ** argv)
{
    float num1, num2;
    int opcao;
    float result1,result2,result3;
    printf("Digite dois numeros\n");
    printf("primeiro numero:\n");
    scanf("%f",&num1);
    printf("segundo numero:\n");
    scanf("%f",&num2);
    printf("Escolha uma opcao de calculo para 2 numeros\n \t 1-Soma\n \t2-Produto\n \t3-Quociente\n \t4-Sair\n");
    printf("opcao:");
    scanf("%d",&opcao);
    if (opcao==1)
    {
        result1=calculosoma(num1,num2);
        printf("%f + %f = %f",num1, num2, result1);
    }
    if (opcao==2)
    {
    result2=calculoproduto(num1,num2);
    printf("%f X %f = %f",num1, num2, result2);
    }
    if (opcao==3)
    {
    result3=calculoquo(num1,num2);
    printf("%f / %f = %f",num1, num2, result3);
    }
    if (opcao==4){
        printf("O programa se encerrou");
}
return SUCESSO;
}