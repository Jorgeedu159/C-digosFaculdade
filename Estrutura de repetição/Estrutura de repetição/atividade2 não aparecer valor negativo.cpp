#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
	int numero;
	
	do{
		printf("Digite um numero inteiro!\n numero:  ");
		scanf("%d", &numero);
		
		if(numero < 0)
		{
			printf("Nao e possivel realizar!");
		}
	}
	while(numero > 0);
}
