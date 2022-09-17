#include<stdio.h>
#include <math.h>

int main(){
	int N1, N2, Resultado;
	
	printf("Digite o dividendo: ");
	scanf("%d", &N1);
	printf("Digite o divisor:  ");
	scanf("%d", &N2);
	
	Resultado = N1 / N2;
	
	if(N2=0){
	printf("Nao e possivel calcular o valor");
	}
	else{
		printf("Resultado do divisao: %d", Resultado);
		}
		
	}
