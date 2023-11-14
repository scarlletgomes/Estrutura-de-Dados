#ifndef FUNCTIONS.H
#define FUNCTIONS.H

#include "structs.h"

void listarEstados(){
	printf("Unidades Federativas\n");
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

void listarPrestadores() {
    int i = 0;
    printf("\nTodos os prestadores: \n");

    while (Prestador[i].nome[0] != '\0' && i < 50) {
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
	int resp;
	
	printf("\nInforme a UF que deseja para ter a lista de clientes\n\n");
	listarEstados();
	printf("Resposta: ");
	scanf("%d", &resp);
	switch (resp){
		case 1:
			if(strcmp(cliente[i].uf,"AC")==0){
				printf("%s",cliente[i].nome);
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 2:
			if(strcmp(cliente[i].uf,"AL")==0){
				printf("%s",cliente[i].nome);
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 3:
			if(strcmp(cliente[i].uf,"AP"))==0){
				printf("%s",cliente[i].nome);
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
	
		case 4:
			if(strcmp(cliente[i].uf,"AM")==0){
				printf("%s",cliente[i].nome);
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 5:
			if(strcmp(cliente[i].uf,"BA")==0){
				printf("%s",cliente[i].nome\n");
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 6:
			if(strcmp(cliente[i].uf,"CE")==0){
				printf("%s",cliente[i].nome);
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 7:
			if(strcmp(cliente[i].uf,"DF"))==0{
				printf("%s",cliente[i].nome);
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 8:
			if(strcmp(cliente[i].uf,"ES"))==0{
				printf("%s",cliente[i].nome);
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 9:
			if(strcmp(cliente[i].uf,"GO")==0){
				printf("%s",cliente[i].nome);
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 10:
			if(strcmp(cliente[i].uf,"MA")==0){
				printf("%s",cliente[i].nome);
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 11:
			if(strcmp(cliente[i].uf,"MT")==0){
				printf("%s",cliente[i].nome);
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 12:
			if(strcmp(cliente[i].uf,"MS")==0){
				printf("%s",cliente[i].nome);
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 13:
			if(strcmp(cliente[i].uf,"MG")==0){
				printf("%s",cliente[i].nome);
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 14:
			if(strcmp(cliente[i].uf,"PA")==0){
				printf("%s",cliente[i].nome);
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 15:
			if(strcmp(cliente[i].uf,"PB")==0){
				printf("%s",cliente[i].nome);
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 16:
			if(strcmp(cliente[i].uf,"PR")==0){
				printf("%s",cliente[i].nome);
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 17:
			if(strcmp(cliente[i].uf,"PE")==0){
				printf("%s",cliente[i].nome);
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 18:
			if(strcmp(cliente[i].uf,"PI")==0){
				printf("%s",cliente[i].nome);
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 19:
			if(strcmp(cliente[i].uf,"RJ")==0){
				printf("%s",cliente[i].nome);
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 20:
			if(strcmp(cliente[i].uf,"RN")==0){
				printf("%s",cliente[i].nome);
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 21:
			if(strcmp(cliente[i].uf,"RS")==0){
				printf("%s",cliente[i].nome);
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 22:
			if(strcmp(cliente[i].uf,"RO")==0){
				printf("%s"cliente[i].nome);
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 23:
			if(strcmp(cliente[i].uf,"RR")==0){
				printf("%s"cliente[i].nome);
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 24:
			if(strcmp(cliente[i].uf,"SC")==0){
				printf("%s",cliente[i].nome);
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 25:
			if(strcmp(cliente[i].uf,"SP")==0){
				printf("%s",cliente[i].nome);
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 26:
			if(strcmp(cliente[i].uf,"SE")==0){
				printf("%s",cliente[i].nome);
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
				}
		case 27:
			if(strcmp(cliente[i].uf,"TO")==0){
				printf("%s",cliente[i].nome);
				break;
			}else{
				printf("Nao ha clientes nessa UF");
				break;
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


}
#endif
