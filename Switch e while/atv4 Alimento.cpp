#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
     int alimento;
     
     printf("Digite o codigo do alimento!\n");
     scanf("%d", &alimento);
     
     if(alimento >= 8 && alimento <= 15)
	 
	 {
     	printf("Produtos de limpeza e para a casa!");
	 }
	 
	 if(alimento == 5 || alimento == 6)
	 
	 {
    	printf("Produtos de Vestuario!");
	 }
	
	if(alimento >= 2 && alimento <= 4)
	 
	 {
		printf("Produtos pereciveis");
	 }
	if(alimento == 1)
	
	 {
		printf("Produto nao perecivel!");
 	 }
	
   if(alimento == 7)
     
	 {
   		printf("Produto de Higiene pessoal!");
	 }
	
	}
