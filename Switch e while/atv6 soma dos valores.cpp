#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int x,y,z,soma;
	
	printf("Escreva o Valor de x: \n");
	scanf("%d", &x);
	
	printf("Escreva o valor de y: \n");
	scanf("%d", &y);
	
	printf("Escreva o valor de z: \n");
	scanf("%d", &z);
	
	if(x > y && y > z || y > x && x > z)
    	{
		soma = x + y;
		printf("Valor da soma de X e Y:\n %d", soma);
		}
	if(y > x && z > y || z > y && y > z)
		{
		soma = y + z;
		printf("Valor da soma de Y e Z:\n %d", soma);
		}	
	if(z > y && x > y)
		{
		soma = x + z;
		printf("Valor da soma de X e Z:\n %d", soma);
		}
	else
	{ if(x == y || y == z || z == x)
	{
		printf("Nao pode calcular tal valor!");
	}
	}
}
