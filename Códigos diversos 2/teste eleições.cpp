#include <stdio.h>

int main() {

int tot_ele, vt_b, vt_n, vt_val,p1,p2,p3;
printf("Digite a qtde de habitantes: ");
scanf("%d", &tot_ele);
printf("Digite a qtde de votos em branco: ");
scanf("%d", &vt_b);
printf("Digite a quantidade de votos nulos: ");
scanf("%d", &vt_n);
printf("Digite a qtde de votos validos: ");
scanf("%d", &vt_val);

p1=vt_b*100/tot_ele;
p2=vt_n*100/tot_ele;
p3=vt_val*100/tot_ele;

printf("Votos em branco %d porcento \n",p1);
printf("Votos nulos %d porcento \n",p2);
printf("Votos validos %d porcento \n",p3);
}    
    
