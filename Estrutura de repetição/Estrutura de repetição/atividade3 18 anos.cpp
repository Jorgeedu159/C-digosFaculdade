#include <stdio.h>
#include <math.h>


int main(){
	
	int cont=1, idade, menor=0;
	
	while(cont <= 15) 
	{
		printf("Informe a idade da pessoas %d !\n Idade: ",cont);
		scanf("%d", &idade);
	
		cont++;
		
		if(idade <= 18)
		{	
			menor++;
		}		
	}
	
	printf(" %d pessoa sao menores de 18 anos! \n", menor);
			
}
		
	
	

