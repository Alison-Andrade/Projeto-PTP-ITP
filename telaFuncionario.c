#include "telas.h"
#include "registro.h"

void telaFuncionario(){

	int opcao;

	system("clear");

	printf("----------------------------------------------------------------------------------------------\n");
	printf("\n********************************** Seja bem vindo! *******************************************\n\n");
	printf("----------------------------------------------------------------------------------------------\n");
	printf("\n\n		");
	printf("Digite o numero da operação que deseja realizar.\n");
	printf("\n 1 - Adicionar novos produtos");
	printf("\n 2 - Listar produtos");
	printf("\n 3 - ");
	printf("\n 0 - Voltar");

	printf("\n");

	scanf("%d", &opcao);

	switch(opcao){
		case 1: addProduto();
			break;
		case 2: listar();
			break;
		case 3: rmProduto();
			break;
		case 0: telaInicial();
			break;
	}

}
