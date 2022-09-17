#include <stdio.h>
int main(){
	
	float precodefabrica, precototal;
	printf("Digite o preco de fabrica do carro: U$   ");
	scanf("%f", &precodefabrica);
	
	precototal = precodefabrica + precodefabrica*0.28 + precodefabrica*0.45;
	
	printf("Valor do carro=U$   %f", precototal);
	
	
}
