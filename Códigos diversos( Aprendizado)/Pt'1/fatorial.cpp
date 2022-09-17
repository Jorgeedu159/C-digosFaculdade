#include <stdlib.h>
#include <stdio.h>

int main(){
	int fator = 5;
	int resposta = 1;
	
	for( ; fator >= 1; --fator){
		resposta *= fator;
	}
	printf("O numero fatorial e: %i\n", resposta);
}
