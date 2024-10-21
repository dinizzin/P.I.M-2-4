#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/*telas de relatorios*/

void relatorio();

int main(){
    setlocale(LC_ALL, "Portuguese");
    relatorio();
    system ("pause");
}
void relatorio(){
	int op;
	
	printf("+-------------------------------\n");
	printf("|\tDeseja escrever relatorio sobre:\n|");
        printf("\n|\t1) Contas a pagar.\n|\t2) Contas a receber.\n|\t3) Voltar.\n|\t4) Sair.\n");
        printf("|\n|\tDigite a opção: ");
		scanf("%d", &op);
		
    if((op!=1)&&(op!=2) && (op!=3)&&(op!=4)){
    	printf("|\n|\tOpção invalida!");
}
    if(op==1){
    	  char fornecedor[100];
  char data[15];
  char valor[100];
  int r = 0;
// criando a variÃ¡vel ponteiro para o arquivo
  FILE *pont_arq;
  //abrindo o arquivo
  pont_arq = fopen("Contas a pagar.txt", "a");

 
//mensagem para o usuÃ¡rio
  printf("|\n|\tO arquivo foi aberto com sucesso!\n");

//escrever no relatorio
  while (r != 1)
  {
    printf("|\tEscreva o nome, data e valor:\n|\t");
    scanf("%s", fornecedor);
    scanf("%s", data);
    scanf("%s", valor);
    fprintf(pont_arq,"\n%s     %s       %s", fornecedor, data, valor);
    printf("|\n|\tDeseja cadastrar mais algum contas a pagar? Se sim digite 0, se nao digite 1: ");
    scanf("%d", &r);

  }
// fechando arquivo
  fclose(pont_arq);
  
//mensagem para o usuÃ¡rio
  printf("|\tO arquivo foi fechado com sucesso!\n");
  printf("+-------------------------------\n");
}
	if(op==2){
  char cliente[100];
  char data[15];
  char valor[100];
  int r = 0;
// criando a variÃ¡vel ponteiro para o arquivo
  FILE *pont_arq;
  //abrindo o arquivo
  pont_arq = fopen("Contas a receber.txt", "a");

 
//mensagem para o usuÃ¡rio
  printf("|\n|\tO arquivo foi aberto com sucesso!\n");

//escrever no relatorio
  while (r != 1)
  {
    printf("|\tEscreva o nome, data e valor:\n|\t");
    scanf("%s", cliente);
    scanf("%s", data);
    scanf("%s", valor);
    fprintf(pont_arq,"\n%s     %s       %s", cliente, data, valor);
    printf("|\n|\tDeseja cadastrar mais algum contas a pagar? Se sim digite 0, se nao digite 1:");
    scanf("%d", &r);

  }
// fechando arquivo
  fclose(pont_arq);
  
//mensagem para o usuÃ¡rio
  printf("O arquivo foi fechado com sucesso!");
  printf("+-------------------------------\n");
	}
	        if(op==3){
            printf("+-------------------------------\n\n");
        	system("rrelatorio.bat");
		}
		        if(op==4){
        printf("|\n|\tPrograma fechado com sucesso.\n");//mensagem de finalizaÃ§Ã£o do programa.
       	printf("+-------------------------------\n\n");
       }
}
