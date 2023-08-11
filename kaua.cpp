#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//telas para cadastro de clientes, cadastro de funcionarios, cadastro de perfil e etc. - Kaua Castro

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    char nome1 [30], nome2 [30], nome3 [30];
    char phone1 [20], phone2 [20], phone3 [20];
    int cad, opcao = 1;
    char linha [600];
    char *resultados;

	//parte do menu
    printf("+-------------------------------\n|\tSeja Bem Vindo(a), qual a sua necessidade?\n");
    printf ("|\n|\t1) Cadastro de funcionarios.\n|\t2) Cadastro de clientes.\n|\t3) Cadastro de perfil.\n|\t4) Voltar.\n|");
    printf("\n|\tDigite a opção: ");
    scanf("%d", &cad);

    if (cad == 1){

    //abrindo arquivo e colocando a variavel no file
    FILE *file;

    file = fopen("test1.txt", "a");
    if(file == NULL) { //"null" = nao existe arquivo
    printf ("Erro na abertura do arquivo!");
    return 1;
    }

    //para repetir
    while(opcao ==1){
    	
    //salvando dados na memoria
    printf ("|\n|\tPrimeiro nome: ");
    scanf("%s",&nome1);
    fprintf (file, "%s,", nome1);

    printf ("|\tTelefone: ");
    scanf("%s", &phone1);
    fprintf (file, "%s\n", phone1);

    printf ("|\n|\tCadastro executado com sucesso!\n");

    printf ("|\n|\tDigite:\n|\t2) Ler cadastro.\n|\t1) Continuar cadastrando.\n|\t0) Fechar.\n|\n|\tDigite a opção: ");
    scanf ("%d", &opcao);
    if(opcao==0){
    printf("+-------------------------------\n");
    system("pause");
	}
    }
    fclose(file);

    file = fopen ("test1.txt", "r");

    if(file == NULL) {
    printf ("Erro na abertura do arquivo!");
    return 1;
    }
    if(opcao==2){
    	printf("|\n");
    	    printf("+-------------------------------\n");
     while (! feof(file)){
        resultados = fgets(linha, 41,file);
        if (resultados)
            printf("|\t%s", linha);
    }
}
    printf("+-------------------------------\n");
    fclose (file);
    }
    
    ////////////////////////////////////////////////////////
    ////////////////separaçao///////////////////////////////
    ////////////////////////////////////////////////////////

    if (cad == 2){
    FILE *file;

    file = fopen("test2.txt", "a");
    if(file == NULL) { //"null" = n?o existe arquivo
    printf ("Erro na abertura do arquivo!");
    return 1;
    }
    
    //para repetir
    while(opcao==1){
        	
    //salvando dados na memoria
    printf ("|\n|\tPrimeiro nome: ");
    scanf ("%s", nome2); 
    fprintf (file, "%s,", nome2);

    printf ("|\tTelefone: ");
    scanf ("%s", phone2);
    fprintf (file, "%s\n", phone2);

    printf ("|\n|\tCadastro executado com sucesso!\n");
    
    printf ("|\n|\tDigite:\n|\t2) Ler cadastro.\n|\t1) Continuar cadastrando.\n|\t0) Fechar.\n|\n|\tDigite a opção: ");
    scanf ("%d", &opcao);
    if(opcao==0){
    printf("+-------------------------------\n");
    system("pause");
	}
    }
    fclose(file);

    file = fopen ("test2.txt", "r");

    if(file == NULL) {
    printf ("Erro na abertura do arquivo!");
    return 1;
    }
    if(opcao==2){
    	printf("|\n");
    	    printf("+-------------------------------\n");
     while (! feof(file)){
        resultados = fgets(linha, 41,file);
        if (resultados)
            printf("|\t%s", linha);
    }
}
    printf("+-------------------------------\n");
    fclose (file);
	}

    ///////////////////////////////////////////////////////
    /////////////////////separaçao/////////////////////////
    ///////////////////////////////////////////////////////

    if (cad == 3) { //abrindo arquivo e colocando a variavel no file
    FILE *file;

    file = fopen("test3.txt", "a");
    if(file == NULL) { //"null" = não existe arquivo
    printf ("Erro na abertura do arquivo!");
    return 1;
    }
    
    //para repetir
    while(opcao ==1){
        	
    //salvando dados na memoria
    printf ("|\n|\tPrimeiro nome: ");
    scanf ("%s", nome3);
    fprintf (file, "%s,", nome3);

    printf ("|\tTelefone: ");
    scanf ("%s", phone3);
    fprintf (file, "%s\n", phone3);

    printf ("|\n|\tCadastro executado com sucesso!\n");
    
    printf ("|\n|\tDigite:\n|\t2) Ler cadastro.\n|\t1) Continuar cadastrando.\n|\t0) Fechar.\n|\n|\tDigite a opção: ");
    scanf ("%d", &opcao);
    if(opcao==0){
    printf("+-------------------------------\n");
    system("pause");
	}
    }
    fclose(file);

    file = fopen ("test3.txt", "r");

    if(file == NULL) {
    printf ("Erro na abertura do arquivo!");
    return 1;
    }
    if(opcao==2){
    	printf("|\n");
    	    printf("+-------------------------------\n");
     while (! feof(file)){
        resultados = fgets(linha, 41,file);
        if (resultados)
            printf("|\t%s", linha);
    }
}
    printf("+-------------------------------\n");
    fclose (file);
	}

//abrindo o codigo anterior caso opcao 4 selecionada
    if (cad == 4){
    printf("+-------------------------------\n");
    	system("pim.bat");
	}
    system("pause");
}			
