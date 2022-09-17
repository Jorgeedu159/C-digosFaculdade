#include <stdio.h>

int main(){
	int a, b, c, x;
	
	printf("Digite os valores de a, b, c, x:  \n");
	scanf("%d %d %d %d", &a, &b, &c, &x);
	
	if(x>5){
		
		c=(a+b)*x;
		
		printf("Resultado do valor e  (x>5):\n  %d", c);
	}
	else{ 
	    c=(a-b)*2;
	    printf("Resultado do valor e  (x<5):\n   %d", c);
	}
	
}
