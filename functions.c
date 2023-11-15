
#define FUNCTIONS_H
#define STRUCTS_H
#include "structs.h"

void cadastrarCliente(Cliente *clientes, int *numClientes)
{
	printf("Digite o Nome do Cliente: ");
	scanf("%s", clientes[*numClientes].nome);

	printf("Digite a Idade do Cliente: ");
	scanf("%d", &clientes[*numClientes].idade);

	printf("Digite o Telefone do Cliente: ");
	scanf("%d", &clientes[*numClientes].telefone);

	printf("Digite o Email do Cliente: ");
	scanf("%s", clientes[*numClientes].email);

	printf("Digite o Endereco do Cliente: ");
	scanf("%s", clientes[*numClientes].endereco);

	printf("Digite a UF do Cliente: ");
	scanf("%s", clientes[*numClientes].uf);

	(*numClientes)++;
}

void cadastrarFuncionario(Funcionario *funcionarios, int *numFuncionarios)
{
	printf("Digite o Nome do Funcionário: \n");
	scanf("%s", &funcionarios[*numFuncionarios].nome);

	printf("Digite o Telefone do Funcionário: \n");
	scanf("%d", &funcionarios[*numFuncionarios].telefone);

	printf("Digite o Email do Funcionário: \n");
	scanf("%s", &funcionarios[*numFuncionarios].email);

	printf("Digite o Endereco do Funcionário: \n");
	scanf("%s", &funcionarios[*numFuncionarios].endereco);

	printf("Digite a UF do Funcionário: \n");
	scanf("%s", &funcionarios[*numFuncionarios].uf);

	printf("Digite o Depto. do Funcionário: \n");
	scanf("%s", &funcionarios[*numFuncionarios].funcao);

	(*numFuncionarios)++;
}

void listarClientes(Cliente clientes[], int numClientes)
{
	if (numClientes == 0)
	{
		printf("Nao existem clientes cadastrados");
	}
	else
	{
		for (int i = 0; i < numClientes; i++)
		{
			printf("Cliente %d:\n", i + 1);
			printf("Nome: %s\n", clientes[i].nome);
			printf("Idade: %d\n", clientes[i].idade);
			printf("telefone: %d\n", clientes[i].telefone);
			printf("E-mail: %s\n", clientes[i].email);
			printf("Endereco: %s\n", clientes[i].endereco);
			printf("UF: %s\n", clientes[i].uf);
		}
	}
}

void listarFuncionarios(Funcionario funcionarios[], int numFuncionarios)
{
	if (numFuncionarios == 0)
	{
		printf("Nao existem funcionarios cadastrados");
	}
	else
	{
		for (int i = 0; i < numFuncionarios; i++)
		{
			printf("Funcionario %d:\n", i + 1);
			printf("Nome: %s\n", funcionarios[i].nome);
			printf("Email: %s\n", funcionarios[i].email);
			printf("Telefone: %d\n", funcionarios[i].telefone);
			printf("Endereco: %s\n", funcionarios[i].endereco);
			printf("UF: %s\n", funcionarios[i].uf);
			printf("Depto: %s", funcionarios[i].funcao);
		}
	}
}

void cadastrarProduto(Produto produtos[], int *numProdutos)
{
	printf("Digite o Nome do Produto");
	scanf("%s", &produtos[*numProdutos].titulo);

	printf("Digite o Tipo do Produto");
	scanf("%s", &produtos[*numProdutos].tipo);

	printf("DIgite o Preco do Produto");
	scanf("%f", &produtos[*numProdutos].preco);

	(*numProdutos++);
}

void listarProdutos(Produto produtos[], int numProdutos)
{

	printf("\n=== Lista de Produtos ===\n");
	for (int i = 0; i < numProdutos; i++)
	{

		printf("Produto %d: \n", i + 1);
		printf("Produto: %d \n", produtos[i].id);
		printf("Produto: %s \n", produtos[i].titulo);
		printf("Preco: %f \n", produtos[i].preco);
		printf("Tipo: %s\n", produtos[i].tipo);
	}
}

int buscarCliente(Cliente clientes[], int numClientes, char nomeCliente[])
{

	for (int i = 0; i < numClientes; i++)
	{
		if (strcmp(clientes[i].nome, nomeCliente) == 0)
		{
			return i;
		}
	}
	return -1;
}

int buscarFuncionario(Funcionario funcionarios[], int numFuncionarios, char nomeVendedor[])
{
	for (int i = 0; i < numFuncionarios; i++)
	{
		if (strcmp(funcionarios[i].nome, nomeVendedor) == 0)
		{
			return i;
		}
	}
	return -1;
}

void ordenarClientesPorNome(Cliente clientes[], int numClientes){
	for (int i = 0; i < numClientes - 1; i++) {
        int indiceMenor = i;
        for (int j = i + 1; j < numClientes; j++) {
            if (strcmp(clientes[j].nome, clientes[indiceMenor].nome) < 0) {
                indiceMenor = j;
            }
        }
      
        if (indiceMenor != i) {
            Cliente temp = clientes[i];
            clientes[i] = clientes[indiceMenor];
            clientes[indiceMenor] = temp;
        }
    }

	printf("\n=== CLIENTES ORDENADOS DE FORMA ASCESNTE ALFABETICA ===\n\n");
	for(int k =0; k < numClientes; k++){
		printf("\nNome: %s   E-mail: %s   UF: %s\n", clientes[k].nome, clientes[k].email, clientes[k].uf);
	}
	printf("\n\n");
}

float retornaImpostoUF(char uf[3])
{
	float imposto = 0;
	if (strcmp(uf, "BA"))
	{
		imposto = 0.19;
	}
	else if (strcmp(uf, "RJ"))
	{
		imposto = 0.2;
	}
	else if (strcmp(uf, "SP"))
	{
		imposto = 0.17;
	}
	else if (strcmp(uf, "DF"))
	{
		imposto = 0.18;
	}
	else
	{
		printf("UF invalida\n\n");
	}
	return imposto;
}

float calculaImposto(Cliente cliente, float valorVenda)
{
	if (strcmp(cliente.uf, "DF") == 0)
	{
		valorVenda = valorVenda * 1.18;
	}
	else if (strcmp(cliente.uf, "RJ"))
	{
		valorVenda = valorVenda * 1.2;
	}
	else if (strcmp(cliente.uf, "BA"))
	{
		valorVenda = valorVenda * 1.19;
	}
	else if (strcmp(cliente.uf, "SP"))
	{
		valorVenda = valorVenda * 1.17;
	}
	else
	{
		printf("UF nao encontrada\n");
	}

	return valorVenda;
}

void realizarVenda(Cliente clientes[], Funcionario funcionarios[],
				   Produto produtos[], struct Venda vendas[], int numVendas,
				   int numClientes, int numFuncionarios, int numProdutos)
{
	printf("\n=== PAINEL DE REALIZACAO DE VENDAS ===\n");
	struct Venda novaVenda;

	printf("Digite o nome do Cliente ");
	char nomeCliente[50];
	scanf("%s", nomeCliente);
	int indiceCliente = buscarCliente(clientes, numClientes, nomeCliente);

	if (indiceCliente == -1)
	{

		printf("Cliente nao cadastrado. Realize o cadastro primeriro!\n");
		return;
	}

	strcpy(novaVenda.nomeCliente, clientes[indiceCliente].nome);
	strcpy(novaVenda.uf, clientes[indiceCliente].uf);

	printf("\nNome do Vendedor: ");
	char nomeVendedor[50];
	scanf("%s", nomeVendedor);
	int indiceFuncionario = buscarFuncionario(funcionarios, numFuncionarios, nomeVendedor);

	if (indiceFuncionario == -1)
	{

		printf("Funcionario nao cadastrado. Realize o cadastro primeriro!\n");
		return;
	}

	strcpy(novaVenda.nomeVendedor, funcionarios[indiceFuncionario].nome);

	printf("Digite o numero de produtos na venda: \n");
	scanf("%d", &novaVenda.numProdutos);

	printf("Produtos disponiveis: \n");
	listarProdutos(produtos, numProdutos);

	printf("Digite os IDs dos produtos que foram vendidos: \n");
	for (int i = 0; i < novaVenda.numProdutos; i++)
	{
		printf("Produto %d ID: ", i + 1);
		scanf("%d", &novaVenda.produtos[i].id);

		if (novaVenda.produtos[i].id < 1 || novaVenda.produtos[i].id > numProdutos)
		{
			printf("ID do produto inválido. A venda será cancelada.\n");
			return;
		}

		strcpy(novaVenda.produtos[i].titulo, produtos[novaVenda.produtos[i].id - 1].titulo);
		novaVenda.produtos[i].preco = produtos[novaVenda.produtos[i].id - 1].preco;
		strcpy(novaVenda.produtos[i].tipo, produtos[novaVenda.produtos[i].id - 1].tipo);
	}

	novaVenda.valorTotal = 0.0;
	for (int i = 0; i < novaVenda.numProdutos; i++)
	{
		novaVenda.valorTotal += novaVenda.produtos[i].preco;
	}

	printf("Valor da venda sem impostos: %f\n", novaVenda.valorTotal);

	novaVenda.valorTotal = calculaImposto(clientes[indiceCliente], novaVenda.valorTotal);

	printf("Valor da venda com impostos para o estado de %s: %f\n", clientes[indiceCliente].uf, novaVenda.valorTotal);

	printf("Digite a dia da venda: ");
	scanf("%d", &novaVenda.dia);

	printf("Digite o mes da venda: ");
	scanf("%d", &novaVenda.mes);

	printf("Digite a ano da venda: ");
	scanf("%d", &novaVenda.ano);

	novaVenda.imposto = retornaImpostoUF(clientes[indiceCliente].uf);
	vendas[numVendas] = novaVenda;
	(numVendas)++;

	printf("\n=== DETALHE DA VENDA ===\n");
	printf("Cliente: %s\n", novaVenda.nomeCliente);
	printf("Vendedor: %s\n", novaVenda.nomeVendedor);
	printf("UF: %s\n", novaVenda.uf);
	printf("Produtos:\n");
	for (int i = 0; i < novaVenda.numProdutos; i++)
	{
		printf("  Produto %d: %s, Preço: %.2f\n", novaVenda.produtos[i].id, novaVenda.produtos[i].titulo, novaVenda.produtos[i].preco);
	}
	printf("Valor Total: %.2f\n", novaVenda.valorTotal);
	printf("Valor imposto: %f Porcento\n", (novaVenda.imposto*100));
	printf("Data da Venda: %d/%d/%d\n", novaVenda.dia, novaVenda.mes, novaVenda.ano);
}

void listarVendas(struct Venda vendas[], int numVendas)
{
	printf("\n=== LISTA DE VENDA ===\n");
	for (int i = 0; i < numVendas; i++)
	{
		printf("Venda %d:\n", i + 1);
		printf("Cliente: %s\n", vendas[i].nomeCliente);
		printf("Vendedor: %s\n", vendas[i].nomeVendedor);
		printf("Produtos:\n");
		for (int j = 0; j < vendas[i].numProdutos; j++)
		{
			printf("  Produto %d: %s, Preço: %.2f\n", vendas[i].produtos[j].id, vendas[i].produtos[j].titulo, vendas[i].produtos[j].preco);
		}
		printf("Valor Total: %.2f\n", vendas[i].valorTotal);
		printf("Valor Imposto: %f\n", vendas[i].imposto*100);
		
		printf("Data da Venda: %d/%d/%d\n", vendas[i].dia, vendas[i].mes, vendas[i].ano);
		printf("\n");
	}
}

void listarClientesPorUF(Cliente clientes[], int numClientes, char estado[])
{
	printf("\n=== CLIENTES DO ESTADO %s ===\n", estado);
	for (int i = 0; i < numClientes; i++)
	{
		if (strcmp(clientes[i].uf, estado) == 0)
		{
			printf("Cliente %d:\n", i + 1);
			printf("Nome: %s\n", clientes[i].nome);
			printf("Idade: %d\n", clientes[i].idade);
			printf("Email: %s\n", clientes[i].email);
			printf("Telefone: %d\n", clientes[i].telefone);
			printf("Endereço: %s\n", clientes[i].endereco);
			printf("UF: %s\n", clientes[i].uf);
			printf("\n");
		}
	}
}

void mostrarEstadoComVendaMaisCara(struct Venda vendas[], int numVendas)
{
	float valor = 0;
	char uf[3];

	for (int i = 0; i < numVendas; i++)
	{
		if (vendas[i].valorTotal > valor)
		{
			valor = vendas[i].valorTotal;
			strcpy(uf, vendas[i].uf);
		}
	}
	printf("=== VENDA DE MAIOR VALOR ===\n");
	printf("UF: %s\n", uf);
	printf("Valor Total da Venda: %.2f\n", valor);
}

void listarPrestadoresPorDepto(Funcionario funcionarios[], int numFuncionarios)
{

	printf("DEPTO DE REVISTAS\n");
	for (int i = 0; i < numFuncionarios; i++)
	{
		if (strcmp(funcionarios[i].funcao, "Revista") == 0)
		{
			printf("Nome: %s   Departamento: %s\n", funcionarios[i].nome, funcionarios[i].funcao);
		}
	}
	printf("DEPTO DE MIDIA\n");
	for (int i = 0; i < numFuncionarios; i++)
	{
		if (strcmp(funcionarios[i].funcao, "Midia") == 0)
		{
			printf("Nome: %s   Departamento: %s\n", funcionarios[i].nome, funcionarios[i].funcao);
		}
	}

	printf("DEPTO DE PAPELARIA\n");
	for (int i = 0; i < numFuncionarios; i++)
	{
		if (strcmp(funcionarios[i].funcao, "Papelaria") == 0)
		{
			printf("Nome: %s   Departamento: %s\n", funcionarios[i].nome, funcionarios[i].funcao);
		}
	}

	printf("DEPTO DE LIVROS\n");
	for (int i = 0; i < numFuncionarios; i++)
	{
		if (strcmp(funcionarios[i].funcao, "Livro") == 0)
		{
			printf("Nome: %s   Departamento: %s\n", funcionarios[i].nome, funcionarios[i].funcao);
		}
	}

	printf("DEPTO DE VIDEOGAMES\n");
	for (int i = 0; i < numFuncionarios; i++)
	{
		if (strcmp(funcionarios[i].funcao, "Videogame") == 0)
		{
			printf("Nome: %s   Departamento: %s\n", funcionarios[i].nome, funcionarios[i].funcao);
		}
	}
}

void ordenarVendasPorValorTotal(struct Venda vendas[], int numVendas){
	for(int i = 0; i < numVendas -1; i++){
		int indiceMaior = i;
		for(int j = i + 1; j < numVendas; j++){
			if(vendas[j].valorTotal < vendas[indiceMaior].valorTotal){
				indiceMaior = j;
			}
		}

		if(indiceMaior != i){
			struct Venda temp = vendas[i];
			vendas[i] = vendas[indiceMaior];
			vendas[indiceMaior] = temp;
		}
	}

	printf("=== VENDAS ORDENADAS DE FORMA ASCENDENTE PELO VALOR TOTAL ===\n");
	for(int k = 0; k < numVendas; k++){
		printf("\nProduto %d: \nNome do cliente: %s \nVendedor: %s \nValor: R$ %.2f\nData%d/%d/%d\nImposto: %.2f Porcento\nUF: %s\n\n",k+1, vendas[k].nomeCliente, vendas[k].nomeVendedor, vendas[k].valorTotal, vendas[k].dia, vendas[k].mes, vendas[k].ano, (vendas[k].imposto*100), vendas[k].uf);
	
	}
}