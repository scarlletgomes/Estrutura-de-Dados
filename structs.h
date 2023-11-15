#include <string.h>
#define STRUCTS_H

	typedef struct {
		char nome[50];
		char email[50];
		int telefone;
		char endereco[100];
		char uf[2];
	} Funcionario;
	
	typedef struct {
		char nome[50];
		int idade;
		char email[50];
		int telefone;
		char endereco[50];
		char uf[3];
	}Cliente;
	
	typedef struct {
		char nome[50];
		char tipo[50]; 
		int dia;
		int mes;
		int ano;
		float imposto;
	} Produto;

	typedef struct {
		char nome[50];
		char tipo[50]; 
		int dia;
		int mes;
		int ano;
		float imposto;
	} Venda;
	

	