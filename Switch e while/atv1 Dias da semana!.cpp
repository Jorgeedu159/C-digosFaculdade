#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int dia;
	
	printf("Digite o numero de 1 a 7 para saber se o dia ira ser util!:\n");
	scanf("%d", &dia);
	
	switch(dia)
	{
		case 2:
			printf("Que bela Segunda feira! \n(dia util!)");
			break;
			
		case 3:
			printf("Terca feira ensolarada! \n( dia util!)");
			break;
					
		case 4:
			printf("Quarta feira! \n(dia util!)");
			break;
					
		case 5: 
			printf("Quinta feira do tbt! \n(dia util!)");
			break;
					
		case 6:
			printf("Sexta Cheira! \n(dia util!)");
			break;
					
		case 7:
			printf("Sabado animado! \n(Final de semana!)");
			break;
					
		case 1:
			printf("Domingo de descanso! \n(Final de semana!))");
			break;
					
			default:
			printf("Errou feio! Errou rude!");
			break;
					 
	}
}
