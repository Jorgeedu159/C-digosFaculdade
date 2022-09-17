#include <stdio.h>

int main() {
  int num,        
      contador, 
      fator; 
  
  printf("\n\tCalculo do fatorial de um numero\n");
  printf("\nDigite um numero positivo: ");
  scanf("%d", &num);
  
  
  fator = 1;
  contador = 2;
  
  while (contador <= num) {
    fator = fator * contador;
    contador = contador + 1;
  }
  printf("O valor de %d!: %d\n", num, fator);
  
  
}
