//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//==LISTA 1=====================================
//Atividade1------------------------------------
//definicoes 
#define saidax 4
#define produtox 2
#define somax 1
#define quocientex 3

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
void lista1atividade1(void)
{
    float num1, num2;
    int opcao;
    float result1,result2,result3;
    printf("Digite dois numeros\n");
    printf("primeiro numero:\n");
    scanf("%f",&num1);
    printf("segundo numero:\n");
    scanf("%f",&num2);
    do{
    printf("Escolha uma opcao de calculo para 2 numeros\n \t 1-Soma\n \t2-Produto\n \t3-Quociente\n \t4-Sair\n");
    printf("opcao:");
    scanf("%d",&opcao);
    if (opcao==somax)
    {
        result1=calculosoma(num1,num2);
        printf("%f + %f = %f\n",num1, num2, result1);
    }
    if (opcao==produtox)
    {
    result2=calculoproduto(num1,num2);
    printf("%f X %f = %f\n",num1, num2, result2);
    }
    if (opcao==quocientex)
    {
    result3=calculoquo(num1,num2);
    printf("%f / %f = %f\n",num1, num2, result3);
    }
    }while(opcao!=saidax);
    if (opcao==saidax){
        printf("O programa se encerrou");
}
return;
}
//Atividade2-------------------------------------
int IdadeEmDias(int anos, int dias,int meses)
{   int idade;
    
    return idade=anos*365+meses*30+dias;
}
void lista1atividade2(void)
{   int anos,meses,dias;    
    printf("Preencha as informações abaixo\n");
    printf("Digite sua idade:");
    scanf("%d",&anos);
    printf("Digite seu meses de vida:");
    scanf("%d",&meses);
    printf("Digite seus dias de vida:");
    scanf("%d",&dias);
    printf("Dias de vida: %i",IdadeEmDias(anos,dias,meses));
    return;
}
//Atividade 3------------------------------------
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
void lista1atividade3(void){
    ConverteSegundos();
return;
}
//Atividade 4-------------------------------------
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
void lista1atividade4(void)
{
    int X;
    printf("Digite um número:");
    scanf("%i",&X);
    VerificaPrimo(X);  
    return;
}
//Atividade 5-------------------------------------
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
void lista1atividade5(void){
    int X, fat;
    printf("Digite um número:");
    scanf("%i",&X);
    printf("=%i",CalculaFatorial(X));  
    return;
}
//========LISTA2===========
//Atividade1------------------------------
//bibliotecas
//definindo
#define tamanhox 20
//inicio do programa
void lista2atividade1(void)
{
    //variaveis
    int i,valoresintei[tamanhox], menor;
    //Lendo os 20 valores
    printf("\n Digite 20 valores \n");
    for(i=0;i<tamanhox;i++)
    {
        printf("%dº numero:",i+1);
        scanf("%d",&valoresintei[i]);
            
    }
    //Definindo a primeira posicao como menor
    menor=valoresintei[0];
        for(i=0;i<tamanhox;i++)
        {
            //se o atual for o menor numero ocorre uma substituição
            if(valoresintei[i]<menor)
            {
                menor=valoresintei[i];
            }
            
        }
        //resultado
        printf("O menor valor do conjunto é %i",menor);
    return;
}

//Atividade2------------------------------
//definindo 
#define tamanhomax 10
void lista2atividade2(void){
    //variaveis
    float escalar,valoresreais[tamanhomax];
    int i,tamanho;
    //lendo o vetor
    printf("\n Digite um tamanho desejado para um vetor de números reais:\n");
    scanf("%i",& tamanho);
    for(i=0;i<tamanho;i++){
    printf("%dº número:",i+1);
    scanf("%f",&valoresreais[i]);
    }
    //lendo o escalar
    printf("Digite um escalar pra multiplicar pelos numeros do vetor:\n");
    printf("Escalar:");
    scanf("%f",&escalar);
    //resultado do vetor vezes o escalar
    for(i=0;i<tamanho;i++){
    printf("Escalar Posição%iº =\t %f X %f = %f\n",i+1,valoresreais[i],escalar,escalar*valoresreais[i]);
    }
    
    return;
}    

//Atividade3--------------------
//bibliotecas
#include <stdio.h>
//Constantes
#define tam 10

void lista2atividade3(void)
{
    float valores1[tam],valores2[tam],prod_escalar=0.0f;
    int i;
    //lendo primeiro vetor
    printf("Calcule o produto escalar de dois vetores.");
    printf("\n-Digite um vetor de 10 valores:\n");
    for(i=0;i<tam;i++)
    {
        printf("%dº número:",i+1);
        scanf("%f",&valores1[i]);
    }
    //lendo segundo vetor 
    printf("Digite um segundo vetor de 10 valores:\n");
    for(i=0;i<tam;i++)
    {
        printf("Digite o %iº número:",i+1);
        scanf("%f",&valores2[i]);
        prod_escalar+=valores1[i]*valores2[i];
       
    }
    printf("\nEscalares \nex.num[1] X num[1]");
    for(i=0;i<tam;i++)
    {
        printf("\nPosições[%d]:%f",i+1,valores1[i]*valores2[i]);
    }
    printf("\nRESULTADO DO PRODUTO ESCALAR=%f",prod_escalar);
    return;
}
//Atividade4----------------------
//bibliotecas
#include <stdio.h>
//Constantes
#define TAMANHOMAX 10000
//Inicio
void lista2atividade4(void)
{
    //variaveis
    float media,somamedia=0.0;
    int tamanhos,i,num[TAMANHOMAX];
    //descobrindo o tamanho desejado
    printf("Digite uma quantidade de numeros para um conjunto de inteiros: ");
    scanf("%i",&tamanhos);
    //lendo numeros do vetor de tamamanho desejado
    for(i=0;i<tamanhos;i++){
    printf("Digite o %iº numero:",i+1);
    scanf("%i",&num[i]);
    //somando valores do vetor
    somamedia+=num[i];
    }
    //calculo da media
    media=somamedia/tamanhos;
    printf("media: %f", media);
    
    return;
}
//========LISTA 3===============
//Atividade1------------------------------
//Bibliotecas
#include <stdio.h>
#include <string.h>

//Definições
#define TAMANHOMAXX (999+1)
//Inicio do programa
void lista3atividade1(void)
{
    //variaveis
    int tamanho_, contador=0;
    char string[TAMANHOMAXX];
    //leitura da string
    getchar();
    printf("Digite sua string com espacos:");
    fgets(string,TAMANHOMAXX,stdin);
    tamanho_=strlen(string);
    for(int i=0;i<=tamanho_;i++)
    {
        //sempre que encontrar ' ' conte
        if(string[i]==' ')
        {
            contador++;
        }
    }
    printf("%s",string);
    
    printf("Sua string:%s  possui %i espaços em branco",string,contador);
    return;
}

//Atividade2------------------------------
//Bibliotecas
#include <stdio.h>
#include <string.h>

//Definições
#define TAMANHO_MAX (999+1)
//Inicio do programa
void lista3atividade2(void)
{
    //variaveis
    int contador=0;
    char string[TAMANHO_MAX];
    //leitura da string
    getchar();
    printf("Digite sua string e descobra a quantidade de vogais:");
    fgets(string,TAMANHO_MAX,stdin);
    //enquanto for menor que tamanho
    for(int i=0;i<=strlen(string);i++)
    {
        //sempre que encontrar uma vogal ela sera contada
        if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u')
        {
            contador++;
        }
    }
     printf("A STRING:\n %s Possui %i vogais",string,contador);
    return;
}
//Atividade3-------------------------------
//Bibliotecas
#include <stdio.h>
#include <string.h>

//Definições
#define TAMANHOMAXX (999+1)
//Inicio do programa
void lista3atividade3(void)
{
    //variaveis
    char string[TAMANHOMAXX];
    getchar();
    //leitura da string
    printf("Digite sua string:");
    fgets(string,TAMANHOMAXX,stdin);
    //enquanto for menor que tamanho
    for(int i=0;i<=strlen(string);i++)
    {
        //sempre que encontrar ' ' pule
        if(string[i]==' ')
        {
            continue;
        }
        //se não, imprime
        else
        {
           printf("%c",string[i]);
        }
    }
    return;
}
//Atividade4--------------------------------
//Bibliotecas
#include <stdio.h>
#include <string.h>

//Definições 
#define TAM_MAX (999+1)
//Inicio do programa
void lista3atividade4(void)
{
    //variaveis
    char string[TAM_MAX];
    int i,contador=0;
    getchar();
    //leitura da string
    printf("Digite umas string cuja as primeiras letras da palavras são minusculas:");
    fgets(string,TAM_MAX,stdin);
    //para i=0  subtrair 32
    string[0]-=32;
    for(i=0;i<strlen(string);i++)
    if(string[i]==' '){
        string[i+1]-=32;
    }
    
    printf("string: %s",string);

    return;
}
//Atividade 5-------------------------------------
//Bibliotecas
#include <stdio.h>
#include <string.h>

//Definições
#define TAMM_MAX (100+1)
//Inicio do programa
void lista3atividade5(void)
{
    //variaveis
    char string[TAMANHOMAX];
    int j,contador=0;
    getchar();
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
    return;
}
//Atividade 6-----------
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

#define TAMANHOmaximo (999+1)
//Inicio do programa
void lista3atividade6(void)
{
    //variaveis
    char string[TAMANHOmaximo];
    char stringmod[TAMANHOmaximo];
    int j=0,i=0,contador=0;
    
    //leitura da string
    printf("Digite sua string e verifique se ela é palindroma:");
    fgets(string,TAMANHOmaximo,stdin);
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
//==========LISTA 4===============
//Atividade1------------------------------
//bibliotecas
#include <stdio.h>

//constantes
#define Nlinhas 5
#define Ncolunas 5

void ImprimeTransposta(float valores[Nlinhas][Ncolunas])
{
    //variaveis da funcao
    int i,j;
    printf("Transposta:\n");
    for(i=0;i<Nlinhas;i++)
    {
        for(j=0;j<Ncolunas;j++)
        {
            printf("%f\t", valores[j][i]);
        }
        
        printf("\n");
    }
    return;

}
//Inicio do programa
void lista4atividade1(void)
{
    //Variaveis
    float valores[Nlinhas][Ncolunas];
    int i,j;
    //Lendo transposta
    printf("Digite um conjunto de numeros com 5 colunas e 5 linhas e calcule a sua transposta\n");
    for(i=0;i<Nlinhas;i++)
    {
        for(j=0;j<Ncolunas;j++)
        {
            printf("Coluna %i - Linha %i\n número:",j+1,i+1);
            scanf("%f",& valores[i][j]);
        }
    }
    //Exibindo conjunto digitado
        printf("Conjunto digitado:\n");
    for(i=0;i<Nlinhas;i++)
    {
        for(j=0;j<Ncolunas;j++)
        {
            printf("%f\t",valores[i][j]);
        }
         printf("\n");
    }  
   
    //Invocando funcao que imprime a transposta
    ImprimeTransposta(valores);
    
    return;
}
//Atividade2------------------------------
//bibliotecas
#include <stdio.h>

//constantes
#define TAMANHOmax 1000
float LeSomaMatriz()
{   //variaveis
    float valores[TAMANHOmax][TAMANHOmax],somamatriz;
    int N_colunas,N_linhas,i,j;
    
    
    //Lendo tamanho da matriz de reais
    printf("Digite um tamanho para uma matriz de numeros reais.\n");
    printf("Quantidade de linhas:");
    scanf("%i",&N_linhas);
    printf("Quantidade de colunas:");
    scanf("%i",&N_colunas);
    printf("Digite um conjunto de numeros reais:\n");
    for(i=0;i<N_linhas;i++)
    {   
        for(j=0;j<N_colunas;j++)
        {
            printf("Coluna %i - Linha %i\n número:",j+1,i+1);
            scanf("%f",&valores[i][j]);
            somamatriz+=valores[i][j]*1.00f;
            
        }
    }
    
    return somamatriz;
    
}
//Inicio do Programa
   void lista4atividade2(void)
{
    //Invocando funcao que imprime a transposta
    LeSomaMatriz();
    
    return;
}
//Atividade3------------------------------
//bibliotecas
#include <stdio.h>
//constantes
#define tamanho_ 5
#define Nlinhas 5
#define Ncolunas 5
//Procedimento
void VetorXMatriz(float vet[tamanho_], float valores[Nlinhas][Ncolunas])
{   
    //variaveis
    int i, j;
    printf("Vetor X Matriz \n");
    for(i=0;i<Nlinhas;i++)
    {   
        for(j=0;j<Ncolunas;j++)
        {
    //multiplicando valores do vetor por valores da matriz
    
            printf("%f X %f = %f\t \n",vet[i],valores[i][j],vet[i] * valores[i][j]);
        }
        
    }
    
}
//Inicio do Programa
   void lista4atividade3(void)
{
    //variaveis 
    float vet[tamanho_];
    float valores[Nlinhas][Ncolunas];
    int i,j;
    
    //Lendo vetor de 5 elementos
    printf("Digite um vetor de 5 elementos\n");
    for(i=0;i<tamanho_;i++)
    {
        printf("numero %d:",i+1);
        scanf("%f",&vet[i]);
    } 
    //lendo matriz quadrada de dimensao 5 
    printf("Digite 25 números para uma matriz quadrada:\n");
    
    for(i=0;i<Nlinhas;i++)
    {   
        for(j=0;j<Ncolunas;j++)
        {
            printf("Linha: %i Numero %i :",i+1,j+1);
            scanf("%f",&valores[i][j]);
        }
    }
    
    //Invocando procedimento 
    VetorXMatriz(vet,valores);
    
    return;
}
//Atividade4--------------------------------
//bibliotecas
#include <stdio.h>

//constantes
#define Nprodutos 5
#define Nlojas 7

//Procedimento
void lista4atividade4(void)
{
    //variaveis
    int i,j,ind=0,somasoma;
    int QuantidadeLoja[Nlojas][Nprodutos],soma[Nprodutos],soma2[Nlojas];

    //LENDO PRODUTOS
    //ler quantidade de cada um dos sete produtos em cada uma das lojas
    //loja por loja
    for(i=0;i<Nlojas;i++)
    {
        printf("\tLoja %i\n",i+1);
        for(j=0;j<Nprodutos;j++)
        {
            printf("Produto %d\nQuantidade:",j+1);
            scanf("%d",& QuantidadeLoja[i][j]);
            
        }
    }
    //TABELA COM QUANTIDADE TOTAL DE CADA PRODUTO
    printf("\tLoja\tQuantidadeTotal\n");
    //soma [loja]+=quantidadeloja[loja][produto]
    for(j=0;j<Nlojas;j++)
    {
        for(i=0;i<Nprodutos;i++)
        {
        soma[j]+=QuantidadeLoja[j][i];
        }
        printf("\t%i\t%d\n",j+1,soma[j]);
    }
    //LOJA COM MENOR QUANTIDADE DE PRODUTOS
    //soma quantidade[loja]+=quantidade[loja][produto]
    somasoma=soma[0];
    for(i=0;i<Nlojas;i++)
    {
        if(soma[i]<somasoma)
        {
            somasoma=soma[i];
            ind=i;
        }
    }
    printf("A loja %i tem menor quantidade de produtos.\n total:%i",ind+1,somasoma);
    return;
}
//LISTA 5==========
//Atividade1------------------------------
//Bibliotecas
#include <stdio.h>
#include <stdlib.h>


//funcões
int* AlocaVetor(int tamanho)
{
 return (int*)malloc(tamanho*sizeof(int));
}
//Inicio do programa
void lista5atividade1(void)
{   //Variaveis
    int tamanho;
    int* inteiros;
    
    //leitura do tamanho
    printf("Digite o tamanho do seu vetor de inteiros:");
    scanf("%i",&tamanho);
    
    //alocando espaço
    inteiros=AlocaVetor(tamanho);

    free(inteiros);
    return;
}
//Atividade2------------------------------
//Bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Inicio do programa
void lista5atividade2(void)
{   //Variaveis
    int nlinhas,ncolunas,i=0;
    float**matrizreais;
    
    //leitura do tamanho
    printf("Digite o numero de linhas:");
    scanf("%i",&nlinhas);
    printf("Digite o numero de colunas:");
    scanf("%i",&ncolunas);
    //alocando linha
    matrizreais=(float**)malloc(nlinhas*sizeof(float*));
    
     //alocando colunas
     for(i=0;i<nlinhas;i++)
     {
        matrizreais[i]=(float*)malloc(ncolunas*sizeof(float));
     }
    
    //liberando espaço
    for(i=0;i<nlinhas;i++)
    {
        free(matrizreais[i]);
    }
    free(matrizreais);
    return;
}
//Atividade3------------------------------
//Inicio do programa
 //Bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Inicio do programa
void lista5atividade3(void)
{//Variaveis
    float * reais;
    int tamanho;
    float media=0.0,somamedia=0.0;
    //leitura do tamanho
    printf("Digite o tamanho do seu vetor de reais:");
    scanf("%i",&tamanho);
    //alocando espaço
    reais=(float*) malloc(tamanho*sizeof(float));
    
    for(int i=0;i<tamanho;i++)
    {   //leitura dos numeros
        printf("Digite o %i numero:",i+1);
        scanf("%f",& reais[i]);
        somamedia+=reais[i];
    }
    //media 
    media=somamedia/tamanho;
    //exibindo resultado
    printf("media igual a:%f",media);
    free(reais);
    return;
}
//Atividade4------------------------------
 //Bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Inicio do programa
void lista5atividade4(void)
{   //Variaveis
    int tamanho,imenor=0,imaior=0,i;
    float auxiliarmaior,auxiliarmenor;
    
    //leitura do tamanho
    printf("Digite o tamanho do seu vetor de reais:");
    scanf("%i",&tamanho);
    
    //alocando espaço
    float * reais=(float*) malloc(tamanho*sizeof(float));
    
    //leitura dos numeros
    for(i=0;i<tamanho;i++)
    {   
        printf("Digite o %i numero:",i+1);
        scanf("%f",& reais[i]);
    }
    
    //para achar o menor numero em um vetor
    auxiliarmenor=reais[0];
    for(i=0;i<tamanho;i++)
    {   //Testando um por um vendo se é menor que o atual
        if(auxiliarmenor>reais[i])
        {   //se for o atual é subtituido
            auxiliarmenor=reais[i];
            imenor=i;
        }
    }
    
    //para achar o maior numero do vetor
    auxiliarmaior=reais[0];
    for(i=0;i<tamanho;i++)
    {   //Testando um por um vendo se é maior que o atual
        if(auxiliarmaior<reais[i])
        {
            auxiliarmaior=reais[i];
            imaior=i;
        }
    }
    
    //exibindo resultado
    printf("-O %iº número:%f\té o menor numero do vetor.\n",imenor+1,auxiliarmenor);
    printf("-O %iº número:%f\té o maior numero do vetor.",imaior+1,auxiliarmaior);
    //liberando 
    free(reais);
    return;
}
//Atividade5------------------------------
//Bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Inicio do programa
void lista5atividade5(void)
{   //Variaveis
    int nlinhas,ncolunas,i=0,j=0;
    float**matrizreais,soma=0.0f;
    
    //leitura do tamanho
    printf("Digite o numero de linhas:");
    scanf("%i",&nlinhas);
    printf("Digite o numero de colunas:");
    scanf("%i",&ncolunas);
    //alocando linha
    matrizreais=(float**)malloc(nlinhas*sizeof(float*));
    
     //alocando colunas
     for(i=0;i<nlinhas;i++)
     {
        matrizreais[i]=(float*)malloc(ncolunas*sizeof(float));
     }
    //lendo elementos da matriz
    printf("Digite os elementos da matriz\n");
    for(i=0;i<nlinhas;i++)
     {
        printf("\tLINHA %i\t\n",i+1);
        for(j=0;j<ncolunas;j++)
        {
            printf("COLUNA %i:",j+1);
            scanf("%f",&matrizreais[i][j]);
        }
     }
     
    //somando elementos da matriz
    for(i=0;i<nlinhas;i++)
     {
        for(j=0;j<ncolunas;j++){
        soma+=matrizreais[i][j];
        }
     }
     printf("Soma dos numeros reais: %f",soma);
    //liberando espaço
    for(i=0;i<nlinhas;i++)
    {
        free(matrizreais[i]);
    }
    free(matrizreais);
    return;
}
//Atividade6------------------------------
//Bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Inicio do programa
void lista5atividade6(void)
{  
    //Variaveis
    int nlojas,nprodutos;
    int i=0,j=0,menorloja,menorlojaindice;
    int**matriz;
    int * somaplojas;
    int* somaprodutos;
    
    //leitura do numero de lojas e numero de produtos
    printf("Digite o numero de lojas:");
    scanf("%i",&nlojas);
    printf("Digite a variedades de produtos das lojas:");
    scanf("%i",&nprodutos);

    //alocando nlojas
    matriz=(int**)malloc(nlojas*sizeof(int*));
    //alocando nprodutos
    
    for(i=0;i<nlojas;i++)
    {
        matriz[i]=(int*)malloc(nprodutos*sizeof(int));
        
    }
    //alocando vetor que guarda soma das lojas
    somaplojas=(int*)malloc(nlojas*sizeof(int));
    //alocando vetor que guarda soma dos produtos
    somaprodutos=(int*)malloc(nprodutos*sizeof(int));
    //lendo numero de produtos-linhas
    for(i=0;i<nlojas;i++)
    {
        printf("\tLoja %i\t\n",i+1);
        for(j=0;j<nprodutos;j++)
        {
            printf("Produto %i:\n",j+1);
            scanf("%i",&matriz[i][j]);
            somaplojas[i]+=matriz[i][j];
        }
    }
    //tabela
    //lendo numero de produtos-linhas
    printf("\tTotal de Produtos\t\n");
    for(i=0;i<nprodutos;i++)
    {   
        for(j=0;j<nlojas;j++){
            somaprodutos[i]+=matriz[j][i];
        }
        printf("\tProduto %i:quantidade %i\n",i+1,somaprodutos[i]);
    }
    

    //Loja com menor quantidade de produtos
    menorloja=somaplojas[0];
    menorlojaindice=0;
    for(i=0;i<nlojas;i++)
    {
        if(menorloja>somaplojas[i])
        {
            menorloja=somaplojas[i];
            menorlojaindice=i;
        }
    }
    //imprimindo a loja com a menor quantidade de produtos
    printf("\nA loja %i possui a menor quantidade de produtos:%i",menorlojaindice+1,menorloja);
    
    //liberando espaço das colunas e linhas
    for(i=0;i<nlojas;i++)
    {
        free(matriz[i]);
    }
    free(matriz);
    
    return;
}
//LISTA 6=============
#define TAMANHOMAXs 49+1
#define numNotas 3
#define Media 60
//Atividade1------------------------------
//bibliotecas
#include <stdio.h>
#include <stdlib.h>
//constantes 
//Struct
typedef struct DadosAluno{
    //campos  
    char nome[TAMANHOMAXs];
    char curso[TAMANHOMAXs];
    int idade;
    float Notas[numNotas];
    float somanotaspAluno;
    float MediaAluno;
    }DadosAluno;

 void lista6atividade1(void)
 {  //variaveis
    DadosAluno a1;
    getchar();
    printf("Digite o nome do aluno:");
    fgets(a1.nome,TAMANHOMAXs,stdin);
    printf("Digite o curso do aluno:");
    fgets(a1.curso,TAMANHOMAXs,stdin);
    printf("Digite a idade do aluno:");
    scanf("%i",&(a1.idade));
    printf("ALUNO(A): %s\n",a1.nome);
    printf("CURSO:%s\n",a1.curso);
    printf("IDADE: %i",a1.idade);
 }
//Atividade 2--------------
//bibliotecas
#include <stdio.h>
#include <stdlib.h>
//
 void lista6atividade2(void)
 {  //variaveis
    DadosAluno a1;
    float somanotas=0.0,medianotas=0.0;
    int i;
    //lendo dados do aluno
    getchar();
    printf("Digite o nome do aluno:");
    fgets(a1.nome,TAMANHOMAXs,stdin);
    printf("Digite o curso do aluno:");  
    fgets(a1.curso,TAMANHOMAXs,stdin);
    printf("Digite a idade do aluno:");
    scanf("%i",&(a1.idade));
    for(int i=0;i<numNotas;i++){ 
    printf("Digite a nota da prova %i:",i+1);
    scanf("%f",&(a1.Notas[i]));
    //soma das notas
    somanotas+=a1.Notas[i];
    }
    //media das notas
    medianotas=somanotas/numNotas;
    //exibindo resultado e dados
    printf("ALUNO(A): %s\n",a1.nome);
    printf("CURSO:%s\n",a1.curso);
    printf("IDADE: %i\n",a1.idade);
    if(medianotas>=Media)
    {
        printf("VOCÊ FOI APROVADO");
    }
    else{
        printf("VOCÊ FOI REPROVADO");
    }
    return;
 }
//Atividade 3--------------
//bibliotecas
#include <stdio.h>
#include <stdlib.h>
void lista6atividade3(void)
 {  //variaveis
    DadosAluno * a1;
    float mediageral=0.0;
    float Somamediageral=0.0f;
    int i,nalunos;
    
    
    //lendo tamanho
    printf("Digite a quantidade de alunos:");
    scanf("%i",&nalunos);
    
    //alocando espaço
    a1=(DadosAluno*)malloc(nalunos*(sizeof(DadosAluno)));
    
    //lendo dados dos alunos
    for(i=0;i<nalunos;i++)
    {
        getchar();
        printf("Digite o nome do aluno:");
        fgets((a1[i].nome),TAMANHOMAXs,stdin);
        printf("Digite o curso do aluno:");  
        fgets((a1[i].curso),TAMANHOMAXs,stdin);
        printf("Digite a idade do aluno:");
        scanf("%i",&(a1[i].idade));
        //notas:prova
        for(int j=0;j<numNotas;j++)
        { 
            printf("Digite a nota da prova %i:",j+1);
            scanf("%f",&(a1[i].Notas[j]));
            //soma das notas
            a1[i].somanotaspAluno+=a1[i].Notas[j];
   
        }
    a1[i].MediaAluno=a1[i].somanotaspAluno/numNotas;
    Somamediageral=+a1[i].MediaAluno;
    
     //exibindo resultado e dados de um alunos
    printf("ALUNO(A): %s\n",a1[i].nome);
    printf("CURSO:%s\n",a1[i].curso);
    printf("IDADE: %i\n",a1[i].idade);
    printf ("Media das notas %f\n",a1[i].MediaAluno);
    
    if(a1[i].MediaAluno>=Media)
    {
        printf("\t%s FOI APROVADO\n",a1[i].nome);
    }
    else
    {
        printf("\t%s FOI REPROVADO\n",a1[i].nome);
    }
    }
    mediageral=Somamediageral/nalunos;
    printf("\n\nmedia da turma: %f",mediageral);
    //libera memoria 
    free(a1);
    return;
 }
 //Atividade4------------------------------
//bibliotecas
#include <stdio.h>
#include <stdlib.h>

//funcao e procedimentos
void OrdenaCrescenteImprime(DadosAluno a1[],int nalunos){
    int aux,i,j;
    for(int i=1;i<nalunos;i++)
    {
        for(int j=nalunos-1;j>=i;j--)
        {
            if(a1[j-1].MediaAluno>a1[j].MediaAluno)
            {
                aux=a1[j-1].MediaAluno;
                a1[j-1].MediaAluno=a1[j].MediaAluno;
                a1[j].MediaAluno=aux;
            }
        }
    }
    //imprimindo a media em ordem crescente
    printf("ORDEM CRESCENTE DE MEDIAS:\n");
    for(int j=0;j<nalunos;j++)
    {
        printf("%i-%f\n",j+1,a1[j].MediaAluno);
    }
    return;
}
//
 void lista6atividade4(void)
 {  //variaveis
    DadosAluno * a1;
    float mediageral=0.0;
    float Somamediageral=0.0f;
    int i,nalunos;
    
    
    //lendo tamanho
    printf("Digite a quantidade de alunos:");
    scanf("%i",&nalunos);
    
    //alocando espaço
    a1=(DadosAluno*)malloc(nalunos*(sizeof(DadosAluno)));
    
    //lendo dados dos alunos
    for(i=0;i<nalunos;i++)
    {
        getchar();
        printf("Digite o nome do aluno:");
        fgets((a1[i].nome),TAMANHOMAXs,stdin);
        printf("Digite o curso do aluno:");  
        fgets((a1[i].curso),TAMANHOMAXs,stdin);
        printf("Digite a idade do aluno:");
        scanf("%i",&(a1[i].idade));
        //notas:prova
        for(int j=0;j<numNotas;j++)
        { 
            printf("Digite a nota da prova %i:",j+1);
            scanf("%f",&(a1[i].Notas[j]));
            //soma das notas
            a1[i].somanotaspAluno+=a1[i].Notas[j];
   
        }
        a1[i].MediaAluno=a1[i].somanotaspAluno/numNotas;
        Somamediageral=+a1[i].MediaAluno;
    
        //exibindo resultado e dados de um alunos
        printf("ALUNO(A): %s\n",a1[i].nome);
        printf("CURSO:%s\n",a1[i].curso);
        printf("IDADE: %i\n",a1[i].idade);
        printf ("Media das notas %f\n",a1[i].MediaAluno);
    
        if(a1[i].MediaAluno>=Media)
        {
            printf("\t%s FOI APROVADO\n",a1[i].nome);
        }
        else
        {
            printf("\t%s FOI REPROVADO\n",a1[i].nome);
        }
    }
    mediageral=Somamediageral/nalunos;
    printf("\n\nmedia da turma: %f\n",mediageral);
    OrdenaCrescenteImprime(a1,nalunos);
    //libera memoria 
    free(a1);
    return;
 }
//-----------------------------------------------------
int main(int argc, char ** argv) 
{
    int listad,exerciciod;
    printf("\tMenu-JULIA\t\n Conteudos Estudados:\n");
    printf("1-Sub-rotinas\n2-Vetores\n3-Cadeia de caracteres\n2-Matriz\n5-Alocacao Dinamica\n6-Struct\n");
    printf("-digite o numero da materia desejada:\n");
    scanf("%i",&listad);
    
    switch(listad)
    {
        case 1:
        {
        printf("Menu Sub-Rotinas\n");
        printf("1-Atividade 1\n2-Atividade 2\n3-Atividade 3\n4-Atividade 4\n5-Atividade 5\n");
        printf("-digite o numero do exercicio desejado:\n");
        scanf("%i",&exerciciod);
        switch(exerciciod)
        {   
            
            case 1:
            {
                lista1atividade1();
                break;    
            }
            case 2:
            {
                lista1atividade2();
                break; 
            }
            case 3:
            {
                lista1atividade3();
                break;
            }
            case 4:
            {
                lista1atividade4();
                break;
            }
            case 5:
            {
                lista1atividade5();
                break;
            }
        break;
        }
        break;
        }
        case 2:
        {
        printf("Menu Vetores\n");
        printf("1-Atividade 1\n2-Atividade 2\n3-Atividade 3\n4-Atividade\n");
        printf("-digite o numero do exercicio desejado:\n");
        scanf("%i",&exerciciod);
        switch(exerciciod)
        {   
            
            case 1:
            {
                lista2atividade1();
                break;    
            }
            case 2:
            {
                lista2atividade2();
                break; 
            }
            case 3:
            {
                lista2atividade3();
                break;
            }
            case 4:
            {
                lista2atividade4();
                break;
            }
        break;
        }
        break;
        }
        case 3:
        {
        printf("Menu Strings\n");
        printf("1-Atividade 1\n2-Atividade 2\n3-Atividade 3\n4-Atividade 4\n5-Atividade 5\n6-Atividade 6\n");
        printf("-digite o numero do exercicio desejado:\n");
        scanf("%i",&exerciciod);
        switch(exerciciod)
        {   
            
            case 1:
            {
                lista3atividade1();
                break;    
            }
            case 2:
            {
                lista3atividade2();
                break; 
            }
            case 3:
            {
                lista3atividade3();
                break;
            }
            case 4:
            {
                lista3atividade4();
                break;
            }
            case 5:
            {
                lista3atividade5();
                break;
            }
            case 6:
            {
                lista3atividade6();
                break;
            }
            
        break;
        }
        break;
        }
        case 4:
        {
        printf("Menu Matriz\n");
        printf("1-Atividade 1\n2-Atividade 2\n3-Atividade 3\n4-Atividade 4\n");
        printf("-digite o numero do exercicio desejado:\n");
        scanf("%i",&exerciciod);
        switch(exerciciod)
        {   
            
            case 1:
            {
                lista4atividade1();
                break;    
            }
            case 2:
            {
                lista4atividade2();
                break; 
            }
            case 3:
            {
                lista4atividade3();
                break;
            }
            case 4:
            {
                lista4atividade4();
                break;
            }
        break;
        }
        break;
        }
        case 5:
        {
        printf("Menu Alocacao Dinamica");
        printf("1-Atividade 1\n2-Atividade 2\n3-Atividade 3\n4-Atividade 4\n5-Atividade 5\n6-Atividade 6\n");
        printf("-digite o numero do exercicio desejado:\n");
        scanf("%i",&exerciciod);
        switch(exerciciod)
        {   
            
            case 1:
            {
                lista5atividade1();
                break;    
            }
            case 2:
            {
                lista5atividade2();
                break; 
            }
            case 3:
            {
                lista5atividade3();
                break;
            }
            case 4:
            {
                lista5atividade4();
                break;
            }
            case 5:
            {
                lista5atividade5();
                break;
            }
            case 6:
            {
                lista5atividade6();
                break;
            }
        break;
        }
        break;
        }
        case 6:
        {
        printf("Menu Structs\n");
        printf("1-Atividade 1\n2-Atividade 2\n3-Atividade 3\n4-Atividade 4\n");
        printf("-digite o numero do exercicio desejado:\n");
        scanf("%i",&exerciciod);
        switch(exerciciod)
        {   
            
            case 1:
            {
                lista6atividade1();
                break;    
            }
            case 2:
            {
                lista6atividade2();
                break; 
            }
            case 3:
            {
                lista6atividade3();
                break;
            }
            case 4:
            {
                lista6atividade4();
                break;
            }
        break;
        }
        break;
        }
    break;
    }
}