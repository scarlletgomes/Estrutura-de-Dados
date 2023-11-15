#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include "structs.h"
#include "functions.c"

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

int main() {
	setlocale(LC_ALL, "portuguese");
	/*int i = 0, controlador=0, contInt=0;
	
	Funcionario *f;
	Cliente *c;
	Produto *l;
	








	while(controlador=!3){
		printf("Escolha uma opção:\n");
		printf("[1] Cadastros\n[2] Listagens\n[3] Sair\n\nDigite: ");
		scanf("%d",&controlador);
		system("cls");
		switch (controlador)
		{
		case 1:
			while(contInt!=4){
				printf("Escolha uma opção:\n[1] Cadastro de prestador\n[2] Cadastro de clientes\n[3] Cadastro de produtos\n[4] Sair\n\nDigite: ");
				scanf("%d",&contInt);
				system("cls");
				switch (contInt){
					case 1:
						cadastroFunc();
						printf("\n\nCadastro efetuado com sucesso, aperte qualquer tecla para prosseguir: ");
						getch();
						system("cls");
						break;
					case 2:
						//cadastroPrest();
						printf("\n\nCadastro efetuado com sucesso, aperte qualquer tecla para prosseguir: ");
						getch();
						system("cls");
						break;
					case 3:
						//cadastroProd();
						printf("\n\nCadastro efetuado com sucesso, aperte qualquer tecla para prosseguir: ");
						getch();
						system("cls");
						break;
					case 4:
						break;
					default:
						
						printf("opção Inválida, aperte qualquer tecla para prosseguir\n");
						getch();
						system("cls");

				}
			}
			contInt=0;
			break;
		case 2:
			while(contInt!=9){
				printf("Escolha uma opçao: 
				\n[1] Listar todos os tipos de serviços. 
				\n[2] Listar todas as clientes. 
				\n[3] Listar todos os prestadores de serviços.
				\n[4] Listar os clientes de um determinado estado.
				\n[5] Listar os prestadores serviço de um determinado tipo.
				\n[6] Apresentar o(s) estado(s) onde está registrado o serviço mais caro.
				\n[7] Listar todos os serviços em ordem crescente de valor.
				\n[8] Listar todos os clientes em ordem crescente de nome.
				\n[9] Sair.");
				scanf("%d",&contInt);
				system("cls");
				switch (contInt){
					case 1:
						//listarServ();
						printf("\n\nAperte qualquer tecla para prosse3guir!!");
						getch();
						system("cls");
						break;
					case 2:
						//listarClientes();
						printf("\n\nAperte qualquer tecla para prosseguir!!");
						getch();
						system("cls");
						break;
					case 3:
						//listarFunc();
						printf("\n\nAperte qualquer tecla para prosseguir!!");
						getch();
						system("cls");
						break;
					case 4:
						//listarClientesUF();

					case 5:
						//listarFuncTipo();
						printf("\n\nAperte qualquer tecla para prosseguir!!");
						getch();
						system("cls");
						break;
					case 6:
						//listarufsmaiscaras();
						printf("\n\nAperte qualquer tecla para prosseguir!!");
						getch();
						system("cls");
						break;
					case 7:
						//listarServ_valorCresc();
						printf("\n\nAperte qualquer tecla para prosseguir!!");
						getch();
						system("cls");
						break;
					case 8:
						//listarClientesCresc();
						printf("\n\nAperte qualquer tecla para prosseguir!!");
						getch();
						system("cls");
						break;
					case 9:
						break;
					default:
						printf("opção Inválida, aperte qualquer tecla para prosseguir\n");
						getch();
						system("cls");
				}
			}
			contInt=0
			break;
		default:
			printf("opção Inválida, aperte qualquer tecla para prosseguir\n");
			getch();
			system("cls");
		}
	}
	*/
/*
	printf ("Cadastro de prestador: \n");
	printf("Digite o nome do prestador: ");
	fflush(stdin);
	fgets(f[i].nome, 40, stdin); 
	
	printf("Digite o e-mail do Prestador: ");
	fflush(stdin);
	fgets(f[i].email, 40, stdin); 
	
	printf("Digite o telefone do Prestador: ");
	scanf("%d", &f[i].telefone);

	printf("Digite o endereco do Prestador: ");
	fflush(stdin);
	fgets(f[i].endereco, 100, stdin); 
	
	printf("Digite a UF do Prestador: ");
	fflush(stdin);
	fgets(f[i].uf, 3, stdin); 
		
	printf ("Cadastro de Cliente: \n");
	printf("Digite o nome do cliente: ");
	fflush(stdin);
	fgets(c[i].nome, 40, stdin); 
	
	printf("Digite a idade do Cliente: ");
	scanf("%d", &c[i].idade);

	
	printf("Digite o e-mail do Cliente: ");
	fflush(stdin);
	fgets(c[i].email, 40, stdin); 
	
	printf("Digite o telefone do Cliente: ");
	scanf("%d", &c[i].telefone);

	printf("Digite o endereco do Cliente: ");
	fflush(stdin);
	fgets(c[i].endereco, 100, stdin); 
	
	printf("Digite a UF do Cliente: ");
	fflush(stdin);
	fgets(c[i].uf, 3, stdin); 
	
	printf("\nCadastramento de produtos\n\n");
	printf("Informe o titulo do livro: ");
	fflush(stdin);
	fgets(l[i].titulo, 40, stdin);
	
	printf("Informe a editora do Livro: ");
	fflush(stdin);
	fgets(l[i].editora, 40, stdin);

	printf("Informe o genero do Livro: ");
	fflush(stdin);
	fgets(l[i].genero, 40, stdin);

	printf("Informe a classificacao do Livro: ");
	scanf("%d", &l[i].classificacao);
	
	printf("Informe o autor do Livro: ");
	fflush(stdin);
	fgets(l[i].autor, 40, stdin);
*/





    Cliente clientes[50];
    Funcionario funcionarios[50];
    int numClientes = 0;
    int numFuncionarios = 0;
    int opcao;

    do {
        // Menu principal
        printf("\n=== Menu ===\n");
        printf("1. Cadastrar Cliente\n");
        printf("2. Cadastrar Funcionário\n");
        printf("3. Listar Clientes\n");
        printf("4. Listar Funcionários\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarCliente(clientes, &numClientes);
                break;
            case 2:
                cadastrarFuncionario(funcionarios, &numFuncionarios);
                break;
            case 3:
                listarClientes(clientes, numClientes);
                break;
            case 4:
                listarFuncionarios(funcionarios, numFuncionarios);
                break;
            case 5:
                printf("Saindo do programa. Até logo!\n");
				sleep(3);
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;


}
