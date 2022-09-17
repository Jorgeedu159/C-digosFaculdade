#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float inicio, fim, tempodapartida;
	
	printf("Diga o inicio dessa partida!\n Em horas:");
	scanf("%f", &inicio);
	
	printf("Diga o Final desta partida!\n Em horas:");
	scanf("%f", &fim);
	
	if(fim<inicio)
	{
		
		tempodapartida = 24 - inicio + fim;
		printf("Esta partida durou!\n Em horas: %f",tempodapartida);
	
	}
	else
	
	{
	
		if(fim > inicio)
		{
			
			
			tempodapartida = fim - inicio;
			printf("Esta partida durou!\n Em horas: %f", tempodapartida);
		}
			
		if(fim == inicio)
		{
			
			tempodapartida = 24;
			printf("Esta partida durou!\n Em horas: %f", tempodapartida);
			
		}
		}
	}
			
