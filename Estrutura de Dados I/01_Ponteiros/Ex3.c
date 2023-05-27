/*
Faça um pequeno programa para testar seus conhecimentos sobre ponteiros e
alocação dinâmica na memória.
	a) Defina um ponteiro do tipo inteiro.
	b) Faça alocação dinâmica para o ponteiro recém-criado.
	c) Preencha a memória com o valor 42.
	d) Imprima o endereço do ponteiro na memória e o valor contido nele.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	//Defina um ponteiro do tipo inteiro
	int *p;
	
	//Faça alocação dinâmica par ao ponteiro recém-criado
	p = (int *) malloc(sizeof(int));
	
	//Preencha a memória com o valor 42
	*p = 42;
	
	//Imprima o endereço do ponteiro na memória e o valor contido nele
	printf("Endereco do ponteiro: %p \n Valor contido nele: %d", p, *p);
	
}
