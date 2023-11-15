#ifndef STRUCTS_H
#define STRUCTS_H

#include <string.h>

typedef struct  {
	char nome[50];
	char email[50];
	int telefone;
	char endereco[100];
	char uf[3];
	int indice;
} Funcionario;

typedef struct {
	char nome[50];
	int idade;
	char email[50];
	int telefone;
	char endereco[50];
	char uf[3];
} Cliente;

typedef struct {
	int id;
	char titulo[50];
	float preco;
	char tipo[10];	
} Produto;

typedef struct {
	char nome[50];
	int dia;
	int mes;
	int ano;
	float imposto;
	char nomeVendedor[20];
} Venda;

#endif
// void cadastroFunc(){
// 	printf("Digite o nome do funcionário: ");
// 	scanf(" %[^\n]s",&funcionario[indice].nome);

// 	printf("Digite o email do funcionário: ");
// 	scanf(" %s",&funcionario[indice].email);

// 	printf("Digite o telefone do funcionário: ");
// 	scanf("%d",&funcionario[indice].telefone);

// 	printf("Digite o endereço do funcionário: ");
// 	scanf(" %[^\n]s",&funcionario[indice].endereco);

// 	printf("Digite o código da UF do funcionário: ");
// 	scanf(" %s",&funcionario[indice].uf);

// 	funcionario[0].indice++;
// }
