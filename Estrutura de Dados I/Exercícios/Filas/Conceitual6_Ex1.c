#include <stdio.h>
#include <stdlib.h>

#define tamanho 3

//Declarando uma struct
struct tipo_fila{
	int dados[tamanho];
	int ini;
	int fim;
};

//Declarando uma vari�vel do tipo_fila
struct tipo_fila fila;

//Enfileirar(push_back)
void enfileira(int elemento){
	if (fila.fim == tamanho){
		printf("Fila cheia. \n");
		system("pause");
	} else {
		fila.dados[fila.fim] = elemento;
		fila.fim++;
	}
}

//Desenfileirar(pop)
void desinfileira(){
	int elemento;
	if(fila.fim == fila.ini){
		printf("Fila vazia. \n");
		system("pause");
	} else {
		int i;
		elemento = fila.dados[fila.ini];	//pega o elemento que est� no in�cio e atribui � vari�vel
		for(i = 0; i < tamanho; i++){
			fila.dados[i] = fila.dados[i+1];	//o elemento no �ndice i receber� o elemento do �ndice i+1 (da frente)
			fila.dados[fila.fim] = 0;	//o elemento do fim da fila � zerado
			fila.fim--;
			return elemento;
		}
	}
}

