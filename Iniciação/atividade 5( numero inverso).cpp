typedef struct projeto {
 char nomedoprojeto[30], descricao[150], gerente[30], prazo[10];
 int cod, status, membros, ano;
 float orcamento;
}cadprojeto;

int main(int argc, char *argv[]) {
 
 setlocale(LC_ALL,"Potuguese");
 
 int codigo, op, i, cont;
 cadprojeto dados[tam];


 op = 6;
 i = 0;
 while(op != 0){

  printf("\tMENU");
  printf("\n[1]Novo projeto:\n[2]Ver todos os projetos:\n[3]Ver projetos a fazer:\n[4]Ver projetos fazendo:\n[5]Ver projetos concluídos:\n[0]Fechar programa:\n");
  scanf("\n%d", &op);
  fflush(stdin);
     system("cls");

  if (op == 1){
      if(i <= 199){

    codigo= i+1;
    dados[i].cod = codigo ;
    printf("CODIGO %d\n", codigo);
    printf("NOME DO PROJETO: "); 
           gets(dados[i].nomedoprojeto);
           fflush(stdin);
           printf("DESCRIÇÃO DO PROJETO: ");
           gets(dados[i].descricao);
           fflush(stdin);
           printf("ANO DO PROJETO: ");
           scanf("%d", &dados[i].ano);
           fflush(stdin);
           printf("GERENTE DO PROJETO: ");
           gets(dados[i].gerente);
           fflush(stdin);
           printf("ORÇAMENTO DO PROJETO:\n");
           scanf("%f", dados[i].orcamento);
          
           fflush(stdin);
           printf("MEMBROS DO PROJETO:\n");
           scanf("%d", dados[i].membros);
           fflush(stdin);
              printf("STATUS DO PROJETO: [1]A FAZER:\n[2]FAZENDO:\n[3]CONCLUÍDO:\n");
        scanf("%d", dados[i].status);

           }

          fflush(stdin);
    system("cls");
    i++;
     }
   else{
    printf("LISTA DE PROJETOS CHEIA\n");
    system("pause");
    system("cls");
   }
   }

 return 0;
}
