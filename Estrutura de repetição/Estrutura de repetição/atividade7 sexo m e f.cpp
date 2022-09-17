#include<stdio.h>
#include<stdlib.h>

#define Qtde 15

int main (){
float altura, menor=3, soma=0, maior=0, media=0;
char sexo, sexoalto;
int mulheres=0, homens=0,i, confirma=0;

for(i=0;i<Qtde;i++){

	printf("\n Pessoa %d >> \n Altura: ",i+1);
	scanf("%f",&altura);

	printf("\n Sexo:\n Masculino ou Feminino?: ");
	scanf("%s",&sexo);

		if ( sexo == 'M'|| sexo == 'm'){
			
			homens++;
			
			}

		else if(sexo == 'F'|| sexo =='f'){
			
			mulheres++;
			soma = soma + altura;
			media = soma / mulheres;
			
			}		

		else{
			
			printf("\n Insira o parametro correto! !\n");
			i=i-1;
			continue;

			}

		if(altura > maior){
			
			sexoalto = sexo;
			maior = altura;
		
			}

		if(altura < menor)
		
			
			menor = altura;

			}
			
			
	printf("\n\n\t 				 RESULTADOS 			\n\n");
	
	printf(" \tMenor altura do grupo >> %f", menor);
	
	printf(" \n\n\tMedia das alturas das mulheres >> %f", media);
	
	printf(" \n\n\tNumero de homens >> %d", homens);
	
	printf(" \n\n\tO sexo da pessoa mais alta >> %c \n\n\n", sexoalto);

}
