#ifndef REGISTRO_H
#define REGISTRO_H


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define QTD (sizeof(tProdutos)/sizeof(Produto))

//Definição de structs usadas no "banco de dados"
typedef struct {
	int dia;
	int mes;
	int ano;
}Data;

typedef struct{
	int corredor;
	int prateleira;
}Localizacao;

typedef struct{
	int codigo;
	char categoria[20];
	char nome[20];
	double preco;
	char descricao[50];
	char fabricante[30];
	Data val;
	Localizacao loc;
	int estoque;	
}Produto;

//variaveis para gerenciamento do "banco de dados"
char op;

FILE *db;
Produto tProdutos[100];

//
void inicio();
void addProduto();
void listar();
void ordenarPreco();
void ordenarNome();
void rmProduto();//Remoção de produtos.
char valida();//Verificar se usuário deseja ou não adicionar novos produtos.

#endif
