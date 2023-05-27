#include <stdio.h>
#include <stdlib.h>

#define tamanho 3

struct tipo_pilha {
	int dados[tamanho];
	int ini;
	int topo;
};

struct tipo_pilha pilha;

//Push()
void empilhar(int elemento) {
	if(pilha.topo == tamanho) {
		printf("Pilha cheia. \n");
		system("pause");
	} else {
		pilha.dados[pilha.topo] = elemento;	//o topo dos dados recebe o elemento
		pilha.topo++;
	}
}

//Pop()
void desempilhar() {
	if(pilha.topo == pilha.ini) {
		printf("Pilha vazia. \n");
		system("pause");
	} else {
		pilha.dados[pilha.topo - 1] = 0;
		pilha.topo--;
	}
}

