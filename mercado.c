#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
// -> Somente quando utilizando Linux ou Mac #include<unistd.h>

typedef struct {
	int codigo;
	char nome[30];
	float preco;
}Produto;

typedef struct {
	Produto produto;
	int quantidade;
} Carrinho;

void infoProduto(Produto prod);
void menu();
void cadastrarProduto();
void listarProdutos();	
void visualizarCarrinho();
Produto pegarProdutoPorCodigo(int codigo);
int * temNoCarrinho(int codigo);
void fecharPedido();

static int contador_produto = 0;
static int contador_carrinho = 0;
static Carrinho carrinho[50];
static Produto produtos[50];


int main ( ) {
	setlocale(LC_ALL, "Portuguese");
	menu();	
}

void infoProduto(Produto prod){
	//falta implementar
}

void menu();
void cadastrarProduto();
void listarProdutos();	
void visualizarCarrinho();
Produto pegarProdutoPorCodigo(int codigo);
int * temNoCarrinho(int codigo);
void fecharPedido();
