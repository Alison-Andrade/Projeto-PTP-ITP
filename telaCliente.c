#include "telas.h"
#include "registro.h"

void verificaCliente(){
	int opcao;

	system("clear");

	printf("----------------------------------------------------------------------------------------------\n");
	printf("\n********************************** Seja bem vindo! *******************************************\n\n");
	printf("----------------------------------------------------------------------------------------------\n");
	printf("\n\n\n		Já é nosso cliente?\n\n");
	printf("1 - Logar-se\n2 - Cadastrar-se");
	
	scanf("%d", opcao);
	switch(opcao){
		case 1: loginCliente();
			break;
		case 2: cadastroCliente();
			break;
	}
	
}

void telaCliente(){

	int opcao;

	system("clear");

	printf("----------------------------------------------------------------------------------------------\n");
	printf("\n********************************** Seja bem vindo! *******************************************\n\n");
	printf("----------------------------------------------------------------------------------------------\n");
	printf("\n\n		");
	printf("Digite o numero da operação que deseja realizar.\n");
	printf("\n 1 - Pesquisar")
	printf("\n 2 - Adicionar produtos ao carrinho");
	printf("\n 3 - Ir para o carrinho");
	//printf("\n 3 - Remover produtos do carrinho");
	printf("\n 4 - Finalizar compra");
	printf("\n 0 - Voltar");

	printf("\n");

	/*scanf("%d", &opcao);

	switch(opcao){
		case 1: addProduto();
			break;
		case 2: listar();
			break;
		case 3: rmProduto();
			break;
		case 4: listar();
			break;
		case 0: telaInicial();
			break;
	}*/

}
