#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include "structs.h"
#include "functions.c"

/*Repositorio para o projeto da disciplina de estrutura de dados 

Descricao do Projeto de Estrutura de Dados:

Produto correlacionado a prestaco de um servico: Descricao, tipo de servico, consumidor, valor do servico, parametros utilizados para calcular o valor do servico,
prestador do servico.

Prestador do servico: Nome, endereco eletronico, e-mail, telefone, endereco, UF (Todas da Unidade Federativa).

Consumidor: Nome, idade, e-mail, telefone, endereco, UF (Todas da Unidade Federativa)

Servico: Detalhamento do servico, data do servico prestado e preco cobrado. 

Criar um menu que possibilite executar as seguintes operacoes:

Listar todos os tipos de servicos.
Listar todas as clientes.
Listar todos os prestadores de servicos.
Listar os clientes de um determinado estado.
Listar os prestadores servico de um determinado tipo.
Apresentar o(s) estado(s) onde esta registrado o servico mais caro.
Listar todos os servicos em ordem crescente de valor.
Listar todos os clientes em ordem crescente de nome.*/

int main() {
	setlocale(LC_ALL, "portuguese");

	Cliente clientes[50];
    Funcionario funcionarios[50];
	Produto produtos[50];
    int numClientes = 0;
    int numFuncionarios = 0;
	int numProdutos=0;
	int numVendas = 0;
	int i = 0, controlador=0, contInt=0;

	produtos[numProdutos++] = (Produto){1, "Livro A", 29.99, "Livro"};
    produtos[numProdutos++] = (Produto){2, "Revista B", 5.99, "Revista"};
    produtos[numProdutos++] = (Produto){3, "Caneta C", 2.50, "Papelaria"};
    produtos[numProdutos++] = (Produto){4, "Caderno D", 15.99, "Papelaria"};
    produtos[numProdutos++] = (Produto){5, "Livro E", 24.99, "Livro"};
    produtos[numProdutos++] = (Produto){6, "Revista F", 4.99, "Revista"};
    produtos[numProdutos++] = (Produto){7, "Lapis G", 1.50, "Papelaria"};
    produtos[numProdutos++] = (Produto){8, "Borracha H", 1.00, "Papelaria"};
    produtos[numProdutos++] = (Produto){9, "Livro I", 19.99, "Livro"};
    produtos[numProdutos++] = (Produto){10, "Revista J", 3.99, "Revista"};
    produtos[numProdutos++] = (Produto){11, "Caneta K", 3.00, "Papelaria"};
    produtos[numProdutos++] = (Produto){12, "Caderno L", 12.99, "Papelaria"};
    produtos[numProdutos++] = (Produto){13, "Livro M", 27.99, "Livro"};
    produtos[numProdutos++] = (Produto){14, "Revista N", 6.99, "Revista"};
    produtos[numProdutos++] = (Produto){15, "Lapis O", 2.00, "Papelaria"};

	
	
	while(controlador!=3){
		//MENU PRINCIPAL
		printf("\n=== Menu ===\n\n");

		printf("Escolha uma opcao:\n");
		printf("[1] Cadastros\n[2] Listagens\n[3] Sair\n\nDigite: ");
		scanf("%d",&controlador);
		system("cls");
		contInt=0;
		switch (controlador)
		{
		case 1:
			//SUBMENU-CADASTROS
			while(contInt!=4){
				printf("Escolha uma opcao:\n[1] Cadastro de prestador\n[2] Cadastro de clientes\n[3] Cadastro de produtos\n[4] Sair\n\nDigite: ");
				scanf("%d",&contInt);
				system("cls");
				switch (contInt){
					case 1:
						cadastrarFuncionario(funcionarios, &numFuncionarios);
						printf("\n\nCadastro efetuado com sucesso, aperte qualquer tecla para prosseguir: \n\n");
						system("pause");
						system("cls");
						break;
					case 2:
						cadastrarCliente(clientes, &numClientes);
						printf("\n\nCadastro efetuado com sucesso, aperte qualquer tecla para prosseguir: \n\n");
						system("pause");
						system("cls");
						break;
					case 3:
						cadastrarProduto(produtos, &numProdutos);
						printf("\n\nCadastro efetuado com sucesso, aperte qualquer tecla para prosseguir: \n\n");
						system("pause");
						system("cls");
						break;
					case 4:
						break;
					default:
						
						printf("Opcao invalida, aperte qualquer tecla para prosseguir\n\n");
						system("pause");
						system("cls");

				}
			}
			contInt=0;
			break;
		case 2:
			//SUBMENU-LISTAGENS
			while(contInt!=9){
				printf("Escolha uma opcao: \n[1] Listar todos os tipos de produtos. \n[2] Listar todas as clientes. \n[3] Listar todos os prestadores de servico. \n[4] Listar os clientes de um determinado estado. \n[5] Listar os prestadores de servico de um determinado tipo. \n[6] Apresentar o(s) estado(s) onde estao os registrados os servicos mais caros. \n[7] Listar todos os servicos em ordem crescente de valor. \n[8] Listar todos os clientes em ordem crescente de nome. \n[9] Sair.");
				scanf("%d",&contInt);
				system("cls");
				switch (contInt){
					case 1:
						listarProdutos(produtos, numProdutos);
						printf("\n\nAperte qualquer tecla para prosseguir!!\n\n");
						system("pause");
						system("cls");
						break;
					case 2:
						listarClientes(clientes, numClientes);
						printf("\n\nAperte qualquer tecla para prosseguir!!\n\n");
						system("pause");
						system("cls");
						break;
					case 3:
						listarFuncionarios(funcionarios, numFuncionarios);
						printf("\n\nAperte qualquer tecla para prosseguir!!\n\n");
						system("pause");
						system("cls");
						break;
					case 4:
						listarClientesUF(clientes, numClientes);
						printf("\n\nAperte qualquer tecla para prosseguir!!\n\n");
						system("pause");
						system("cls");
						break;
					case 5:
						//listarFuncTipo();
						printf("\n\nAperte qualquer tecla para prosseguir!!\n\n");
						system("pause");
						system("cls");
						break;
					case 6:
						//listarufsmaiscaras();
						printf("\n\nAperte qualquer tecla para prosseguir!!\n\n");
						system("pause");
						system("cls");
						break;
					case 7:
						//listarServ_valorCresc();
						printf("\n\nAperte qualquer tecla para prosseguir!!\n\n");
						system("pause");
						system("cls");
						break;
					case 8:
						//listarClientesCresc();
						printf("\n\nAperte qualquer tecla para prosseguir!!\n\n");
						system("pause");
						system("cls");
						break;
					case 9:
						break;
					default:
						printf("Opcao invalida, aperte qualquer tecla para prosseguir\n\n");
						system("pause");
						system("cls");
				}
			}
			contInt=0;
			break;
		case 3:
			printf("Saindo do programa. Ate logo!\n");
			system("cls");
			break;
		default:
			printf("Opcao invalida, aperte qualquer tecla para prosseguir\n\n");
			system("pause");
			system("cls");
		}
	}

    return 0;
	printf("\n\n");
	system("pause");
}