#include <stdio.h>
#include<math.h>


int main(){
	
	float area,volume,raio;
	
	printf("Digite o valor do raio:  ");
	scanf("%f", &raio);
	
	area=3.14159*raio*raio;
	volume=4*3.14159*raio*raio*raio/3;
	
	
	
	printf("Resultado da area e do volume  %f %f", area, volume);
}
