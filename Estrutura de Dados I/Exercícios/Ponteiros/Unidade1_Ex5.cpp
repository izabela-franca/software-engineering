/*
Crie um programa que leia uma vari�vel e crie dois vetores din�micos, um com
o tamanho lido e outro com o dobro desse tamanho. Preencha esses vetores
respectivamente com pot�ncias de 2 e pot�ncias de 3.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Crie uma vari�vel inteira e dois ponteiros do tipo inteiro
int tamanho;
int *vetor1;
int *vetor2;

int main(void) {
	
	//Pergunte ao usu�rio o tamanho do vetor din�mico e leia esse valor na vari�vel inteira
	printf("Escolha o tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	//Aloque dinamicamente os dois vetores usando a fun��o malloc
	vetor1 = (int *) malloc(sizeof(int) * tamanho);
	vetor2 = (int *) malloc(sizeof(int) * (tamanho * 2));
	
	//Fa�a um la�o de repeti��o para preencher o primeiro vetor com pot�ncias de 2
	printf ("Vetor 1: \n");
	for (int i = 0; i < tamanho; i++) {
		vetor1[i] = pow(2, i);
		printf("Posicao %d : %d \n", i, vetor1[i]);
	}
	
	//Fa�a um segundo la�o de repeti��o para preencher o outro vetor com pot�ncias de 3
	printf("Vetor 2: \n");
	for (int i = 0; i < tamanho * 2; i++) {
		vetor2[i] = pow(3, i);
		printf("Posicao %d : %d \n", i, vetor2[i]);
	}

}
