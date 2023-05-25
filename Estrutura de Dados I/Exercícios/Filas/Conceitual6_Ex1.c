#include <stdio.h>
#include <stdlib.h>

#define tamanho 3

//Declarando uma struct
struct tipo_fila{
	int dados[tamanho];
	int ini;
	int fim;
};

//Declarando uma variável do tipo_fila
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
		elemento = fila.dados[fila.ini];	//pega o elemento que está no início e atribui à variável
		for(i = 0; i < tamanho; i++){
			fila.dados[i] = fila.dados[i+1];	//o elemento no índice i receberá o elemento do índice i+1 (da frente)
			fila.dados[fila.fim] = 0;	//o elemento do fim da fila é zerado
			fila.fim--;
			return elemento;
		}
	}
}

