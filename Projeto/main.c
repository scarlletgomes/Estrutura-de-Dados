#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* Produto correlacionado a prestação de um serviço: Descrição, tipo de serviço, consumidor, valor do serviço, 
paramêtros utilizados para calcular o valor do serviço, prestador do serviço.

Prestador do serviço: Nome, e-mail, telefone, endereço, UF (Todas da Unidade Federativa).

Consumidor: Nome, idade, e-mail, telefone, endereço, UF (Todas da Unidade Federativa)

Serviço: Detahamento do serviço, data do serviço prestado e preço cobrado. 

Criar um menu que possibilite executar as seguintes operações:

Listar todos os tipos de serviços.
Listar todas as clientes.
Listar todos os prestadores de serviços.
Listar os clientes de um determinado estado.
Listar os prestadores serviço de um determinado tipo.
Apresentar o(s) estado(s) onde está registrado o serviço mais caro.
Listar todos os serviços em ordem crescente de valor.
Listar todos os clientes em ordem crescente de nome. */

 

int main(void) {
	
	struct cadastro_prestador{
		char nome[50];
		char email[50];
		int telefone;
		char endereco[100];
		char uf[2];
	}prestador[50];
	
	struct cadastro_cliente{
		char nome[50];
		int idade;
		char email[50];
		int telefone;
		char endereco[50];
		char uf[3];
	}cliente[50];
	
	struct cadastro_venda{
		char nome[50];
		char tipo[50]; 
		int dia;
		int mes;
		int ano;
		float imposto;
	}venda[50];
	
	struct cadastro_produto{
		char uf[3];
		float imposto;
	}produto[50];
	
	int i;

	printf ("Cadastro de prestador: \n");
	printf("Digite o nome do prestador: ");
	fflush(stdin);
	fgets(prestador[i].nome, 40, stdin); 
	
	printf("Digite o e-mail do prestador: ");
	fflush(stdin);
	fgets(prestador[i].email, 40, stdin); 
	
	printf("Digite o telefone do prestador: ");
	scanf("%d", &prestador[i].telefone);

	printf("Digite o endereco do prestador: ");
	fflush(stdin);
	fgets(prestador[i].endereco, 100, stdin); 
	
	printf("Digite a UF do prestador: ");
	fflush(stdin);
	fgets(prestador[i].uf, 3, stdin); 
		
	printf ("Cadastro de Cliente: \n");
	printf("Digite o nome do cliente: ");
	fflush(stdin);
	fgets(cliente[i].nome, 40, stdin); 
	
	printf("Digite a idade do cliente: ");
	scanf("%d", &cliente[i].idade);

	
	printf("Digite o e-mail do cliente: ");
	fflush(stdin);
	fgets(cliente[i].email, 40, stdin); 
	
	printf("Digite o telefone do cliente: ");
	scanf("%d", &cliente[i].telefone);

	printf("Digite o endereco do cliente: ");
	fflush(stdin);
	fgets(cliente[i].endereco, 100, stdin); 
	
	printf("Digite a UF do cliente: ");
	fflush(stdin);
	fgets(cliente[i].uf, 3, stdin); 
	
	
	
	return 0;
}
