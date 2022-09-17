#include <stdio.h>
#include <stdlib.h>

int main()
{
	 int atual = 1, anterior = 0;
	 
	while(atual > 0) 
	{
		printf("Escreva um numero.\n");
		scanf("%d", &atual);
		  	
		if(atual >= anterior)
		{
			anterior = atual;
	 	}
	 	
	 	
	}
	printf("\n Maior valor digitado foi: %d", anterior);

}
