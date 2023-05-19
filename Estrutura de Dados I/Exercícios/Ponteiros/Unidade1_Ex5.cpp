/*
Crie um programa que leia uma variável e crie dois vetores dinâmicos, um com
o tamanho lido e outro com o dobro desse tamanho. Preencha esses vetores
respectivamente com potências de 2 e potências de 3.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Crie uma variável inteira e dois ponteiros do tipo inteiro
int tamanho;
int *vetor1;
int *vetor2;

int main(void) {
	
	//Pergunte ao usuário o tamanho do vetor dinâmico e leia esse valor na variável inteira
	printf("Escolha o tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	//Aloque dinamicamente os dois vetores usando a função malloc
	vetor1 = (int *) malloc(sizeof(int) * tamanho);
	vetor2 = (int *) malloc(sizeof(int) * (tamanho * 2));
	
	//Faça um laço de repetição para preencher o primeiro vetor com potências de 2
	printf ("Vetor 1: \n");
	for (int i = 0; i < tamanho; i++) {
		vetor1[i] = pow(2, i);
		printf("Posicao %d : %d \n", i, vetor1[i]);
	}
	
	//Faça um segundo laço de repetição para preencher o outro vetor com potências de 3
	printf("Vetor 2: \n");
	for (int i = 0; i < tamanho * 2; i++) {
		vetor2[i] = pow(3, i);
		printf("Posicao %d : %d \n", i, vetor2[i]);
	}

}
