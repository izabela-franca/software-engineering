#include <stdio.h>

void imprimir (int *num) {
	
	printf("Idade: %d\n", *num);	//Exibe 35 (o conteúdo de num)
	*num = 80;	//Altera o conteúdo de num
	
}

int main(void) {
	
	int idade = 35;
	imprimir(&idade);	//endereço da idade
	printf("Nova idade: %d\n", idade);
	
}
