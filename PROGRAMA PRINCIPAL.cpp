#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void login();

//programa base
int main(){
    setlocale(LC_ALL, "Portuguese");
    
    login();
    
    system("pause");
	return 0;
}

void login(){
//criando funcao de login
    char login[15] = "admxita", login1[15], senha[15] = "xita2019", senha1[15];
    int certo = 0;    

	printf("+-------------------------------\n| **Seja Bem vindo(a) a XITA**\n");
//repeticao caso login incorreto	
    while(!certo){
    printf("|\n|\tDigite o Login: ");
    scanf("%s", login1);
    printf("|\tDigite a Senha: ");
    scanf("%s", senha1);
    
//strcmp compara duas strings e devolve um valor inteiro
    if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0){
    printf("|\n|\tLogin foi concluido com sucesso!\n");
    printf("+-------------------------------\n");
    certo = 1;
//abrir a segunda parte do codigo
    system("pim.bat");
    }else
	printf("|\n|\tLogin ou Senha incorreto! Tente novamente.\n");  
	}
	
}
