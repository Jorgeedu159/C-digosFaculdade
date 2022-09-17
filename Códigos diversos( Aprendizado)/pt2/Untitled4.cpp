#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <locale.h>

void menu();
void inserir();
void excluir();
void editar();
void consulta();
void buscaNome ();

struct produto{

	char nome[50];

	char tipo[50];

	float preco;

	int quant;

	int cod;

};


typedef struct produto cadastro;


char continua = 's';

int tam = 0, i = 0;

cadastro *ptr = (cadastro*)malloc(0);

void inserir(){

	continua = 's';

	while(continua != 'n')

	{

		tam++;

		ptr = (cadastro*)realloc(ptr,tam*sizeof(cadastro));

		printf("Digite o nome do produto:\n");

		scanf("%s",&ptr[i].nome);

		printf("Digite o tipo do produto:\n");

		scanf("%s",&ptr[i].tipo);

		printf("Digite o preço do produto:\n");

		scanf("%f",&ptr[i].preco);

		printf("Digite o estoque do produto:\n");

		scanf("%i",&ptr[i].quant);

		printf("Digite o código do produto:\n");

		scanf("%i",&ptr[i].cod);

		i++;

		

		printf("Deseja cadastrar outro? (s/n)\n");

		scanf(" %c",&continua);

		printf("\n");

	}

	

    system("cls");

	printf("\n");

    printf("Cadastros Realizados:\n");

    

	for (i=0; i < tam; i++)

	{

		printf("-------------------------\n");

		printf("Nome do produto: %s\n",ptr[i].nome);

		printf("Tipo do produto: %s\n",ptr[i].tipo);

        printf("preço do produto: %.2f\n",ptr[i].preco);

        printf("Quantidade do produto: %i\n",ptr[i].quant);

        printf("Código do produto: %i\n",ptr[i].cod);

		printf("-------------------------");

		printf("\n");

		printf("\n");

	}

}


void excluir (){

	int exclui = 0;

	char lixo[50];

	

	printf("Digite o código do produto a ser excluido: \n");

	scanf("%i",&exclui);

	

	for (i=0; i<tam; i++)

	{

		if (ptr[i].cod == exclui)

		{

		    strcpy(ptr[i].nome,"");

		    strcpy(ptr[i].tipo,"");

		    ptr[i].preco = 0;

		    ptr[i].quant = 0;

		    ptr[i].cod = -1;

		}

	}

}


void editar (){

	int edita;

	

	printf("Digite o código do produto a ser editado: \n");

	scanf("%i",&edita);

	

	for (i=0; i<tam; i++)

	{

		if (ptr[i].cod == edita)

		{

			printf("Digite o nome do produto:\n");

		    scanf("%s",&ptr[i].nome);

		    printf("Digite o tipo do produto:\n");

		    scanf("%s",&ptr[i].tipo);

		    printf("Digite o preço do produto:\n");

		    scanf("%f",&ptr[i].preco);

		    printf("Digite o estoque do produto:\n");

		    scanf("%i",&ptr[i].quant);

		    printf("Digite o código do produto:\n");

		    scanf("%i",&ptr[i].cod);

		}

	}

	

}


void consulta (){

	system("cls");

		printf("\n");

	    printf("Cadastros Realizados:\n");

	for (i=0; i < tam; i++)

	{

		if (ptr[i].cod != -1){

			printf("-------------------------\n");

			printf("Nome do produto: %s\n",ptr[i].nome);

			printf("Tipo do produto: %s\n",ptr[i].tipo);

	        printf("preço do produto: %.2f\n",ptr[i].preco);

	        printf("Quantidade do produto: %i\n",ptr[i].quant);

	        printf("Código do produto: %i\n",ptr[i].cod);

			printf("-------------------------");

			printf("\n");

			printf("\n");

		}

	}

}


void buscaNome (){

	char busca[50];

	

	printf("Digite o nome: \n");

	scanf("%s",busca);

	

	for (i=0; i < tam; i++)

	{

		if(strcmp(busca, ptr[i].nome) == 0){

			system("cls");

			printf("-------------------------\n");

			printf("Nome do produto: %s\n",ptr[i].nome);

			printf("Tipo do produto: %s\n",ptr[i].tipo);

	        printf("preço do produto: %.2f\n",ptr[i].preco);

	        printf("Quantidade do produto: %i\n",ptr[i].quant);

	        printf("Código do produto: %i\n",ptr[i].cod);

			printf("-------------------------");

			printf("\n");

			printf("\n");

		}

	}
	
	void menu(){	

    printf("**********MENU***********\n");

	printf("* 1 - Inclusão          *\n");

	printf("* 2 - Remoção           *\n");	

	printf("* 3 - Edição            *\n");

	printf("* 4 - Consulta          *\n");

	printf("* 5 - Busca por nome    *\n");

	printf("* 6 - Sair              *\n");

	printf("*************************\n");

}

}




	

	






