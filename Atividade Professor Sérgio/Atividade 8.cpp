#include <stdio.h>
int main() {

int horas,sec,min;
    
    printf("Diga quantos segunds pretende converter para tempo horario....");
    scanf("%d",&sec);
    
    horas=sec/60/60;
    min=sec/60;
    
    printf("Sao %d horas %d minutos e %d segundos",horas,min,sec);
    
   
}
