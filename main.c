#include <stdio.h>
#include <stdlib.h>
#include "structs.h"
#include "functions.h"

/* Produto correlacionado a presta��o de um servi�o: Descri��o, tipo de servi�o, consumidor, valor do servi�o, 
param�tros utilizados para calcular o valor do servi�o, prestador do servi�o.

Prestador do servi�o: Nome, e-mail, telefone, endere�o, UF (Todas da Unidade Federativa).

Consumidor: Nome, idade, e-mail, telefone, endere�o, UF (Todas da Unidade Federativa)

Servi�o: Detahamento do servi�o, data do servi�o prestado e pre�o cobrado. 

Criar um menu que possibilite executar as seguintes opera��es:

Listar todos os tipos de servi�os.
Listar todas as clientes.
Listar todos os prestadores de servi�os.
Listar os clientes de um determinado estado.
Listar os prestadores servi�o de um determinado tipo.
Apresentar o(s) estado(s) onde est� registrado o servi�o mais caro.
Listar todos os servi�os em ordem crescente de valor.
Listar todos os clientes em ordem crescente de nome. */

void main() {

	int i = 0;

	printf ("Cadastro de prestador: \n");
	printf("Digite o nome do prestador: ");
	fflush(stdin);
	fgets(Prestador[i].nome, 40, stdin); 
	
	printf("Digite o e-mail do Prestador: ");
	fflush(stdin);
	fgets(Prestador[i].email, 40, stdin); 
	
	printf("Digite o telefone do Prestador: ");
	scanf("%d", &Prestador[i].telefone);

	printf("Digite o endereco do Prestador: ");
	fflush(stdin);
	fgets(Prestador[i].endereco, 100, stdin); 
	
	printf("Digite a UF do Prestador: ");
	fflush(stdin);
	fgets(Prestador[i].uf, 3, stdin); 
		
	printf ("Cadastro de Cliente: \n");
	printf("Digite o nome do cliente: ");
	fflush(stdin);
	fgets(Cliente[i].nome, 40, stdin); 
	
	printf("Digite a idade do Cliente: ");
	scanf("%d", &Cliente[i].idade);

	
	printf("Digite o e-mail do Cliente: ");
	fflush(stdin);
	fgets(Cliente[i].email, 40, stdin); 
	
	printf("Digite o telefone do Cliente: ");
	scanf("%d", &Cliente[i].telefone);

	printf("Digite o endereco do Cliente: ");
	fflush(stdin);
	fgets(Cliente[i].endereco, 100, stdin); 
	
	printf("Digite a UF do Cliente: ");
	fflush(stdin);
	fgets(Cliente[i].uf, 3, stdin); 
	
	printf("\nCadastramento de produtos\n\n");
	printf("Informe o titulo do livro: ");
	fflush(stdin);
	fgets(Livro[i].titulo, 40, stdin);
	
	printf("Informe a editora do Livro: ");
	fflush(stdin);
	fgets(Livro[i].editora, 40, stdin);

	printf("Informe o genero do Livro: ");
	fflush(stdin);
	fgets(Livro[i].genero, 40, stdin);

	printf("Informe a classificacao do Livro: ");
	scanf("%d", &Livro[i].classificacao);
	
	printf("Informe o autor do Livro: ");
	fflush(stdin);
	fgets(Livro[i].autor, 40, stdin);
	
}
