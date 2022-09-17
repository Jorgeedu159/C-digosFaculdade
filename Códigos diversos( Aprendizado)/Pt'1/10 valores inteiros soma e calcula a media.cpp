#include <stdio.h>

int main() {

	//este programa le 10 valores e os armazena num vetor
	//a seguir calcula a média desses valores e a exibe
	int i;
	int v[10];
	int soma = 0;
	int media;
	
	printf("Digite 10 valores inteiros\n");

	for(i = 0;i<10;i++) {	
		scanf("%d",&v[i]);
	}
	
	for(i = 0;i<10;i++) {	
		
		soma = soma + v[i];
	}
	
	media = soma  / 10;
	printf("media = %d",media);
}
