#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
int num, fat;
puts("\nCalcula o fatorial de um numero.\n");
puts("\nDigite o numero: \n");
scanf("%d", &num);
if(num == '1') printf("\nO fatorial de 1 e igual a 1\n");
fat = num-1;
for(fat; fat > 1; fat--){
printf("\n%d", num*fat);
};
return(0);
}
