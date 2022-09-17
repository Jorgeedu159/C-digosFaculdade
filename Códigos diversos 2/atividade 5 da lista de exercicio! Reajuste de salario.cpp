#include <stdio.h>
#include <math.h>

int main(){
	float reajuste, salario;
	
	printf("Digite o salario:\n R$  ");
	scanf("%f", &salario);
	
	if(salario>10000){
		reajuste=salario + salario*0.05;
		printf("Valor do salario reajustado foi de 5percent:\n R$  %f", reajuste);}
		else{
			if(salario>=5000&&salario<=10000){
				reajuste=salario+salario*0.1;
				printf("Valor do salario reajustado foi de 10percent:\n R$ %f", reajuste);}
				}
				
	if(salario<5000){
		reajuste=salario+salario*0.15;
		printf("Valor do salario reajustado foi de 15 percent:\n R$ %f", reajuste);
	}}

