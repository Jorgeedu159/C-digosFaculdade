#include <stdio.h>
#include <math.h>
int main(){
	float raio, altura, area, precototal;
	int qtsdelatas;
	
	printf("\nDigite o raio e a altura do cilindro\n");
	scanf("%f %f" ,&raio,&altura);
	
	area = 3.1416 * raio * raio + 2 * 3.1416 * raio * altura;
	qtsdelatas = ceil( area / 15.);
	precototal = qtsdelatas * 20;
	
	
	
	
}
