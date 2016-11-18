#include <stdio.h>

typedef struct{
	int codigo;
	char categoria[50];
	char nome[50];
	double preco;
} Produto;

int main(){
	
	FILE *db;
	
	Produto tProd[10];
	
	if((db = fopen("db.txt", "w")) == NULL){
		printf("Erro na abertura do arquivo");
	}
	
	printf("Digite nome:");
	scanf(" %[^\n]s", tProd[1].nome);
	printf("Digite categoria:");
	scanf(" %[^\n]s", tProd[1].categoria);
	tProd[1].codigo = 1;
	printf("Digite o preço:");
	scanf("%lf", &tProd[1].preco);
	
	fwrite(&tProd[1], sizeof(Produto),1, db);
	fclose(db);
	
}
