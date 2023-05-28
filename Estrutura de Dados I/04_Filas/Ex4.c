/*
2. Uma agência bancária quer inovar seu atendimento, criando mais conforto
para seus clientes. Para isso, foram colocadas diversas cadeiras na recepção
do banco. Quando um cliente chega, o atendente lança no computador o seu
nome e o horário que chegou. Assim que um caixa fica livre, a recepcionista
olha no sistema e chama o primeiro cliente da fila. Dessa forma, é possível que
os clientes esperem confortavelmente sentados pelo seu atendimento, não
importando o local onde se encontrem dentro da agência bancária.

a) Faça uma estrutura para o controle da fila. Você precisa guardar o nome e
a hora que o cliente chegou. Use um vetor para armazenar os dados e dois
números inteiros, um para controlar o início e outro o final da fila.
b) Defina a variável que será um vetor do tipo fila de clientes.
c) Crie uma função enfileirar, lembrando que é preciso verificar se há espaço
na fila (o número de cadeiras na recepção é limitado).
d) Elabore a função desenfileirar cliente, não se esqueça de que é necessário
verificar se ainda existem clientes para serem atendidos.
e) Faça uma função que apresente na tela a lista de todos os clientes que estão
aguardando atendimento na recepção.
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

//Variáveis globais
struct tfila fila;

//Enfileirando clientes
void enfileirar(){
	if (fila.fim == tamanho) {
		printf("\nA fila está cheia, volte outro dia!\n\n");
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
	printf("\nFila vazia, mas logo aparece alguém!\n\n");
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

//Mostrar o conteúdo da Fila
void fila_mostrar() {
	int i;
	printf("[ ");
	for (i = 0; i < tamanho; i++) {
		printf("Cliente %s ", fila.dados[i].nome);
		printf("chegou as %s horas \n", fila.dados[i].hora);
	}
	printf("]\n\n");
}
