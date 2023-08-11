#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Tela de Login, Tela de Menu inicial com as opções para que os usuários do sistema possam encontrar as informações de cadastro e consultas e as áreas de gerenciamento. - Guilherme Diniz

void login();
void menu();
void cadastro();
void relatorios();
int opcao = 0;

//programa principal
int main(){
    setlocale(LC_ALL, "Portuguese");
    
    menu();

//usando switch case para cada opcao
	switch(opcao){
	case 1:// Telas de cadastro
	cadastro();
	break;
	
	case 2:// telas de relatorios
	relatorios();
	break;
	
	case 3:
	printf("|\n|\tPrograma fechado com sucesso!\n+-------------------------------\n\n");	
} 
    system("pause");
	return 0;
}

void menu(){
//tela de menu
	printf("+-------------------------------\n|\tSeja Bem Vindo(a) ao menu, qual a sua necessidade hoje?\n");
    printf("|\n|\t1) Telas de cadastro.\n|\t2) Telas de relatorios.\n|\t3) Sair.\n");   
    printf("|\n|\tDigite a opção: ");
    scanf("%d", &opcao); 
    
//caso digite uma opcao invalida, o aplicativo reinicia
    if((opcao!=1) && (opcao!=2) && (opcao!=3)){
	printf("|\n|\tOpção invalida!\n+-------------------------------\n");
	system("pim.bat");
	}
}

void cadastro(){
	
//abrindo o codigo sobre a tela de cadastro
    system("kaua.bat");
    printf("+-------------------------------\n");
}

void relatorios(){
	
//abrindo o codigo sobre a tela de relatorio	
	system("rrelatorio.bat");
    printf("+-------------------------------\n");
}
