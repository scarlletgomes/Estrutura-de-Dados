#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include "structs.h"
#include "functions.c"



int main() {
	setlocale(LC_ALL, "portuguese");

	Cliente clientes[50];
	Funcionario funcionarios[50];
	Produto produtos[50], strAux[200];
	struct Venda vendas[50];
	int numClientes = 0;
	int numFuncionarios = 0;
	int numProdutos = 0;
	int numVendas = 0;
	int i = 0, controlador = 0, contInt = 0, contAux=0;



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
	produtos[numProdutos++] = (Produto){16, "Midia O", 50.00, "Midia"};
	produtos[numProdutos++] = (Produto){17, "VideoGame O", 150.00, "Videogame"};


	funcionarios[numFuncionarios++] = (Funcionario){"Pedro", "pepeo@outlook.com", 11998765443, "Rua Augusta 690, Sao Paulo", "SP", "Livro"};
	funcionarios[numFuncionarios++] = (Funcionario){"Ana", "aninhaof@gmail.com", 61987654567, "QN 8C CJ 2, 19, Riacho Fundo, Brasilia", "DF", "Papelaria"};
	funcionarios[numFuncionarios++] = (Funcionario){"Luiz", "lurososa@outlook.com", 61989761234, "QR 312 CJ 34, 3, Samambaia, Brasilia", "DF","Videogame" };
	funcionarios[numFuncionarios++] = (Funcionario){"Juliana", "ju.barreto@icloud.com", 61998765443, "QR 412 CJ 7, 5, Samambaia Norte", "DF", "Livro"};
	funcionarios[numFuncionarios++] = (Funcionario){"Carla", "carlitagomez@yahoo.com", 75987679089, "Rua da Liberdade da Valentina Vitoria 567, Salvador", "BA", "Revista"};
	funcionarios[numFuncionarios++] = (Funcionario){"Larissa", "lariquinha2000@outlook.com", 21987435678, "Rua Miguel Lemos 97, Rio de Janeiro", "RJ", "Revista"};
	funcionarios[numFuncionarios++] = (Funcionario){"Luana", "lu.alvezo@gmail.com", 21998076124, "Rua Barao do Pirai 90, Rio de Janeiro", "RJ", "Videogame"};
	funcionarios[numFuncionarios++] = (Funcionario){"Jorge", "jorgelucena1998@outlook.com", 11999656547, "Av. Paulista, 1842 Bela Vista, Sao Paulo", "SP", "Midia"};


	clientes[numClientes++] = (Cliente){"Aline", 20, "aline02@gmail.com", 6198786543, "QI 11, LT 01, APTO 609", "DF"};
	clientes[numClientes++] = (Cliente){"Joana", 49, "jaoaninha@gmail.com", 11987432678, "Rua Boa Vista, 170 - Centro", "SP"};
	clientes[numClientes++] = (Cliente){"Ferdinando", 65, "ferd.souza.a@gmail.com", 7598386543, "RUA SAO SEVERINO, 367 - NOVA BRASILIA", "BA"};
	clientes[numClientes++] = (Cliente){"Luisa", 21, "luisinha2010@gmail.com", 1198745543,"RUA CONDE DE BAEPENDI, N 40", "RJ"};
	clientes[numClientes++] = (Cliente){"Juliana", 45, "juju00@gmail.com", 6198786511, "Qnd 13, LT 5", "DF"};
	clientes[numClientes++] = (Cliente){"Arlindo", 73, "arlindoat@gmail.com", 1199286543, "DOUTOR CARLOS ROBERTO QUAIO, 100", "SP"};
	clientes[numClientes++] = (Cliente){"Lucas", 37, "lucas@gmail.com", 7597786543, "RUA JOSE CARLOS ALELUIA, 121", "BA"};
	clientes[numClientes++] = (Cliente){"Flor", 18, "flor@gmail.com", 2198781143, "RUA ITAPERA, 500, LOJAS 150 E 151", "RJ"};
	clientes[numClientes++] = (Cliente){"Priscilla", 19, "pri.a.lemos02@gmail.com", 6196656543, "QSF 11, CS 414", "DF"};

	vendas[numVendas++] = (struct Venda){
        .nomeCliente = "Joana",
        .dia = 12,
        .mes = 11,
        .ano = 2023,
        .imposto = 0.17, 
        .nomeVendedor = "Jorge",
        .produtos = {{3, "Caneta C", 2.50, "Papelaria"}, {4, "Caderno D", 15.99, "Papelaria"}},
        .numProdutos = 2,
        .valorTotal = 21.63,
        .uf = "SP"
    };

	   vendas[numVendas++] = (struct Venda){
        .nomeCliente = "Aline",
        .dia = 10,
        .mes = 11,
        .ano = 2023,
        .imposto = 0.18, 
        .nomeVendedor = "Ana",
        .produtos = {{1, "Livro A", 29.99, "Livro"}, {2, "Revista B", 5.99, "Revista"}},
        .numProdutos = 2,
        .valorTotal = 42.45, 
        .uf = "DF"
    };

	 vendas[numVendas++] = (struct Venda){
        .nomeCliente = "Luisa",
        .dia = 19,
        .mes = 10,
        .ano = 2023,
        .imposto = 0.2, 
        .nomeVendedor = "Ana",
        .produtos = {{1, "Livro A", 29.99, "Livro"}, {2, "Revista B", 5.99, "Revista"}, {17, "VideoGame O", 150.00, "Videogame"}},
        .numProdutos = 2,
        .valorTotal = 223.18, 
        .uf = "RJ"
    };
	


	while (controlador != 3)
	{
		// MENU PRINCIPAL
		printf("\n=== Menu ===\n\n");

		printf("Escolha uma opcao:\n");
		printf("[1] Cadastros\n[2] Listagens\n[3] Sair\n\nDigite: ");
		scanf("%d", &controlador);
		system("cls");
		contInt = 0;
		switch (controlador)
		{
		case 1:
			// SUBMENU-CADASTROS
			while (contInt != 5)
			{
				printf("Escolha uma opcao:\n[1] Cadastro de prestador\n[2] Cadastro de clientes\n[3] Cadastro de produtos\n[4] Cadastro de vendas\n[5] Sair\n\nDigite: ");
				scanf("%d", &contInt);
				system("cls");
				switch (contInt)
				{
				case 1:
					cadastrarFuncionario(funcionarios, &numFuncionarios);
					printf("\n\nCadastro efetuado com sucesso, aperte qualquer tecla para prosseguir: \n\n");
					break;
				case 2:
					cadastrarCliente(clientes, &numClientes);
					printf("\n\nCadastro efetuado com sucesso, aperte qualquer tecla para prosseguir: \n\n");
					break;
				case 3:
					cadastrarProduto(produtos, &numProdutos);
					break;
				case 4:
					realizarVenda(clientes, funcionarios, produtos, vendas, numVendas, numClientes, numFuncionarios, numProdutos);
					printf("\n\nCadastro efetuado com sucesso, aperte qualquer tecla para prosseguir: \n\n");
					break;
				case 5:
					break;
				default:

					printf("Opcao invalida, aperte qualquer tecla para prosseguir\n\n");
				}
			}
			contInt = 0;
			break;
		case 2:
			// SUBMENU-LISTAGENS
			while (contInt != 10)
			{
				printf("Escolha uma opcao: \n[1] Listar todos os tipos de produtos.\n[2] Listar todas as clientes. \n[3] Listar todos os prestadores de servico. \n[4] Listar os clientes de um determinado estado. \n[5] Listar os prestadores de servico de um determinado tipo. \n[6] Apresentar o(s) estado(s) onde estao os registrados os servicos mais caros. \n[7] Listar todos os servicos em ordem crescente de valor. \n[8] Listar todos os clientes em ordem crescente de nome.\n[9] Listas vendas \n[10] Sair.\n");
				scanf("%d", &contInt);
				system("cls");
				switch (contInt)
				{
				case 1:
					listarProdutos(produtos, numProdutos);
					printf("\n\nAperte qualquer tecla para prosseguir!!\n\n");
					break;
				case 2:
					listarClientes(clientes, numClientes);
					printf("\n\nAperte qualquer tecla para prosseguir!!\n\n");
					break;
				case 3:
					listarFuncionarios(funcionarios, numFuncionarios);
					printf("\n\nAperte qualquer tecla para prosseguir!!\n\n");
					break;
				case 4:
                printf("Digite o estado (DF, BA, RJ ou SP): ");
                	char estado[3];
                	scanf("%s", estado);
                	listarClientesPorUF(clientes, numClientes, estado);
					break;
				case 5:
					listarPrestadoresPorDepto(funcionarios, numFuncionarios);
					break;
				case 6:
				    mostrarEstadoComVendaMaisCara(vendas, numVendas);
					break;
				case 7:
					ordenarVendasPorValorTotal(vendas, numVendas);
					break;
				case 8:
					ordenarClientesPorNome(clientes, numClientes);             
					break;
				case 9:
					listarVendas(vendas, numVendas);
					break;
				case 10:
					break;
				default:
					printf("Opcao invalida, aperte qualquer tecla para prosseguir\n\n");
				}
			}
			contInt = 0;
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