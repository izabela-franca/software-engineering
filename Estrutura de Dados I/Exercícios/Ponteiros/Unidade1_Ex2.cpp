/*
2. Uma famosa fábrica de semáforos está testando um novo protótipo, menor,
mais barato e eficiente. Foi solicitado à equipe de TI um programa em linguagem
C para fazer o teste do novo hardware. O semáforo tem três objetos, cada
um contém um atributo cor e outro id. Devido às limitações de memória e processamento,
é necessária a criação de um ponteiro que vai percorrendo a memória
e imprimindo o valor na tela.
	a) Crie uma estrutura que tenha dois atributos: cor (cadeia de caracteres) e id
(inteiro).
	b) Crie três variáveis com o tipo definido no item a.
	c) Crie um ponteiro do mesmo tipo.
	d) Inicialize as estruturas da seguinte forma:
		• cor vermelha, id 1.
		• cor amarela, id 2.
		• cor verde, id 3.
	e) Inicialize o ponteiro apontando para a primeira variável criada.
	f ) Por meio de operações aritméticas com ponteiros, percorra a memória e imprima
o valor de cada uma das variáveis criadas nesse programa.
*/

#include <stdio.h>
#include <stdlib.h>

//Crie uma estrutura que tenha dois atributos: cor (cadeia de caracteres) e id (inteiro)
struct semaforo {
	char cor[10];
	int id;
};

//Crie três variáveis com o tipo definido no item a
struct semaforo s1 = {"vermelho", 1};
struct semaforo s2 = {"amarelo", 2};
struct semaforo s3 = {"verde", 3};

//Crie um ponteiro do mesmo tipo
struct semaforo *p;

int main() {
	
	//Inicialize o ponteiro apontando para a primeira variável criada
	p = &s1;
	
	//Percorra a memória e imprima o valor de cada uma das variáveis criadas nesse programa
	printf("%d - %s \n", s1.id, s1.cor);
	printf("%d - %s \n", s2.id, s2.cor);
	printf("%d - %s \n", s3.id, s3.cor);
	
}
