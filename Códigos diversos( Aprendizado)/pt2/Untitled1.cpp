#include <stdio.h>

int main()
{
/*Declaração de variaveis*/
	int quant_bi,total_dia,total_ano;
int desc;
int i=1;
int e;
	int dia, mes, ano;
	int primeira_data,segunda_data,resultado;
	for(e=1;e<=2;e++){
printf("Insira a %d data: \n", e);
printf("Dia: ");
scanf("%d", &dia);
printf("Mes: ");
scanf("%d", &mes);
printf("Ano: ");
scanf("%d", &ano);
	/*total de dias até o ano anterior ao informado*/
	quant_bi= (ano-1)/4;
total_ano= (ano-1) -quant_bi;
total_dia= quant_bi*366 + total_ano*365;
	/*Definindo a quantidade de dias que deve ser descontado
por causa de fevereiro*/
mes=mes-1;
	if (ano%4==0 && mes>=2){
        desc=1;
}
if (ano%4!=0 && mes>=2){
    desc=2;
}
else {
    desc=0;
}
	/*definindo o numero de dias que deve ser somado ao total,
de acordo com a quantidade de dias de cada mes, sendo que antes
de agosto os pares possuem 30 e depois de agosto possuem 31*/
	while (i<=mes){
        if ( (i%2==0 && i<8) || (i%2!=0 && i>=8) ){
            total_dia = total_dia+30;
        }
        if ( (i%2!=0 && i<8) || (i%2==0 && i>=8) ){
            total_dia = total_dia+31;
        }
        i++;
    }
	/*atribuindo ao total de dias a quantidade de
dias corridas no mes menos o desconto de fevereiro*/
	total_dia = total_dia -desc +dia;
	switch (e)
{
    case 1:
        primeira_data = total_dia;
        break;
    case 2:
        segunda_data = total_dia;
        break;
}
}
if(primeira_data>=segunda_data){
    resultado=primeira_data-segunda_data;
}
if(segunda_data>primeira_data){
    resultado=segunda_data-primeira_data;
}
	printf("A diferenca de dias das duas datas e: %d",resultado);
	}
	
