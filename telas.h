#ifndef TELAS_H
#define TELAS_H

#include <stdio.h>
#include <stdlib.h>
#include "registro.h"

//Funções de telInicial.c
void telaInicial();

//Funções de telaFuncionario.c
void telaFuncionario();
void loginFuncionario();

//Funções de telaCliente.c 
void telaCliente();
void verificaCliente();
void loginCliente();
void cadastroCliente();

typedef struct{
	char nome[50];
	char fnome[10];
	char endereco[50];
	Data nasc;
	long unsigned int CPF;
	char pass[15];
	char cell[15];
}Cliente;

FILE *CC;

Cliente tClientes[100];
	
#endif
