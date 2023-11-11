#include <string.h>

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
	
	typedef struct {
		char nome[50];
		char tipo[50]; 
		int dia;
		int mes;
		int ano;
		float imposto;
	} Venda;
	
	typedef struct {
		char uf[2];
		float imposto;
        float valorBase;
        float valorVenda;
	} Produto;
	

    void calculaImposto(Produto p){
        char aliquota1[6] = {"RS", "SC", "SP", "ES", "GO", "MT", "RO"};

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