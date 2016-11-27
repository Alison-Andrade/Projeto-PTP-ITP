#include "telas.h"
#include "registro.h"

void verificaCliente(){
	int opcao;

	system("clear");
	
	printf("----------------------------------------------------------------------------------------------\n\n");
	printf("		SISTEMA DE GERENCIAMENTO DE COMPRAS, VENDAS E ESTOQUE\n\n");
	printf("----------------------------------------------------------------------------------------------\n\n");

	printf("----------------------------------------------------------------------------------------------\n");
	printf("\n********************************** Seja bem vindo! *******************************************\n\n");
	printf("----------------------------------------------------------------------------------------------\n");
	printf("\n\n\n		Já é nosso cliente?\n\n");
	printf("1 - Logar-se\n2 - Cadastrar-se\n\n");
	
	scanf("%d", &opcao);
	switch(opcao){
		case 1: loginCliente();
			break;
		case 2: cadastroCliente();
			break;
		case 0: telaInicial();
			break;
	}
	
}

void loginCliente(){
	long unsigned int tCPF;
	char tPass[15];
	
	printf("----------------------------------------------------------------------------------------------\n\n");
	printf("		SISTEMA DE GERENCIAMENTO DE COMPRAS, VENDAS E ESTOQUE\n\n");
	printf("----------------------------------------------------------------------------------------------\n\n");
	
	printf("Por favor insira seu CPF e sua senha.");
	printf("CPF: ");
	scanf("%lu", &tCPF);
	printf("Senha: ");
	scanf("%s", tPass);
}

void cadastroCliente(){
	system("clear");
	int add, esc;
	
	printf("----------------------------------------------------------------------------------------------\n\n");
	printf("		SISTEMA DE GERENCIAMENTO DE COMPRAS, VENDAS E ESTOQUE\n\n");
	printf("----------------------------------------------------------------------------------------------\n\n");
	
	if((CC = fopen("dbClientes.txt", "a")) == NULL){
		printf("ERRO: Impossível abrir arquivo.\n");
		exit(1);
	}
	
	for(add = 0; add<1; add++){
		printf("Faça seu cadastro\n\n");
		printf("Nome completo: ");
		scanf(" %[^\n]", tClientes[add].nome);
		printf("CPF (somente números): ");
		scanf("%lu", &tClientes[add].CPF);
		printf("Senha: ");
		scanf(" %[^\n]", tClientes[add].pass);
		printf("Data de nascimento (dd mm aaaa): ");
		scanf("%d %d %d", &tClientes[add].nasc.dia, &tClientes[add].nasc.mes, &tClientes[add].nasc.ano);
		printf("Endereço: ");
		scanf(" %[^\n]", tClientes[add].endereco);
		printf("Telefone |(99)99999-9999|: ");
		scanf(" %[^\n]", tClientes[add].cell);
		
		esc = fwrite(&tClientes[add], sizeof(Cliente), 1, CC);
		
		if(esc == 1){
			system("clear");
			printf("Cadastro realizado com sucesso.\n");
		}
		verificaCliente();
	}
}

void telaCliente(){

	int opcao;

	system("clear");
	printf("----------------------------------------------------------------------------------------------\n\n");
	printf("		SISTEMA DE GERENCIAMENTO DE COMPRAS, VENDAS E ESTOQUE\n\n");
	printf("----------------------------------------------------------------------------------------------\n\n");
	printf("----------------------------------------------------------------------------------------------\n");
	printf("\n********************************** Seja bem vindo! *******************************************\n\n");
	printf("----------------------------------------------------------------------------------------------\n");
	printf("\n\n		");
	printf("Digite o numero da operação que deseja realizar.\n");
	printf("\n 1 - Pesquisar");
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
