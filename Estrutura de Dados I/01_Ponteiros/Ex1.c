#include <stdio.h>

int main(void) {
	
	//Declarando um ponteiro
	int *p;
	
	//Declarando uma vari�vel
	int num = 10;
	
	//Atribuindo um endere�o ao ponteiro declarado
	p = &num;
	
	// p = conte�do de p
	// &p = endere�o de p
	// *p = conte�do apontado por p
	printf("Valor apontado por: \n p: %p \n &p:%p \n *p: %d", p, &p, *p);
	
}
