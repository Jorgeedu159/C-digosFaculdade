#include <stdio.h>
#include <math.h>

int main(){
	int numero = 1, soma = 0;

	while(numero <= 10)
	{
		printf("Valor: %d\n", numero);
	
		soma += numero;
		numero ++;
	}
	
	printf("A soma dos valores e: %d\n", soma);
}
