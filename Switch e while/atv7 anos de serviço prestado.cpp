#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int anoagora,anoprestado,anonascimento,tempototal;
	
	printf("Digite o ano em que voce nasceu!\n ano: ");
	scanf("%d", &anonascimento);
	
	printf("Digite o ano que voce comecou a trabalhar!\n ano: ");
	scanf("%d", &anoprestado);
	
	printf("Digite o ano de agora!\n ano: ");
	scanf("%d", &anoagora);
	
	anoprestado=anoagora-anoprestado;
	anonascimento=anoagora-anonascimento;
	
	if(anonascimento>=65&&anoprestado>=30||anonascimento>=60&&anoprestado>=25)
	{
		
		printf("Sua idade e?\n %d anos  ",anonascimento);
		printf("\nSeu tempo prestado e de\n %d anos!", anoprestado);
		printf("\n peca sua aposentadoria!\n");
	}
	
	else
	{
		printf("Sua idade e?\n %d anos!", anonascimento);
		printf("\nseu tempo prestado e de\n %d anos!  ", anoprestado);
		printf("\n Nao ha necessidade!\n");
	}
}
