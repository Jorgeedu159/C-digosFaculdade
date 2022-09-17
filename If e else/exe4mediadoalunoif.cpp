#include <stdio.h>

int main(){
	float nota1, nota2, media;
	printf("Digite a primeira nota:  \n");
	scanf("%f", &nota1);
	printf("digite a segunda nota:  \n");
	scanf("%f", &nota2);
	
	media=(nota1+nota2)/2;
	
	printf("Resultado:\n  %f", media);
	
	if(media>=7){
		printf("\n Aluno aprovado na disciplina!");}
		else{
			if(media<4)
			printf("\n Aluno reprovado na disciplina");
			else
			printf("\n Aluno em analise");
			}	
			}	
		
	
   	
	

