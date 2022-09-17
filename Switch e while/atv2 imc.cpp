#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float peso,altura, imc;
	
	printf("Digite seu peso em quilogramas!\n kg:");
	scanf("%f", &peso);
	
	printf("Digite sua altura em metros!\n m:");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	printf("Seu imc e de:\n %f", imc);
	
	if(imc > 30)
	{
		printf("\n Obesidade!");
	}
	
	if(imc > 25 && imc <= 30)
	{
		printf("\n Acima do peso!");
	}
		
	if(imc >= 18.5 && imc <= 25)
	{
		printf("\n Peso normal!");
	}
		
	if(imc < 18.5)
	{
		printf("\n Abaixo do peso!");
	}	
}		
		

		
			

