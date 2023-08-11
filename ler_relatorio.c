   #include <stdio.h>
  #include <stdlib.h>
  #include <locale.h>

  int main () {
    setlocale(LC_ALL, "portuguese");
    char linha[100];
    int tipoRelatorio = 0;
  // criando a variável ponteiro para o arquivo
  
    FILE *pont_arq;
  while ((tipoRelatorio != 3)&&(tipoRelatorio!=4))
  {    //Escolher o relatorio
  		printf("+-------------------------------\n");
        printf("|\tEscolha o relatorio para ler:\n");
        printf("|\n|\t1) Contas a pagar.\n|\t2) Contas a receber.\n|\t3) Voltar.\n|\t4) Sair.\n");
        printf("|\n|\tDigite a op��o: ");
        scanf("%d", &tipoRelatorio);
  
        if(tipoRelatorio == 1){//relatorio contas a pagar

        //abrindo o arquivo
            pont_arq = fopen("Contas a pagar.txt", "r");

        //teste se o aquivo foi aberto ou não
            if(pont_arq == NULL){
            printf("O arquivo não foi aberto!");
            return 0;
            }
            else{
            printf("|\n|\tO arquivo foi aberto com sucesso!\n");
  			printf("+-------------------------------\n\n");
            }
        
        //lendo o arquivo no relatorio
            while (fgets(linha, 100, pont_arq) != NULL){
                printf("%s", linha);
            }
            printf("\n");
            
            
        // fechando arquivo
            fclose(pont_arq);
            
        //mensagem para o usuário
         	printf("+-------------------------------");
            printf("\n|\tO arquivo foi fechado com sucesso!\n");
          	printf("+-------------------------------");
            printf("\n\n");

        };
        if (tipoRelatorio == 2)//relatorio contas a receber
        {
          
        //abrindo o arquivo
            pont_arq = fopen("Contas a receber.txt", "r");

        //teste se o aquivo foi aberto ou não
            if(pont_arq == NULL){
            printf("O arquivo não foi aberto!");
            return 0;
            }
            else{
            printf("|\n|\tO arquivo foi aberto com sucesso!\n");
           	printf("+-------------------------------\n\n");

            }
        
        //lendo o arquivo no relatorio
            while (fgets(linha, 100, pont_arq) != NULL){
                printf("%s", linha);
            }
            printf("\n");
            
            
        // fechando arquivo
            fclose(pont_arq);
            
        //mensagem para o usuário
           	printf("+-------------------------------\n");
            printf("|\tO arquivo foi fechado com sucesso!\n");
          	printf("+-------------------------------");
            printf("\n\n");
    }
        if(tipoRelatorio==3){
            printf("+-------------------------------\n");
        	system("rrelatorio.bat");
		}
		
        if(tipoRelatorio==4){
        printf("|\n|\tPrograma fechado com sucesso.\n");//mensagem de finalização do programa.
       	printf("+-------------------------------\n\n");
       }
    }
    system("pause");
  }
