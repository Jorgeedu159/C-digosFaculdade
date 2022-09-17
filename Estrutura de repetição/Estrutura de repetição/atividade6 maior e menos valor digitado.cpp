#include <stdio.h>
#include <stdlib.h>

int main()
{
	 int atual = 0, anterior = 0, menor, interacao = 1;
	 
	while(interacao <= 10) 
	{
		printf("Escreva um numero. %d\n", interacao);
		scanf("%d", &atual);
		  	
		if(atual >= anterior)
		{
			anterior = atual;
	 	}
	 	
	 	if(atual <= menor)
	 	{
	 		menor <= atual;
		}
		interacao ++;
	}
	printf("\n Maior valor digitado foi: %d", anterior);
	printf("\n Menor valor digitado foi: %d", menor);
}
