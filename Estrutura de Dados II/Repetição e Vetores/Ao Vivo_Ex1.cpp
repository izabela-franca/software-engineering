//Desenvolva um algoritmo que some todos os números inteiros entre 1 e 10

#include <stdio.h>


int main() {

	//Utilizando while
	int i1 = 1;
	int soma1 = 0;
	while (i1 <= 10) {
		soma1 += i1;
		i1++;
	}
	printf("Soma 1: %d \n", soma1);
	
	
	//Utilizando for
	int soma2 = 0;
	for (int i2 = 1; i2 <= 10; i2++) {
		soma2 += i2;
	}
	printf("Soma 2: %d \n", soma2);
		
	//10 números informados pelo usuário
	int i3 = 1;
	int numero;
	int soma3 = 0;
	while (i3 <= 10) {
		printf("Informe um numero:");
		scanf("%d", &numero);
		soma3 += numero;
		i3++;
	}
	printf("Soma 3: %d \n", soma3);
	
	//Inteiros de 1 a 10 armazenados em vetor
	int i4 = 0;
	int soma4 = 0;
	int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	while (i4 < 10) {
		soma4 += numeros[i4];
		i4++;
	}
	printf("Soma 4: %d \n", soma4);
	
	//10 números inteiros informados pelo usuário e armazenados em um vetor
	int i5 = 0;
	int soma5 = 0;
	int numerosU[10];
	while (i5 < 10) {
		printf("Informe um numero:");
		scanf("%d", &numerosU[i5]);
		soma5 += numeros[i5];
		i5++;
	}
	printf("Soma 5: %d \n", soma5);
}


