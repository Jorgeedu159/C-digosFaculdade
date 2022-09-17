#include <stdio.h>
int main(){
	
	float totalvendido, salariototal;
	
	printf("informe o total vendido   ");
	scanf("%f", &totalvendido);
	
	salariototal=1200.00+totalvendido*0.1;
	
	printf("Resultado do salario total = U$: %f", salariototal);

	
}
