/*
Desenvolva um algoritmo que preencha uma matriz numérica de dimensões 3x3.
Depois de a matriz ser populada, o algoritmo deverá imprimir a matriz da seguinte forma:
	- os dados da diagonal principal devem ser impressos nornalmente
	- os dados fora da diagonal princiapal deve ser substituídos por zero
*/

#include <stdio.h>
#define TAM 3

int main() {
	
	int matriz[TAM][TAM];
	int i, j;
	
	//Lendo os dados
	for(i = 0; i < TAM; i++) {
		for(j = 0; j < TAM; j++) {
			printf ("Insira um numero: ");
			scanf("%d", &matriz[i][j]);
		}
	}
	
	//Imprimindo os dados
	for(i = 0; i < TAM; i++) {
		for(j = 0; j < TAM; j++) {
			if (i == j) {
				printf("%d ", matriz[i][j]);
			} else {
				printf("0 ");
			}
		}
		printf("\n");
	}
}
