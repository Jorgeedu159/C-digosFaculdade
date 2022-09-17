#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	
	float conta, saldo, saldototal, valor;
	char letra;
	
	printf("\nDigite sua conta corrente!\n numero da conta:");
	scanf("%f", &conta);

	printf("Digite seu saldo atual!\n R$: ");
	scanf("%f", &saldo);

	printf("Digite o valor da operacao!\n R$: ");
	scanf("%f", &valor);

	printf("Diga o tipo de operacao!\nD para debito C para credito!\n letra:");
	scanf("%s", &letra);
		
	if(letra == 'd' || letra == 'D')
	{
		saldototal = saldo - valor;
		
		if(saldototal < 0)
		{
			printf("\n Saldo negativo!");
			printf("\n O valor debitado foi de\n %f reais",valor);
			printf("\n O seu valor atual e de:\n %f reais",saldototal);
		}
			
		else
		{ 
			printf("\n Saldo positivo!");
			printf("\n O valor debitado foi de\n %f reais",valor);
			printf("\n O seu valor atual e de:\n %f reais",saldototal);
		}
	}
	
	if(letra =='c' || letra == 'C')
	{
		saldototal = saldo + valor;
		
		if(saldototal < 0)
		{
			printf("\n Saldo negativo!");
			printf("\n O valor depositado foi de\n %f reais", valor);
			printf("\n O seu valor Atual e de:\n %f reais", saldototal);
		}
		else
		{
			printf("\nSaldo positivo!");	
			printf("\n O valor depositado foi de\n %f reais", valor);
			printf("\n O seu valor Atual e de:\n %f reais", saldototal);	
		}
	}
}
	




