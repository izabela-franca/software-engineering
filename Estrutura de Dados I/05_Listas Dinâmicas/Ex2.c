#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Lista dinâmica em forma de filas

//Estrutura nó
typedef struct NO{
	int dado;
	struct NO* prox;
}NO;

//Estrutura fila
typedef struct FILA{
	NO* inicio;
	NO* fim;
}FILA;

//Criando variável tipo fila
FILA *f;

//Enfileirando
void enfileirar(){
	NO* ptr = (NO *) malloc(sizeof(NO));	//alocando dinamicamente
	ptr->dado =  rand()100% 	// o dado do ponteiro recebe um número aleatório
	ptr->prox = NULL
	if(f->inicio == NULL) {
		f->inicio = ptr;
	} else{
		f->fim->prox = prt;
	}
	f->fim = ptr;
}

//Desenfileirando
void desenfileirar(){
	NO* ptr = f->inicio;	
	int dado;	//criando variável local de backup
	if(ptr != NULL) {
		f->inicio = ptr->prox;
		ptr->prox = NULL;
		dado = ptr->dado;
		free(ptr);
		return dado;
	} 
}

