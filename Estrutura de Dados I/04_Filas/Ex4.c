/*
2. Uma ag�ncia banc�ria quer inovar seu atendimento, criando mais conforto
para seus clientes. Para isso, foram colocadas diversas cadeiras na recep��o
do banco. Quando um cliente chega, o atendente lan�a no computador o seu
nome e o hor�rio que chegou. Assim que um caixa fica livre, a recepcionista
olha no sistema e chama o primeiro cliente da fila. Dessa forma, � poss�vel que
os clientes esperem confortavelmente sentados pelo seu atendimento, n�o
importando o local onde se encontrem dentro da ag�ncia banc�ria.

a) Fa�a uma estrutura para o controle da fila. Voc� precisa guardar o nome e
a hora que o cliente chegou. Use um vetor para armazenar os dados e dois
n�meros inteiros, um para controlar o in�cio e outro o final da fila.
b) Defina a vari�vel que ser� um vetor do tipo fila de clientes.
c) Crie uma fun��o enfileirar, lembrando que � preciso verificar se h� espa�o
na fila (o n�mero de cadeiras na recep��o � limitado).
d) Elabore a fun��o desenfileirar cliente, n�o se esque�a de que � necess�rio
verificar se ainda existem clientes para serem atendidos.
e) Fa�a uma fun��o que apresente na tela a lista de todos os clientes que est�o
aguardando atendimento na recep��o.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Constantes
#define tamanho 5

//Estrutura do Cliente
struct tcliente {
	char nome[50];
	char hora[6];
};

//Estrutura da Fila
struct tfila {
	struct tcliente dados[tamanho];
	int ini;
	int fim;
};

//Vari�veis globais
struct tfila fila;

//Enfileirando clientes
void enfileirar(){
	if (fila.fim == tamanho) {
		printf("\nA fila est� cheia, volte outro dia!\n\n");
		system("pause");
	} else {
		printf("\nDigite o nome do cliente que chegou: ");
		scanf("%s", fila.dados[fila.fim].nome);
		printf("\nDigite a hora da chegada do cliente: ");
		scanf("%s", fila.dados[fila.fim].hora);
		fila.fim++;
	}
}

//Retirar o primeiro elemento da Fila
void desenfileirar() {
	if (fila.ini == fila.fim) {
	printf("\nFila vazia, mas logo aparece algu�m!\n\n");
	system("pause");
} else {
	int i;
	for (i = 0; i < tamanho; i++) {
		strcpy(fila.dados[i].nome, fila.dados[i+1].nome);
		strcpy(fila.dados[i].hora, fila.dados[i+1].hora);
	}
	strcpy(fila.dados[fila.fim].nome, "");
	strcpy(fila.dados[fila.fim].hora, "");
	fila.fim--;
	}
}

//Mostrar o conte�do da Fila
void fila_mostrar() {
	int i;
	printf("[ ");
	for (i = 0; i < tamanho; i++) {
		printf("Cliente %s ", fila.dados[i].nome);
		printf("chegou as %s horas \n", fila.dados[i].hora);
	}
	printf("]\n\n");
}
