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
void empilha(int elemento) {
	if(pilha.topo == tamanho) {
		printf("Filha cheia. \n");
		system("pause");
	} else {
		pilha.dados[pilha.topo] = elemento;	//o topo dos dados recebe o elemento
		pilha.topo++;
	}
}

//Pop()
void desempilha() {
	int elemento;
	if(pilha.topo == pilha.ini) {
		printf("Fila vazia. \n");
		system("pause");
	} else {
		pilha.topo--;
		elemento= pilha.dados[pilha.topo]
		return elementos;
	}
}
