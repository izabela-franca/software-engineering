#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//Declarando um ponteiro
	int *x;
	
	//Alocação dinâmica de memória
	x = malloc(sizeof(int));
	
	if(x) {
		printf("Memoria alocada com sucesso. \n");
		printf("x : %d \n", *x);
		*x = 50;	//atribuindo 50 ao conteúdo apontado por x
		printf("x : %d \n", *x);
	} else {
		printf("Erro ao alocar memoria. \n");
	}
	
}
