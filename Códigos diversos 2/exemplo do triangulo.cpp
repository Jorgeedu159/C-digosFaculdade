#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,p,h;
	
	printf("Digite o valor de A:\n ");
	scanf("%f", &a);
	printf("Digite o valor de B:\n ");
	scanf("%f", &b);
	printf("Digite o valor de C:\n ");
	scanf("%f", &c);
	printf("Digite o valor de H:\n ");
	scanf("%f", &h);
		
	p = a + b + c;
    h = b*h/2;
    
	printf("O valor do perimetro e:\n %f", p);
	printf("\nO valor da altura e:\n %f", h);
    
	if((a<b+c)&&(b<a+c)&&(c<a+b)){
		if(a==b&&b==c){
			printf("\n Triangulo equilatero!");
		}
    else{
	if(a==b||b==c||a==c){
	printf("\n Triangulo isosceles!");}
	else{
		printf("\n Triangulo escaleno!");
	}}}}

	
		


