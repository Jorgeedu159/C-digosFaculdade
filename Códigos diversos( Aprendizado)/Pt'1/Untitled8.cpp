#include <stdio.h>
#include <math.h>
#include <stdlib.h>

 int main(){
 	
 	float nota[5], media = 0, total = 0;
 	
 	printf("\n\n Digite 5 notas: \n");
 	
 	for(int i = 0; i < 5; ++i)
 	scanf("%f", &nota[i]);
 	
 		for(int i = 0; i < 5; ++i)
 			
			total += nota[i];
 		
 			media = total / 5;
 			
 	printf("\n A nota desse aluno sera: %f ", media);	
 	
 }
