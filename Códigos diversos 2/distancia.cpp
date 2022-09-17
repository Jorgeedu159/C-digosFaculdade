#include <stdio.h>
#include <math.h>

int main (){
	
	float x1, x2, y1, y2, distancia;
	
	printf("Digite os valores de X1 e x2:   ");
	scanf("%f %f", &x1, &x2);
	
	printf("digite os valores de Y1 e Y2:   ");
	scanf("%f %f", &y1, &y2);
	
	distancia=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	
	printf("Resultado:  %f", distancia);
}
