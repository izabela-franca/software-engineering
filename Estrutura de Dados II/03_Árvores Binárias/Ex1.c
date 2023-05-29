/*
Fa�a a implementa��o em linguagem C de uma estrutura de �rvore bin�ria
para a cria��o de uma �rvore din�mica seguindo os seguintes passos:
a) Crie um atributo para armazenar o valor do n�.
b) Crie um ponteiro para o pai.
c) Crie um ponteiro para o filho esquerdo.
d) Crie um ponteiro para o filho direito.
*/

#include <stdio.h>
#include <stdlib.h>

//Armazenando os dados do n�
struct str_no{
	char dado;
	struct str_no *pai;
	struct str_no *esq;
	struct str_no *dir;
};
