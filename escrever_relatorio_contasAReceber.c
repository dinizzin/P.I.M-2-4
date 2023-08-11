#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
  setlocale(LC_ALL, "portuguese");
  char cliente[100];
  char data[15];
  char valor[100];
  int r = 0;
// criando a variável ponteiro para o arquivo
  FILE *pont_arq;
  //abrindo o arquivo
  pont_arq = fopen("Contas a receber.txt", "a");

 
//mensagem para o usuário
  printf("O arquivo foi aberto com sucesso!\n");

//escrever no relatorio
  while (r != 1)
  {
    printf("escreva o nome, data e valor:\n");
    scanf("%s", cliente);
    scanf("%s", data);
    scanf("%s", valor);
    fprintf(pont_arq,"\n%s     %s       %s", cliente, data, valor);
    printf("deseja cadastrar mais algum contas a pagar?se sim digite 0, se nao digite 1.\n");
    scanf("%d", &r);

  }
// fechando arquivo
  fclose(pont_arq);
  
//mensagem para o usuário
  printf("O arquivo foi fechado com sucesso!");

    return 0;
}
