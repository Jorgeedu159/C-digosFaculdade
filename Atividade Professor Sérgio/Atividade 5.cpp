#include<stdio.h>
int main(){
    int num ;
   float horas, valorhoras, salario;
   scanf("%d", &num);
   scanf("%f", &horas);
   scanf("%f",&valorhoras);
   salario=valorhoras*horas;
   printf("NUMERO = %d\n", num);
   printf("SALARIO = U$ %.2f\n", salario);
}
