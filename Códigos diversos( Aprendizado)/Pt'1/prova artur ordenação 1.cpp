#include <stdio.h>

typedef struct registro

{ int resposta;

} t_registro;

main()

{ t_registro var_arq;
  int n, i, total=0, soma=0;
  FILE *arq;
  arq = fopen ("prova2.dat", "w+b");
  while(total < 5)
  {		printf("infome um numero:   ");
  		scanf("%d", &n);
  		for( i=1; i < n; i++)
  		{	if((n %1) ==0)
  				{
				  soma = soma + i;
				  }
				  
		  }
		  if (soma == n)
		  { var_arq.resposta = n;
		  	fwrite(&var_arq, sizeof(var_arq),1,arq);
		  }
		  total ++;
		  soma=0;
  }
}
