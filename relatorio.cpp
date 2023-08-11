#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//telas de relatorios - Guilherme Diniz

void relatorio();

//programa principal
int main(){
    setlocale(LC_ALL, "Portuguese");
    relatorio();
}

void relatorio(){
	int op=0, op2=0, op3=0, c=0;

//tela de menu
	printf("+-------------------------------\n|\tSeja Bem Vindo(a), Qual a sua necessidade hoje?\n");
	printf ("|\n|\t1) Escrever relatórios.\n|\t2) Ler relatórios.\n|\t3) Voltar.\n|\t4) Sair.\n");
    printf("|\n|\tDigite a opção: ");
    scanf("%d", &op);
    
//caso selecione uma opcao invalida ele reinicia
    if((op!=1)&&(op!=2)){
    		if((op!=3)&&(op!=4)){
    	printf("|\n|\tOpção invalida!");
    	system("rrelatorio.bat");
    }
	}

//voltar para o codigo anterior
	if(op==3){
	system("pim.bat");
	c=1;
	}

//sai do aplicativo
	if(op==4){
	printf("+-------------------------------\n");
    printf("|\tPrograma fechado com sucesso.\n\n");	
	system("pause");
	c=1;
	}
	
	if(op==1){
	printf("+-------------------------------\n\n");
	system("lrelatorio.bat");
	system ("pause");
	

//abre o codigo de escrever relatorios
	if(op2==1){
		system("ap.bat");
	
//abre o codigo de ler relatorios
	}if(op2==2){
	printf("+-------------------------------\n\n");
		system("ar.bat");
		system("pause");
	}
}
	if(op==2){
	printf("+-------------------------------\n\n");
	system("relatorio.bat");
	system("pause");
	}

}
