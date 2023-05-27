/*
Fa�a um pequeno programa para testar seus conhecimentos sobre ponteiros e
aloca��o din�mica na mem�ria.
	a) Defina um ponteiro do tipo inteiro.
	b) Fa�a aloca��o din�mica para o ponteiro rec�m-criado.
	c) Preencha a mem�ria com o valor 42.
	d) Imprima o endere�o do ponteiro na mem�ria e o valor contido nele.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	//Defina um ponteiro do tipo inteiro
	int *p;
	
	//Fa�a aloca��o din�mica par ao ponteiro rec�m-criado
	p = (int *) malloc(sizeof(int));
	
	//Preencha a mem�ria com o valor 42
	*p = 42;
	
	//Imprima o endere�o do ponteiro na mem�ria e o valor contido nele
	printf("Endereco do ponteiro: %p \n Valor contido nele: %d", p, *p);
	
}
