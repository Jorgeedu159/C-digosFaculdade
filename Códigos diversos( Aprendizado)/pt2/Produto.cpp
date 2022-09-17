#include <stdio.h>
#include <stdlib.h>

main () {
     int codigo[10], qdemin[10], qde[10], qdemax[10],i=0,j,aux,somatorio=0,a,cont=0,b,n;
     float preco[10];
     char nome[15][10];
     do {
     system ("cls");
     printf ("SISTEMA DE CONTROLE DE ESTOQUE\nESCOLHA SUA OPCAO PARA PROSEGUIR \n[1]Adicionar Produto \n[2]Produtos abaixo do estoque minimo\n[3]Valor de estoque para cada produto\n[4]Valor total de estoque\n");
     scanf ("%d", &a);
     switch (a) {
            case 1: system ("cls");
                    printf ("Insira o Codigo do produto:\n");
                    scanf ("%d", &codigo[i]);
                    printf ("Insira o preco do produto:\n");
                    scanf ("%f", &preco[i]);
                    printf ("Insira o nome do produto:\n");
                    scanf ("%s", &nome[cont]);
                    printf ("Insira o estoque minimo:\n");
                    scanf ("%d", &qdemin[i]);
                    printf ("Insira o estoque atual:\n");
                    scanf ("%d", &qde[i]);
                    printf ("Insira o estoque maximo:\n");
                    scanf ("%d", &qdemax[i]);
                    i=i+1;
                    cont=cont+1;
                    printf ("O que deseja fazer agora?\n[5]Voltar ao menu inicial\n[6]Fechar");
                    scanf ("%d", &b);
                    break;
            case 2: system ("cls");
                    printf ("Os produtos com codigos listados estao com estoque abaixo do minimo:\n");
                    printf ("CODIGO  ||  NOME\n");
                    if (qde[0]<qdemin[0]) {
                    printf ("%d  ||  %s\n", codigo[0],nome[0]);
                    };
                    if (qde[1]<qdemin[1]) {
                    printf ("%d  ||  %s\n", codigo[1],nome[1]);
                    };
                    if (qde[2]<qdemin[2]) {
                    printf ("%d  ||  %s\n", codigo[2],nome[2]);
                    };
                    if (qde[3]<qdemin[3]) {
                    printf ("%d  ||  %s\n", codigo[3],nome[3]);
                    };
                    if (qde[4]<qdemin[4]) {
                    printf ("%d  ||  %s\n", codigo[4],nome[4]);
                    };
                    if (qde[5]<qdemin[5]) {
                    printf ("%d  ||  %s\n", codigo[5],nome[5]);
                    };
                    if (qde[6]<qdemin[6]) {
                    printf ("%d  ||  %s\n", codigo[6],nome[6]);
                    };
                    if (qde[7]<qdemin[7]) {
                    printf ("%d  ||  %s\n", codigo[7],nome[7]);
                    };
                    if (qde[8]<qdemin[8]) {
                    printf ("%d  ||  %s\n", codigo[8],nome[8]);
                    };
                    if (qde[9]<qdemin[9]) {
                    printf ("%d  ||  %s\n", codigo[9],nome[9]);
                    };
                    printf ("O que deseja fazer agora?\n[5]Voltar ao menu inicial\n[6]Fechar");
                    scanf ("%d", &b);
                    break;
            case 3: system ("cls");
                    printf ("Quantidade em estoque de cada produto registrado\n");
                    printf ("CODIGO   ||  NOME DO PRODUTO  ||   ESTOQUE ATUAL\n");
                    for (i=0 ; i<j ; i++) {printf ("%d  ||  %s  || %d\n", codigo[i], nome[cont], qde[i]);};
                    printf ("\nO que deseja fazer agora?\n[5]Voltar ao menu inicial\n[6]Fechar");
                    scanf ("%d", &b);
                       break;
           
            };
            } while (b!=6);
system ("PAUSE");
}
 
