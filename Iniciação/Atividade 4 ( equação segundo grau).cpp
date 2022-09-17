#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c, delta, x1, x2;
	 
	printf("Digite os coeficientes a b c\n  ");
	scanf("%f %f %f", &a, &b, &c);
	
	delta = sqrt(b*b-4*a*b*c);
	x1=(-1*b+delta)/(2*a);
	x2=(-1*b+delta)/(2*a);
	
	printf("digite o valor de x1 e x2 = %f %f", x1, x2);
	
	
}
