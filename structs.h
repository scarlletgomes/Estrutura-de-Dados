#ifndef STRUCTS_H
#define STRUCTS_H

#include <string.h>

typedef struct  {
	char nome[50];
	char email[50];
	int telefone;
	char endereco[100];
	char uf[3];
	char funcao[20];
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

struct Venda {
	char nomeCliente[50];
	int dia;
	int mes;
	int ano;
	float imposto;
	char nomeVendedor[20];
	Produto produtos[10];
	int numProdutos;
	float valorTotal;
	char uf[3];
	};


#endif
