/*
Faça a implementação em linguagem C de uma estrutura de árvore binária
para a criação de uma árvore dinâmica seguindo os seguintes passos:
a) Crie um atributo para armazenar o valor do nó.
b) Crie um ponteiro para o pai.
c) Crie um ponteiro para o filho esquerdo.
d) Crie um ponteiro para o filho direito.
*/

#include <stdio.h>
#include <stdlib.h>

//Armazenando os dados do nó
struct str_no{
	char dado;
	struct str_no *pai;
	struct str_no *esq;
	struct str_no *dir;
};
