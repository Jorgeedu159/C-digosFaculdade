#include <stdio.h>

int main(){
	int anos, meses, dias, IdadeemDias;
	
	printf("Digite sua idade em anos   ");
	scanf("%d", &anos);
	
	IdadeemDias=anos*365+meses*30+dias;
	
	printf("Dias vividos:  %d", IdadeemDias);
	
}
