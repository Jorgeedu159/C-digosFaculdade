#include <stdio.h>

int main(){
	int Base,Altura,Perimetro,area;
	
	printf("Digite a base retangulo   ");
	scanf("%d", &Base);
	printf("Digite a altura do retangulo  ");
	scanf("%d", &Altura);
	
	area=Base*Altura;
	
	Perimetro=Base*2+Altura*2;
	
	printf("Resultado da Area e Perimetro em centimetros =  %d %d", area, Perimetro);
	

}
