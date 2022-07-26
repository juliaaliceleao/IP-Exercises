//Bibliotecas 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Definicoes
#define SUCESSO 0
#define SIM 1
#define VERDADEIRO 0
#define TAM 80


//struct
//ingredientes
typedef struct Ingredientes_s {
    char Nome[TAM];
    int quantidadeing;
    int Codigo;
}INGREDIENTES;

//receitas
typedef struct Receita_s {

    char nomepizza[TAM];
    int Codigo;
    int quantidadeingpizza;
    INGREDIENTES* ingredientesdareceita;

}RECEITA;



//INICIO
int main(int argc, char** argv)
{
    //Variaveis de perguntas ao usuario
    int respostalobby, respostamenu2, respostamenu3;
    int menuing_ord;

    //contadores
    int qtdereceitas = 0, numingredientes = 0, i, k, j;
    int cod_ingrediente;
    int qtde_ing, contador = 0, contalinhasreceitas = 0, contalinhasing = 0;
    char ingrediente[TAM];
    char  c;
    //variaveis da struct 
            //ingredientes
    INGREDIENTES* ing_d;
    INGREDIENTES* ingredientes_c;

    //receita
    RECEITA* receita_d;
    RECEITA* receita_c;
    //arquivos
    //Ponteiros
    FILE* r_r;
    FILE* arquivoing;

    //lobby
    printf("\t \t Pizzaria\n \a \t\tSó Alegria :)\n\n");
    printf("  -------------------------------------\n");
    printf("Bem vindo!Gostaria de ver nosso menu de opções?\n\t1-Sim\n\t2-Não\n");
    printf(">");
    scanf("%i", &respostalobby);

    if (respostalobby == SIM)
    {
        //menu
        do {

            printf("  -------------------------------------\n");
            printf("\t \t Menu\n \t\tSó Alegria :)\n");
            printf("Gostaria de ver a Sessão:\n\t1-Cadastro\n\t2-Cardapio\n\t3-Sair\n");
            printf(">");
            scanf("%i", &respostamenu2);
            getchar();
            //Menu Cadastro
            if (respostamenu2 == 1)
            {
                printf("Por favor, Escolha o que gostaria de cadastrar:\n\t1.Receitas\n\t2.Ingredientes\n");
                printf(">");
                scanf("%i", &respostamenu3);
                getchar();

                //Cadastro receitas
                if (respostamenu3 == 1)
                {

                    printf("\n\nCADASTRO RECEITAS*\n");
                    //Cadastro ingredientes
                    //Imprimindo ingredientes existentes

                    FILE* ARQV_ingred = fopen("listareceita", "r");
                    if (ARQV_ingred == NULL)
                    {
                        printf("Sem receitas Cadastradas!\n");
                    }

                    else
                    {
                        c = fgetc(ARQV_ingred);
                        while (!feof(ARQV_ingred))
                        {
                            putchar(c);
                            c = fgetc(ARQV_ingred);

                        }
                        fclose(ARQV_ingred);
                    }

                    printf("\n\nQuantas receitas deseja cadastrar?\n");
                    scanf("%i", &qtdereceitas);

                    //alocando espaço para o numero de receitas
                    receita_d = (RECEITA*)malloc(qtdereceitas * sizeof(RECEITA));

                    for (i = 0; i < qtdereceitas; i++)
                    {

                        printf("\tRECEITA %d\n", i + 1);

                        getchar();

                        printf("\n\nQual o nome da receita?");
                        fgets(receita_d[i].nomepizza, TAM, stdin);
                        receita_d[i].nomepizza[strlen(receita_d[i].nomepizza) - 1] = '\0';

                        printf("\n\nQual o codigo da receita?");
                        scanf("%d", &receita_d[i].Codigo);
                        getchar();

                        printf("\nQual a variedade de ingredientes da receita?");
                        scanf("%d", &receita_d[i].quantidadeingpizza);
                        getchar();

                        //Alocando espaco
                        receita_d[i].ingredientesdareceita = (INGREDIENTES*)malloc(sizeof(INGREDIENTES) * receita_d[i].quantidadeingpizza);
                        printf("\tINGREDIENTE %d\n", i + 1);

                        FILE* ARQV_ingred = fopen("listaingrediente", "r");
                        if (ARQV_ingred == NULL)
                        {
                            printf("Sem ingredientes Cadastrados!\n");
                        }

                        //Impimindo
                        else
                        {
                            char c;
                    FILE* ARQV_ingred = fopen("listaingrediente", "r");
                    if (ARQV_ingred == NULL)
                    {
                        printf("Sem ingredientes Cadastrados!\n");
                    }
                    //Impime na tela o que está no arquivo
                    else
                    { 
                        while (!feof(ARQV_ingred)) {

                            c = fgetc(ARQV_ingred);

                            if (c == '*') {

                            

                                fgets(ingrediente, TAM, ARQV_ingred);
                                fseek(ARQV_ingred, 1, SEEK_CUR);
                                fscanf(ARQV_ingred, "%d", &cod_ingrediente);

                                if (!feof(ARQV_ingred)) {
                                    printf("\nIngrediente: %s Codigo: %d\n", ingrediente, cod_ingrediente);
                                }
                            }
                        }
                        fclose(ARQV_ingred);
                    }
                        }
                        for (int j = 0; j < receita_d[i].quantidadeingpizza; j++)
                        {
                            printf("\nDigite o codigo de um ingrediente para a receita %s\n", receita_d[i].nomepizza);
                            scanf("%d", &receita_d[i].ingredientesdareceita[j].Codigo);
                            printf("\nQuantas porcoes do ingrediente voce deseja?\n");
                            scanf("%d", &receita_d[i].ingredientesdareceita[j].quantidadeing);
                        }
                    }

                    //Abrir ARQUIVO
                    r_r = fopen("listareceita", "a");
                    //salvando tudo isso em um arquivo
                    for (i = 0; i < qtdereceitas; i++)
                    {
                        if (r_r == NULL)
                        {
                            printf("Arquivo não aberto");
                            return 1;
                        }


                        fprintf(r_r, "*%s\n", receita_d[i].nomepizza);
                        fprintf(r_r, "%d\n", receita_d[i].Codigo);
                        fprintf(r_r, "%d\n", receita_d[i].quantidadeingpizza);

                        for (k = 0; k < receita_d[i].quantidadeingpizza; k++)
                        {
                            fprintf(r_r, "%d\n%d\n", receita_d[i].ingredientesdareceita[k].Codigo, receita_d[i].ingredientesdareceita[k].quantidadeing);
                        }

                    }

                    //Fechar ARQUIVO
                    fclose(r_r);
                    for (i = 0; i < qtdereceitas; i++)
                    {
                        free(receita_d[i].ingredientesdareceita);
                    }
                    free(receita_d);
                }

                //Cadastro ingredientes
                if (respostamenu3 == 2)
                {
                    char c;
                    FILE* ARQV_ingred = fopen("listaingrediente", "r");
                    if (ARQV_ingred == NULL)
                    {
                        printf("Sem ingredientes Cadastrados!\n");
                    }
                    //Impime na tela o que está no arquivo
                    else
                    { 
                        while (!feof(ARQV_ingred)) {

                            c = fgetc(ARQV_ingred);

                            if (c == '*') {

                            

                                fgets(ingrediente, TAM, ARQV_ingred);
                                fseek(ARQV_ingred, 1, SEEK_CUR);
                                fscanf(ARQV_ingred, "%d", &cod_ingrediente);

                                if (!feof(ARQV_ingred)) {
                                    printf("\nIngrediente: %s Codigo: %d\n", ingrediente, cod_ingrediente);
                                }
                            }
                        }
                        fclose(ARQV_ingred);
                    }
                
                    printf("Digite quantos diferentes ingredientes quer cadastrar.");
                    scanf("%i", &qtde_ing);

                    ing_d = (INGREDIENTES*)malloc(qtde_ing * sizeof(INGREDIENTES));

                    //Obtem dados dos ingredientes
                    for (i = 0; i < qtde_ing; i++)
                    {
                        getchar();
                        printf("\tINGREDIENTE %d\n", i + 1);
                        printf("Digite o nome do ingrediente.\n");
                        printf(">");
                        fgets(ing_d[i].Nome, TAM, stdin);
                        //ing_d[i].Nome[strlen(ing_d[i].Nome) - 1] = '\0';
                        printf("\nDigite o codigo do ingrediente.\n");
                        printf(">");
                        scanf("%d", &ing_d[i].Codigo);
                    }

                    //Abrindo arquivo
                    arquivoing = fopen("listaingrediente", "a");
                    if (arquivoing == NULL)
                    {
                        printf("Arquivo não aberto");
                        return 1;
                    }
                    //guardando ingrediente e nome no arquivo
                    for (j = 0; j < qtde_ing; j++)
                    {
                        fprintf(arquivoing, "*%s", ing_d[j].Nome);
                        fprintf(arquivoing, ".%d\n", ing_d[j].Codigo);
                    }
                    //fechando arquivo e liberando memoria alocada 
                    fclose(arquivoing);
                    free(ing_d);

                } //Cadastrando receitas

                printf("Cadastro concluido!");
            }

            //Menu Cardapio
            if (respostamenu2 == 2)
            {
                printf("Por favor, Escolha o tipo de Cardapio que Gostaria de ler:\n\t1.Receitas\n\t2.Ingredientes\n");
                printf(">");
                scanf("%d", &respostamenu3);

                //Cardapio Receitas
                if (respostamenu3 == 1)
                {
                    r_r = fopen("listareceita", "r");
                    fseek(r_r, 0, SEEK_SET);
                    if (r_r == NULL)
                    {
                        printf("Arquivo não aberto");
                        return 1;
                    }
                    else 
                    {
                        while (!feof(r_r))
                        {
                            c = fgetc(r_r);
                            if (c == '*') { qtdereceitas++; }

                        }

                        receita_c = (RECEITA*)malloc(qtdereceitas * sizeof(RECEITA));

                        fseek(r_r, 0, SEEK_SET);

                        for(i = 0; i < qtdereceitas; i++){
                            fseek(r_r, 1, SEEK_CUR);
                            fgets(receita_c[i].nomepizza, TAM, r_r);
                            receita_c[i].nomepizza[strlen(receita_c[i].nomepizza) - 1] = '\0';
                            fscanf(r_r, "%d", &receita_c[i].Codigo);
                            fgetc(r_r);
                            fseek(r_r, 0, SEEK_CUR);
                            fscanf(r_r, "%d", &receita_c[i].quantidadeingpizza);
                            fgetc(r_r);
                            receita_c[i].ingredientesdareceita = (INGREDIENTES*)malloc(receita_c[i].quantidadeingpizza * sizeof(INGREDIENTES));
                            for (j = 0; j < receita_c[i].quantidadeingpizza; j++) {
                                fscanf(r_r, "%d", &receita_c[i].ingredientesdareceita[j].Codigo);
                                fgetc(r_r);
                                fscanf(r_r, "%d", &receita_c[i].ingredientesdareceita[j].quantidadeing);
                                fgetc(r_r);
                            }
                            
                        }
                        fclose(r_r);
                    }

                    //Ler dados do arquivo
                    arquivoing = fopen("listaingrediente", "r");
                    if (arquivoing == NULL)
                    {
                        printf("Arquivo não aberto");
                        return 1;
                    }

                    //Alocar ingredientes_c
                    ingredientes_c = (INGREDIENTES*)malloc(numingredientes * sizeof(INGREDIENTES));

                    fseek(arquivoing, 0, SEEK_SET);

                    numingredientes = 0;

                    while (!feof(arquivoing))
                    {
                        c = fgetc(arquivoing);
                        if (c == '*') { numingredientes++; }

                    }

                    fseek(arquivoing, 0, SEEK_SET);

                    for (i = 0; i < numingredientes; i++)
                    {

                        c = fgetc(arquivoing);
                        if (c == '*') {

                            fgets(ingredientes_c[i].Nome, TAM, arquivoing);
                            ingredientes_c[i].Nome[strlen(ingredientes_c[i].Nome) - 1] = '\0';

                            fseek(arquivoing, 1, SEEK_CUR);
                            fscanf(arquivoing, "%d", &ingredientes_c[i].Codigo);
                            fgetc(arquivoing);

                        }
                    }
                    fclose(arquivoing);

                    for (i = 0; i < qtdereceitas; i++)
                    {
                        for (j = 0; j < receita_c[i].quantidadeingpizza; j++)
                        {
                            for (int k = 0; k < numingredientes; k++)
                            {
                                if (receita_c[i].ingredientesdareceita[j].Codigo == ingredientes_c[k].Codigo)
                                {
                                    strcpy(receita_c[i].ingredientesdareceita[j].Nome, ingredientes_c[k].Nome);
                                }
                            }
                        }
                    }

                    printf("\n\nDeseja ver suas receitas ordenadas por:\n\t1. Ordem de Criacao\n\t2. Ordem de Descricao\n\t3. Ordem de Codigo\n");
                    scanf("%d", &menuing_ord);
                    printf("\n");

                    //Imprimindo em ordem de Criacao 
                    if (menuing_ord == 1)
                    {
                        //para todas as receitas
                        for (i = 0; i < qtdereceitas; i++)
                        {
                            //Imprimindo receita
                            printf("Receita Cadastrada:\n\n\tNome:%s\n\tCod.%i\n", receita_c[i].nomepizza, receita_c[i].Codigo);
                            
                            for (j = 0; j < receita_c[i].quantidadeingpizza; j++)
                            {
                                
                                printf("%d Porcoes de %s\n", receita_c[i].ingredientesdareceita[j].quantidadeing, receita_c[i].ingredientesdareceita[j].Nome);
                            }
                            printf("---------------------------------\n");
                        }
                    }
                    //Imprimindo em ordem de Descricao
                    if (menuing_ord == 2)
                    {
                        RECEITA* receita_P;
                        RECEITA tmp;
                        receita_P = (RECEITA*)malloc(qtdereceitas * sizeof(RECEITA));

                        for (i = 0; i < qtdereceitas; i++)
                        {
                            receita_P[i] = receita_c[i];
                        }

                        for (i = 0; i < qtdereceitas - 1; i++)
                        {
                            for (j = 0; j < qtdereceitas - 1; j++)
                            {
                                if (strcmp(receita_P[j].nomepizza, receita_P[j + 1].nomepizza) > 0)
                                {
                                    tmp = receita_P[j];
                                    receita_P[j] = receita_P[j + 1];
                                    receita_P[j + 1] = tmp;
                                }
                            }
                        }

                        for (i = 0; i < qtdereceitas; i++)
                        {
                            
                            printf("Receita Cadastrada:\n\n\tNome:%s\n\tCod.%i\n", receita_P[i].nomepizza, receita_P[i].Codigo);
                            for (j = 0; j < receita_P[i].quantidadeingpizza; j++)
                            {
                                printf("%d Porcoes de %s\n", receita_P[i].ingredientesdareceita[j].quantidadeing, receita_P[i].ingredientesdareceita[j].Nome);
                            }
                            printf("---------------------------------\n");
                        }
                        free(receita_P);
                    }

                    //Ordem de codigo
                    if (menuing_ord == 3)
                    {
                        RECEITA* Aux2;
                        RECEITA tmp;

                        Aux2 = (RECEITA*)malloc(qtdereceitas * sizeof(RECEITA));

                        for (i = 0; i < qtdereceitas; i++)
                        {
                            Aux2[i] = receita_c[i];
                        }

                        for (i = 0; i < qtdereceitas - 1; i++)
                        {
                            for (j = 0; j < qtdereceitas - 1; j++)
                            {
                                if (Aux2[j].Codigo > Aux2[j + 1].Codigo)
                                {
                                    tmp = Aux2[j];
                                    Aux2[j] = Aux2[j + 1];
                                    Aux2[j + 1] = tmp;
                                }
                            }
                        }

                        for (i = 0; i < qtdereceitas; i++)
                        {
                             printf("Receita Cadastrada:\n\n\tNome:%s\n\tCod.%i\n", Aux2[i].nomepizza, Aux2[i].Codigo);
                            for (j = 0; j < Aux2[i].quantidadeingpizza; j++)
                            {  
                                printf("%d Porcoes de %s\n", Aux2[i].ingredientesdareceita[j].quantidadeing, Aux2[i].ingredientesdareceita[j].Nome);
                            }
                        }

                        free(Aux2);
                        
                    }

                    for (i = 0; i < qtdereceitas; i++)
                    {
                        free(receita_c[i].ingredientesdareceita);
                    }
                    free(receita_c);
                    numingredientes = 0;

                }
                
                //Cardapio ingredientes
                if (respostamenu3 == 2)
                {
                    
                    //Ler dados do arquivo
                    arquivoing = fopen("listaingrediente", "r");

                    if (arquivoing == NULL)
                    {
                        printf("Arquivo não aberto");
                        return 1;
                    }

                    else {

                        while (!feof(arquivoing))
                        {
                            c = fgetc(arquivoing);
                            if (c == '*') { numingredientes++; }

                        }

                        //Alocando espaço ingredientes_c
                        ingredientes_c = (INGREDIENTES*)malloc(numingredientes * sizeof(INGREDIENTES));

                        fseek(arquivoing, 0, SEEK_SET);

                        for (i = 0; i < numingredientes; i++)
                        {

                            c = fgetc(arquivoing);
                            if (c == '*') {

                                fgets(ingredientes_c[i].Nome, TAM, arquivoing);
                                ingredientes_c[i].Nome[strlen(ingredientes_c[i].Nome) - 1] = '\0';

                                fseek(arquivoing, 1, SEEK_CUR);
                                fscanf(arquivoing,"%d", &ingredientes_c[i].Codigo);
                                fgetc(arquivoing);

                            }
                        }
                        fclose(arquivoing);

                    }
                    printf("\n\nOrdenar por\n\t1-Criacao\n\t2-Descricao\n\t3-Codigo\n");
                    scanf("%d", &menuing_ord);

                    //Ordem de criação do ingrediente 
                    if (menuing_ord == 1)
                    {
                        for (i = 0; i < numingredientes; i++)
                        {
                            printf("Ingrediente:%s\t\tCod.%d\t\n", ingredientes_c[i].Nome, ingredientes_c[i].Codigo);
                        }
                    }

                    if (menuing_ord == 2)
                    {
                        //Ordem de descrição do ingrediente
                        INGREDIENTES* Ingrediente_c;
                        INGREDIENTES IngredientesAux;

                        Ingrediente_c = (INGREDIENTES*)malloc(numingredientes * sizeof(INGREDIENTES));

                        for (i = 0; i < numingredientes; i++)
                        {
                            Ingrediente_c[i] = ingredientes_c[i];
                        }

                        for (i = 0; i < numingredientes - 1; i++)
                        {
                            for (j = 0; j < numingredientes - 1; j++)
                            {
                                if (strcmp(Ingrediente_c[j].Nome, Ingrediente_c[j + 1].Nome) > 0)
                                {
                                    IngredientesAux = Ingrediente_c[j];
                                    Ingrediente_c[j] = Ingrediente_c[j + 1];
                                    Ingrediente_c[j + 1] = IngredientesAux;
                                }
                            }
                        }
                        for (i = 0; i < numingredientes; i++)
                        {
                            
                            printf("Ingrediente:%s\t\tCod.%d\t\n", Ingrediente_c[i].Nome, Ingrediente_c[i].Codigo);
                        }

                        free(Ingrediente_c);
                    }

                    if (menuing_ord == 3)
                    {
                        //Ordem de descrição do ingrediente
                        INGREDIENTES* Ingrediente_c;
                        INGREDIENTES IngredientesAux;

                        Ingrediente_c = (INGREDIENTES*)malloc(numingredientes * sizeof(INGREDIENTES));

                        for (i = 0; i < numingredientes; i++)
                        {
                            Ingrediente_c[i] = ingredientes_c[i];
                        }

                        for (i = 0; i < numingredientes - 1; i++)
                        {
                            for (j = 0; j < numingredientes - 1; j++)
                            {
                                if (Ingrediente_c[j].Codigo > Ingrediente_c[j + 1].Codigo)
                                {
                                    IngredientesAux = Ingrediente_c[j];
                                    Ingrediente_c[j] = Ingrediente_c[j + 1];
                                    Ingrediente_c[j + 1] = IngredientesAux;
                                }
                            }
                        }
                        for (i = 0; i < numingredientes; i++)
                        {
                            printf("Ingrediente:%s\t\tCod.%d\t\n", Ingrediente_c[i].Nome, Ingrediente_c[i].Codigo);
                        }

                        free(Ingrediente_c);
                    }

                    free(ingredientes_c);
                    numingredientes = 0;
                }
            }
        } while (respostamenu2 == 1 || respostamenu2 == 2);

    }

    printf("\tSaindo...Até logo!\t");
    //se funcionou
    return SUCESSO;
}
