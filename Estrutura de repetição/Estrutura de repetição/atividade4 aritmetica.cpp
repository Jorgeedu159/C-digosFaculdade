#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	int opcao, x, a, b;
 	
 	
 	printf("\n1 - Adicao \n");
 	printf("2 - Subtracao\n");
	printf("3 - Multplicacao\n");
 	printf("4 - Divisao\n");
 	printf("5 - Encerrar\n");
 	
 	
 	printf("\nSelecione algumas das opçoes\n");
 	scanf("%d", &opcao);
 	
 	if(opcao > 0 && opcao <= 5)
	{
		switch(opcao) 	
		{
			case 1: 
			
		 		printf("Informe o primeiro valor:\n");
		 		scanf("%d", &a);
		 		
		 		printf("Informe o segundo valor:\n");
		 		scanf("%d", &b);
		 		
		 		x = a + b;
		 		
		 		printf("O resultado da Adicao e: %d", x);
		 		break;
		 		
		 	case 2: 
		 		
				printf("Informe o primeiro valor:\n");
		 		scanf("%d", &a);
		 		
		 		printf("Informe o segundo valor:\n");
		 		scanf("%d", &b);
		 		
		 		x = a - b;
		 		
		 		printf("O resultado da Subtração e: %d", x);
		 		break;
		 	
			case 3: 
		 		
				printf("Informe o primeiro valor:\n");
		 		scanf("%d", &a);
		 		
		 		printf("Informe o segundo valor:\n");
		 		scanf("%d", &b);
		 		
		 		x = a * b;
		 		
		 		printf("O resultado da Multplicao e: %d", x);
		 		break;
		 	
			case 4:
		 		
				printf("Informe o primeiro valor:\n");
		 		scanf("%d", &a);
		 		
		 		printf("Informe o segundo valor:\n");
		 		scanf("%d", &b);
		 		
		 		x = a / b;
		 		
		 		printf("O resultado da Divisao e: %d", x);
		 		break;
		 		
		 	case 5:
		 	
		 		printf("Programa finalizado.. ");
				exit(0);
			 	break;		
		}
	}
	else
	{
		printf("Valor selecionado fora das opcoes!");
	}
}
 	
