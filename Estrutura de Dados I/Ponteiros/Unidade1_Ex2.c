/*
2. Uma famosa f�brica de sem�foros est� testando um novo prot�tipo, menor,
mais barato e eficiente. Foi solicitado � equipe de TI um programa em linguagem
C para fazer o teste do novo hardware. O sem�foro tem tr�s objetos, cada
um cont�m um atributo cor e outro id. Devido �s limita��es de mem�ria e processamento,
� necess�ria a cria��o de um ponteiro que vai percorrendo a mem�ria
e imprimindo o valor na tela.
	a) Crie uma estrutura que tenha dois atributos: cor (cadeia de caracteres) e id
(inteiro).
	b) Crie tr�s vari�veis com o tipo definido no item a.
	c) Crie um ponteiro do mesmo tipo.
	d) Inicialize as estruturas da seguinte forma:
		� cor vermelha, id 1.
		� cor amarela, id 2.
		� cor verde, id 3.
	e) Inicialize o ponteiro apontando para a primeira vari�vel criada.
	f ) Por meio de opera��es aritm�ticas com ponteiros, percorra a mem�ria e imprima
o valor de cada uma das vari�veis criadas nesse programa.
*/

#include <stdio.h>
#include <stdlib.h>

//Crie uma estrutura que tenha dois atributos: cor (cadeia de caracteres) e id (inteiro)
struct semaforo {
	char cor[10];
	int id;
};

//Crie tr�s vari�veis com o tipo definido no item a
struct semaforo s1 = {"vermelho", 1};
struct semaforo s2 = {"amarelo", 2};
struct semaforo s3 = {"verde", 3};

//Crie um ponteiro do mesmo tipo
struct semaforo *p;

int main() {
	
	//Inicialize o ponteiro apontando para a primeira vari�vel criada
	p = &s1;
	
	//Percorra a mem�ria e imprima o valor de cada uma das vari�veis criadas nesse programa
	printf("%d - %s \n", s1.id, s1.cor);
	printf("%d - %s \n", s2.id, s2.cor);
	printf("%d - %s \n", s3.id, s3.cor);
	
}
