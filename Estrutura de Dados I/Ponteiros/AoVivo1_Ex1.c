#include <stdio.h>

int main(void) {
	
	//Declarando um ponteiro
	int *p;
	
	//Declarando uma variável
	int num = 10;
	
	//Atribuindo um endereço ao ponteiro declarado
	p = &num;
	
	// p = conteúdo de p
	// &p = endereço de p
	// *p = conteúdo apontado por p
	printf("Valor apontado por: \n p: %p \n &p:%p \n *p: %d", p, &p, *p);
	
}
