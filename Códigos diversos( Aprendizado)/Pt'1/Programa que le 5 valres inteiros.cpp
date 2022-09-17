#include <stdio.h>

int main() {

	//Programa lê 5 valores inteiros e os armazena num vetor
	//A seguir exibe os elementos do vetor

	int i;
	int v[5]; //vetor de 5 elementos do tipo inteiro

	printf("Digite 5 valores inteiros\n");

	for(i = 0;i<5;i++) {	
		scanf("%d",&v[i]);
	}

	for(i = 0;i<5;i++) {
		printf("v[%d]= %d\n",i,v[i]);
	}
	
}
