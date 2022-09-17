#include <stdlib.h>
#include <stdio.h>


int main(){
	 int num, par = 0, impar = 0;
	 
	do{
		printf("Digite zero pra finalizar:   ");
		scanf("%d", &num);
		
		if(num > 0){
			if(num % 2==0)
			par++;
			else
			impar++;
		}
	} while(num != 0);
	printf("numeros pares: %d\t impares:   %d\n", par, impar);
}
