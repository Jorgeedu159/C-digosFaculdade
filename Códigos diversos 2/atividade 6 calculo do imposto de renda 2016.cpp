#include <stdio.h>


int main(){
	float vr, bdc, alq, parcela;
	printf("Digite seu salario:\n R$");
	scanf("%f", &bdc);
	
	
	if(bdc>4664.68){
		vr=bdc+(bdc*0.275-869.36);
		printf("Valor calculado acima de 4664,68:\n R$ %f", vr);}
		else{
			if(bdc>=3751.06&&bdc<=4664.68){
			
			7vr=bdc+(bdc*0.225-636.13);
			
			printf("Valor calculado acima de 3751,06:\n R$ %f", vr);
		}
		}
   if(bdc>2826.65&&bdc<=3751.05){
   	
	   vr=bdc+(bdc*0.15-354.80);
	   
   	printf("Valor calculado acima de 2826,66:\n R$ %f", vr);}
   	
   	if(bdc>1903.98&&bdc<=2826.65){
   		
		   vr=bdc+(bdc*0.075-142.80);
		   
   		printf("Valor calculado acima de 1903,99:\n R$ %f", vr);}
   		else{ if(bdc<=1903.98){
   			vr=bdc+(bdc*0-0);
   			printf("Valor calculado abaixo de 1903,98:\n R$ %f", vr);
		   }
		   }
   	
	   }
	   
	   //vr= valor real; bdc=base de cálculo mensal; alq=aliquota; 
	   
	   
   	
   	
   


