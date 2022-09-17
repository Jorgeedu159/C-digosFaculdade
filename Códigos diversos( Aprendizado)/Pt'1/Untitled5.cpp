

#include <stdio.h>
#include <stdlib.h>

int main(){
	 int atual = 1, anterior = 0;
	 
	 do
	 {
	 	printf("Escreva um numero.\n");
	 	scanf("%d", &atual);
	 	
		 	
		if(atual >= anterior)
		{
	 		anterior = atual;
	 	}
	}
	while(atual > 0);
	
	printf("\n Valor atual: %d", anterior);
}


 
 
 
