//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Constantes
#define tamanho 5

//Estrutura da Pilha
struct tpilha {
	int dados[tamanho];
	int ini;
	int fim;
};

//Vari�veis globais
struct tpilha pilha;
int op;

//Protipa��o
void pilha_entrar();
void pilha_sair();
void pilha_mostrar();
void menu_mostrar();

//Fun��o principal
int main(){
	setlocale(LC_ALL, "Portuguese");
	op = 1;
	pilha.ini = 0;
	pilha.fim = 0;
	while (op != 0) {
		system("cls");
		pilha_mostrar();
		menu_mostrar();
		scanf("%d", &op);
		switch (op) {
			case 1:
				pilha_entrar();
			break;
			case 2:
				pilha_sair();
			break;
		}
	}
	return(0);
}

//Adicionar um elemento no final da Pilha
void pilha_entrar(){
	if (pilha.fim == tamanho) {
		printf("\nA pilha est� cheia, imposs�vel empilhar!\n\n");
		system("pause");
	} else {
		printf("\nDigite o valor a ser empilhado: ");
		scanf("%d", &pilha.dados[pilha.fim]);
		pilha.fim++;
	}
}

//Retirar o �ltimo elemento da Pilha
void pilha_sair() {
	if (pilha.ini == pilha.fim) {
		printf("\nA pilha est� vazia, imposs�vel desempilhar!\n\n");
		system("pause");
	} else {
		pilha.dados[pilha.fim-1] = 0;
		pilha.fim--;
	}
}

//Mostrar o conte�do da Pilha
void pilha_mostrar() {
	int i;
	printf("[ ");
	for (i = 0; i < tamanho; i++) {
		printf("%d ", pilha.dados[i]);
	}
	printf("]\n\n");
}

//Mostrar o menu de op��es
void menu_mostrar() {
	printf("\nEscolha uma op��o:\n");
	printf("1 - Empilhar\n");
	printf("2 - Desempilhar\n");
	printf("0 - Sair\n\n");
}
