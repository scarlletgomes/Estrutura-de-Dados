#include <string.h>
#ifndef STRUCTS_H
#define STRUCTS_H

struct cadastro_prestador{
	char nome[50];
	char email[50];
	int telefone;
	char endereco[100];
	char uf[2];
} Prestador[50];

struct cadastro_cliente{
	char nome[50];
	int idade;
	char email[50];
	int telefone;
	char endereco[50];
	char uf[3];
} Cliente[50];

struct cadastro_livro{
	char titulo[50];
	char editora[50];
	char genero[50];
	int classificacao;
	char autor[50];
	
	
} Livro[50];
typedef struct {
	char nome[50];
	char tipo[50]; 
	int dia;
	int mes;
	int ano;
	float imposto;
} Venda;

typedef struct {
	char uf[2];
	float imposto;
    float valorBase;
    float valorVenda;
} Produto; 

#endif
