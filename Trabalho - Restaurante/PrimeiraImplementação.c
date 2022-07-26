#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define ING (20+1)
#define TAM (7000)
#define tamanhousuario 7000
#define SUCESSO 0
#define receitasalva 0
//ESTRUTURA dE CADASTRAMENTO DA PIZZA

//pizza + de ingrediente + 

typedef struct pizza{
  
    int codigopizza[ING];
    int quantidade[7000];
    char nomepizza[7000];
    char receitalida[tamanhousuario];
    int codigodareceita[tamanhousuario];
 
    
}pizza;

//INICIO

int main(int argc, char** argv){
    
//VARIAVEIS DO codigo
int resposta1;
int resposta2;
int i=0,j=0;
int numpizza,qtd_ingr;
pizza* pi;

    pi = (pizza*)malloc(numpizza * sizeof(pizza));
    
    char lista_ingredientes[TAM]={
        //vetor de estruturas
        "\n 1,Massa"        //ingrediente 1
        "\n 2,Molho"        //ingrediente 2
        "\n 3,Mussarela"    //ingrediente 3
        "\n 4,Cheddar"      //ingrediente 4
        "\n 5,Presunto"     //ingrediente 5
        "\n 6,Milho"        //ingrediente 6
        "\n 7,Azeitona"     //ingrediente 7
        "\n 8,Oregano"      //ingrediente 8
        "\n 9,Bacon"        //ingrediente 9
        "\n10,Frango"       //ingrediente 10
        "\n11,Catupiry"     //ingrediente 11
        "\n12,Tomate"       //ingrediente 12
        "\n13,Chocolate"    //ingrediente 13
        "\n14,Granulado"    //ingrediente 14
        "\n15,Lombo"        //ingrediente 15
        "\n16,Pimentao"     //ingrediente 16
        "\n17,Cebola"       //ingrediente 17
        "\n18,Carne"        //ingrediente 18
        "\n19,Calabresa"    //ingrediente 19
        "\n20,Champingnon\n"//ingrediente 20
    };
char lista_ingredientesnome[ING][TAM]={
        //vetor de estruturas
        "\nMassa"     ,   //ingrediente 1
        "\nMolho",        //ingrediente 2
        "\nMussarela" ,   //ingrediente 3
        "\nCheddar",      //ingrediente 4
        "\nPresunto",     //ingrediente 5
        "\nMilho",        //ingrediente 6
        "\nAzeitona",     //ingrediente 7
        "\nOregano" ,     //ingrediente 8
        "\nBacon" ,       //ingrediente 9
        "\nFrango",       //ingrediente 10
        "\nCatupiry",    //ingrediente 11
        "\nTomate",       //ingrediente 12
        "\nChocolate",    //ingrediente 13
        "\nGranulado",    //ingrediente 14
        "\nLombo",        //ingrediente 15
        "\nPimentao",     //ingrediente 16
        "\nCebola",       //ingrediente 17
        "\nCarne",        //ingrediente 18
        "\nCalabresa",    //ingrediente 19
        "\nChampingnon\n"//ingrediente 20
    };
    //Menu
    printf("\t \t Pizzaria\n \t\tSó Alegria :)\n");
    printf("Olá! gostaria de cadastrar uma receita de pizza?\n Digite o codigo:\n1-sim\n2-não \n");
    scanf("%i",&resposta1);
    
    //Caso queira cadastrar uma receita
    if(resposta1==1)
    {
        printf("\tCardápio de ingredientes\n :)%s\n",lista_ingredientes);
        
        printf("\t Digite a quantidade de receitas que deseja cadastrar:\n");
        scanf("%i",&numpizza);
        //lendo cada receita
        for (i=0; i < numpizza; i++)
        {
            getchar();
            printf("\nDê um nome à  receita:\n %dº-",i + 1);
            fgets(pi[i].nomepizza,TAM,stdin);
         
            printf("\nQual a quantidade de diferentes ingredientes da receita %s?\n",pi[i].nomepizza);
            scanf("%d",&qtd_ingr);
            getchar();
            //lendo cada ingrediente
            for (int j = 0; j < qtd_ingr; j++ ) {
                printf("ESCREVA o código do\n  Ingrediente %dº-:",j + 1);
                scanf("%d",&pi[i].codigopizza[j]);
                printf("DIgite quantas porcoes de %s:",lista_ingredientesnome[j]);
                scanf("%d",&pi[i].quantidade[j]);
                getchar();
            }
        }
            
        for(int i=0;i < numpizza;i++)
        {
            printf("\n************************** ");
            printf("\nReceita %s",pi[i].nomepizza);
            printf("Lista de ingredientes\n");
            for(int j=0;j < qtd_ingr;j++) 
            {
                printf("\nINGREDIENTE %s",lista_ingredientesnome[j]);
                printf("\n código:%i\tPorçoes:%i\t\n",pi[i].codigopizza[j],pi[i].quantidade[j]);
                printf("\n************************** ");
            }
         
        }
    }
    //Lendo receitas
    printf("\n\t\tLIVRO DE RECEITAS DA PIZZARIA ");
    printf("\nOlá! gostaria de ler as receitas cadastradas?\n Digite o codigo para:\n1-sim\n2-não\n");
    scanf("%i",&resposta2);
    
    //Lendo receita
    if(resposta2==1)
    {
    printf ("Digite o nome da receita que quer conferir:");
    getchar();
    fgets (pi->receitalida, TAM, stdin);
        //Procurando a receita de posição em posição
         for(i=0;i<numpizza;i++)
         {
             //caso o programa ache, imprime nome e  ingredientes da receita
            if (strcmp(pi[i].nomepizza, pi->receitalida) == receitasalva)
                {
                printf("\nReceita BUSCADA: %s", pi[i].nomepizza);
                printf("Ingredientes:");
                    for(j=0;j<qtd_ingr;j++)
                    {
                       
                        printf("-%s\t Código:%i\t %i Porçoes\t\n",lista_ingredientesnome[j],pi[i].codigopizza[j],pi[i].quantidade[j]);

                    }
            
                }
         }
    }
    //CASO QUEIRA SAIR
   else
    {
        printf("\tSaindo...Até logo!\t");
    }
    
free(pi);
return SUCESSO;
}
