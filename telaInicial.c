#include "libs/screenControl.h"


void telaInicial(){
	system("clear");

	int opcao;
	
	//Tela de apresentação inicial, e seleção de cliente ou funcionário
	printf("----------------------------------------------------------------------------------------------\n");
	printf("\n********************************** Seja bem vindo! *******************************************\n\n");
	printf("----------------------------------------------------------------------------------------------\n");
	printf("\n\n					Você é: 	\n\n\n");
	printf("			1 - Funcionário		2 - Cliente\n\n");
	printf("\n\n		(Por favor digite o numero da opção desejada.)\n");
	
	printf("\n\n\n\n");

	scanf("%d", &opcao);
	
	switch(opcao){

		case 1: telaFuncionario(); 
	}
}