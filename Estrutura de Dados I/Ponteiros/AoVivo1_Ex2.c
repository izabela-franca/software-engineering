#include <stdio.h>

void imprimir (int *num) {
	
	printf("Idade: %d\n", *num);	//Exibe 35 (o conte�do de num)
	*num = 80;	//Altera o conte�do de num
	
}

int main(void) {
	
	int idade = 35;
	imprimir(&idade);	//endere�o da idade
	printf("Nova idade: %d\n", idade);
	
}
