#define SUCESSO 0
#include <stdio.h>

void ConverteSegundos(void)
{
    int duracaototalseg;
    int duracaoh, duracaomin1,duracaoseg, duracaomin2;
    printf("Digite a quantidade de Segundos:\n");
    scanf("%i",&duracaototalseg);

   
    duracaoseg=duracaototalseg % 60;
    duracaomin1=duracaototalseg/60;
    duracaoh=duracaomin1/60;
    duracaomin2=duracaomin1%60;
    printf("%i Hora(s)\n %iMinuto(s)\n %iSegundo(s)\n",duracaoh, duracaomin2, duracaoseg);
}
int main(int argc, char ** argv){
    ConverteSegundos();
return SUCESSO;
}