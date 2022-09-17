#include <stdio.h>
#include <stdlib.h>

int main(){
	int contador;
	float media, nota, total;
	char letra;
	total = 0;
	letra = 'c';
	
	while( letra != 'F')
	{
	
		for( contador =1; contador <= 4; contador++)
		{	
			printf("Digite a nota! %d\n");
			scanf("%f", &nota);
			total = total + nota;
	
		}
	}	
	
	media = total/4;
	printf("Nota media do aluno:  %f\n", media);
	total = 0;
	nota = 0;
	printf("Deseja calcula mais alguma nota? Presione qualquer tecla pra prosseguir, ou aperte F para finalizar. %s", letra);
	
	
}
