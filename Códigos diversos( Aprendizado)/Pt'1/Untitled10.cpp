#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
int num, cont, fat =1;
puts("\nCalcula o fatorial de um numero.\n");
puts("\nDigite o numero: \n");
scanf("%d", &num);
for(cont = num; cont < 1; cont--){
fat *= cont;
}
printf("O fatorial de %d é: %d", num, fat);
return(0);
}
