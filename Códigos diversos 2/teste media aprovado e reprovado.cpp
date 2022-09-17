#include <stdio.h>
#include <math.h>

int main(){
	float A1, A2, media;
	printf("Digite os valor de A1:   ");
	scanf("%f", &A1);
	printf("Digite o valor de A2:    ");
	scanf("%f", &A2);
	
	media=(A1+A2)/2;
	
	printf("Resultado: %f\n", media);
	
	if(media < 6){
		printf("Estudante reprovado!\n");
	}
	else{
		printf("Estudante aprovado!\n");
	}
	
}
