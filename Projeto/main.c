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

void menu(){
	printf("Unidades Federativas"\n);
	printf("1. AC(Acre)");
	printf("2. AL(Alagoas)");
	printf("3. AP(Amapa)");
	printf("4. AM(Amazonas");
	printf("5. BA(Bahia)");
	printf("6. CE(Ceara)");
	printf("7. DF(Distrito Federal)");
	printf("8. ES(Espirito Santo");
	printf("9. GO(Goias)");
	printf("10. MA(Maranhao)");
	printf("11. MT(Mato Grosso)");
	printf("12. MS(Mato Grosso do Sul");
	printf("13. MG(Minas Gerais)");
	printf("14. PA(Para)");
	printf("15. PB(Paraiba)");
	printf("16. PR(Parana)");
	printf("17. PE(Pernambuco)");
	printf("18. PI(Piaui)");
	printf("19. RJ(Rio de Janeiro)");
	printf("20. RN(Rio Grande do Norte");
	printf("21. RS(Rio Grande do Sul");
	printf("22. RO(Rondonia)");
	printf("23. RR(Roraima)");
	printf("24. SC(Santa Catarina");
	printf("25. SP(Sao Paulo)");
	printf("26. SE(Sergipe");
	printf("27. TO(Tocantins");
}
 

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
	
	struct cadastro_livro{
		char uf[3];
		float imposto;	//pq imposto no cadastro_venda e aqui também? (Mariana)
		char editora[50]
		char titulo[50];
		char genero[20];
		char autor[50];
		int classificacao;
	}livro[50];
	
	int i;
	int resp;

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

	//cadastrar os produtos

	printf("\nCadastramento de produtos\n\n");
	printf("Informe o titulo do livro: ");
	fflush(stdin);
	fgets(livro[i].titulo);
	
	printf("Informe a editora do livro: ");
	fflush(stdin);
	fgets(livro[i].editora);

	printf("Informe o genero do livro: ");
	fflush(stdin);
	fgets(livro[i].genero);

	printf("Informe a classificacao do livro: ");
	scanf("%d", &livro[i].classificacao);
	
	printf("Informe o autor do livro: ");
	fflush(stdin);
	fgets(livro[i].autor);

	printf("Informe a UF do livro: ");	//fiquei na duvida dessa (Mariana)
	fflush(stdin);
	fgets(livro[i].uf);
	

	//imprimindo os prestadores
	printf("\nTodos os prestadores: \n");
	printf("Nome: %s Email: %s Telefone: %d Endereco: %s UF: %s\n", prestador[i].nome,prestador[i].email,prestador[i].telefone,prestador[i].endereco,prestador[i].uf);

	//imprimindo os clientes
	printf("\nTodos os clientes: \n");
	printf("Nome: %s Idade: %d Email: %s Telefone: %d Endereco: %s UF: %s\n", cliente[i].nome,cliente[i].idade,cliente[i].email,cliente[i].telefone,cliente[i].endereco,cliente[i].uf);

	//imprimindo os tipos de servico
	printf("\nTodos os livros: \n");
	printf("Titulo: %s Editora: %s Genero: %s classificacao: %d Autor: %s UF: %s\n", livro[i].titulo,livro[i].editora,livro[i].genero,livro[i].classificacao,livro[i].autor,livro[i].uf);
	
	//pedir clientes que compraram um livro
	//mostrar os clientes que sao de determinada uf

	printf("\nInforme a UF que deseja para ter a lista de clientes\n\n");
	menu();
	printf("Resposta: ");
	scanf("%d", &resp);
	switch (resp){
		case 1:
			if(strcmp(cliente[i].uf,AC){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 2:
			if(strcmp(cliente[i].uf,AL){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 3:
			if(strcmp(cliente[i].uf,AP){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
	
		case 4:
			if(strcmp(cliente[i].uf,AM){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 5:
			if(strcmp(cliente[i].uf,BA){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 6:
			if(strcmp(cliente[i].uf,CE){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 7:
			if(strcmp(cliente[i].uf,DF){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 8:
			if(strcmp(cliente[i].uf,ES){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 9:
			if(strcmp(cliente[i].uf,GO){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 10:
			if(strcmp(cliente[i].uf,MA){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 11:
			if(strcmp(cliente[i].uf,MT){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 12:
			if(strcmp(cliente[i].uf,MS){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 13:
			if(strcmp(cliente[i].uf,MG){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 14:
			if(strcmp(cliente[i].uf,PA){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 15:
			if(strcmp(cliente[i].uf,PB){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 16:
			if(strcmp(cliente[i].uf,PR){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 17:
			if(strcmp(cliente[i].uf,PE){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 18:
			if(strcmp(cliente[i].uf,PI){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 19:
			if(strcmp(cliente[i].uf,RJ){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 20:
			if(strcmp(cliente[i].uf,RN){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 21:
			if(strcmp(cliente[i].uf,RS){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 22:
			if(strcmp(cliente[i].uf,RO){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 23:
			if(strcmp(cliente[i].uf,RR){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 24:
			if(strcmp(cliente[i].uf,SC){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 25:
			if(strcmp(cliente[i].uf,SP){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 26:
			if(strcmp(cliente[i].uf,SE){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 27:
			if(strcmp(cliente[i].uf,TO){
				printf("cliente[i].nome");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
	}
	return 0;
}
