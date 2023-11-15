
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
	printf("Digite o Nome do Funcionário: ");
	scanf("%s", &funcionarios[*numFuncionarios].nome);

	printf("Digite o Telefone do Funcionário: ");
	scanf("%d", &funcionarios[*numFuncionarios].telefone);

	printf("Digite o Email do Funcionário: ");
	scanf("%s", &funcionarios[*numFuncionarios].email);

	printf("Digite o Endereco do Funcionário: ");
	scanf("%s", &funcionarios[*numFuncionarios].endereco);

	printf("Digite a UF do Funcionário: ");
	scanf("%s", &funcionarios[*numFuncionarios].uf);

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
		if (strcmp(funcionarios[i].nome, nomeVendedor)==0)
		{
			return i;
		}
	}
	return -1;
}

void realizarVenda(Cliente clientes[], Funcionario funcionarios[],
				   Produto produtos[], struct Venda vendas[], int *numVendas,
				   int numClientes, int numFuncionarios, int numProdutos)
{

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

	printf("\nNome do Vendedor: ");
	char nomeVendedor[50];
	scanf("%s", nomeVendedor);
	int indiceFuncionario = buscarFuncionario(funcionarios, numFuncionarios, nomeVendedor);

	if (indiceFuncionario == -1)
	{

		printf("Funcionario nao cadastrado. Realize o cadastro primeriro!\n");
		return;
	}

	printf("Digite o numero de produtos na venda: \n");
	scanf("%d", &novaVenda.numProdutos);

	printf("Produtos disponiveis: \n");
	listarProdutos(produtos, numProdutos);

	printf("Digite os IDs dos produtos que foram vendidos: \n");
	for(int i = 0; i < novaVenda.numProdutos; i++){
		printf("Produto %d ID: ", i + 1);
        scanf("%d", &novaVenda.produtos[i].id);

		if (novaVenda.produtos[i].id < 1 || novaVenda.produtos[i].id > numProdutos) {
            printf("ID do produto inválido. A venda será cancelada.\n");
            return;
        }

		 strcpy(novaVenda.produtos[i].titulo, produtos[novaVenda.produtos[i].id - 1].titulo);
        novaVenda.produtos[i].preco = produtos[novaVenda.produtos[i].id - 1].preco;
        strcpy(novaVenda.produtos[i].tipo, produtos[novaVenda.produtos[i].id - 1].tipo);
	}

	

		

		novaVenda.valorTotal = 0.0;
    for (int i = 0; i < novaVenda.numProdutos; i++) {
        novaVenda.valorTotal += novaVenda.produtos[i].preco;
    }

	printf("Digite a data da venda (dia mes ano): ");
    scanf("%d %d %d", &novaVenda.dia, &novaVenda.mes, &novaVenda.ano);

	vendas[*numVendas] = novaVenda;
    (*numVendas)++;

	printf("\nDetalhes da Venda:\n");
    printf("Cliente: %s\n", novaVenda.nomeCliente);
    printf("Vendedor: %s\n", novaVenda.nomeVendedor);
    printf("Produtos:\n");
    for (int i = 0; i < novaVenda.numProdutos; i++) {
        printf("  Produto %d: %s, Preço: %.2f\n", novaVenda.produtos[i].id, novaVenda.produtos[i].titulo, novaVenda.produtos[i].preco);
    }
    printf("Valor Total: %.2f\n", novaVenda.valorTotal);
    printf("Data da Venda: %d/%d/%d\n", novaVenda.dia, novaVenda.mes, novaVenda.ano);

    
}

void listarClientesUF(Cliente clientes[], int numClientes)
{
	int count = 0, encontrados = 0;
	char busca[3];
	printf("Digite a sigla da UF: ");
	scanf("%s", &busca);
	system("cls");
	for (count = 0; count < numClientes; count++)
	{
		if (strcmp(busca, clientes[count].uf) == 0)
		{
			encontrados++;
			printf("Cliente %d:\n", count + 1);
			printf("Nome: %s\n", clientes[count].nome);
			printf("Idade: %d\n", clientes[count].idade);
			printf("telefone: %d\n", clientes[count].telefone);
			printf("E-mail: %s\n", clientes[count].email);
			printf("Endereco: %s\n", clientes[count].endereco);
			printf("UF: %s\n", clientes[count].uf);
			printf("\n\n");
		}
	}
	if (encontrados <= 0)
	{
		printf("Nenhum cliente encontrado!");
	}

}

/*void listarPrestadores() {
	int i = 0;
	printf("\nTodos os prestadores: \n");

	while (funcionario[i].nome != '\0' && i < 50) {
		printf("Nome: %s Email: %s Telefone: %d Endereco: %s UF: %s\n",
			   funcionario[i].nome, funcionario[i].email, funcionario[i].telefone,
			   funcionario[i].endereco, funcionario[i].uf);
		i++;
	}
}


void listarClientes(){
	int i = 0;
	while (cliente[i].nome[0] != '\0' && i < 50) {
		printf("\nTodos os clientes: \n");
		printf("Nome: %s Idade: %d Email: %s Telefone: %d Endereco: %s UF: %s\n",
		cliente[i].nome, cliente[i].idade, cliente[i].email, cliente[i].telefone,
		cliente[i].endereco, cliente[i].uf);
		i++;
	}
}

void listarLivros(){
	int i = 0;
	while (produto[i].titulo[0] != '\0' && i < 50){
		printf("\nTodos os livros: \n");
		printf("Titulo: %s Editora: %s Genero: %s classificacao: %d Autor: %s\n",
		produto[i].titulo, produto[i].editora, produto[i].genero, produto[i].classificacao, produto[i].autor);

		i++;
	}

}



void calculaImposto(Produto p){
	char aliquota1[7][2] = {"RS", "SC", "SP", "ES", "GO", "MT", "RO"};

	int i;
	for(i = 0; i < 7; i++){
		if(strcmp(aliquota1[i], p.uf) == 0){
			p.imposto = 1.17;
		}
	}
}

void calculaValorVenda(Produto p){

	calculaImposto(p);
	p.valorVenda = p.imposto * p.valorBase;


} */

/*


void listarPrestadores() {
	int i = 0;
	printf("\nTodos os prestadores: \n");

	while (funcionario[i].nome != '\0' && i < 50) {
		printf("Nome: %s Email: %s Telefone: %d Endereco: %s UF: %s\n",
			   Prestador[i].nome, Prestador[i].email, Prestador[i].telefone,
			   Prestador[i].endereco, Prestador[i].uf);
		i++;
	}
}


void listarClientes(){
	int i = 0;
	while (Cliente[i].nome[0] != '\0' && i < 50) {
		printf("\nTodos os clientes: \n");
		printf("Nome: %s Idade: %d Email: %s Telefone: %d Endereco: %s UF: %s\n",
		Cliente[i].nome, Cliente[i].idade, Cliente[i].email, Cliente[i].telefone,
		Cliente[i].endereco, Cliente[i].uf);
		i++;
	}
}

void listarLivros(){
	int i = 0;
	while (Livro[i].titulo[0] != '\0' && i < 50){
		printf("\nTodos os livros: \n");
		printf("Titulo: %s Editora: %s Genero: %s classificacao: %d Autor: %s\n",
		Livro[i].titulo, Livro[i].editora, Livro[i].genero, Livro[i].classificacao, Livro[i].autor);

		i++;
	}

}


void listarClientesPorEstado(){
	int i, resp;

	printf("\nInforme a UF que deseja para ter a lista de clientes\n\n");
	listarEstados();
	printf("Resposta: ");
	scanf("%d", &resp);

	
}
void calculaImposto(Produto p){
	char aliquota1[7][2] = {"RS", "SC", "SP", "ES", "GO", "MT", "RO"};

	int i;
	for(i = 0; i < 7; i++){
		if(strcmp(aliquota1[i], p.uf) == 0){
			p.imposto = 1.17;
		}
	}
}

void calculaValorVenda(Produto p){

	calculaImposto(p);
	p.valorVenda = p.imposto * p.valorBase;


}
*/
