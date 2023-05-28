/*
Quando um livro � devolvido na Biblioteca do Unicesumar, o funcion�rio respons�vel 
pelo recebimento coloca o livro em cima de uma pilha de livros na
mesa ao lado da recep��o. O auxiliar de bibliotec�rio pega o livro do topo
da pilha, verifica o seu c�digo e leva-o para o seu devido local no acervo.
No atual sistema de informa��o, � poss�vel verificar se o livro est� dispon�vel
ou se est� emprestado. Entretanto o livro que acabou de ser devolvido ainda
n�o se encontra na prateleira, pois existe um intervalo de tempo entre a
devolu��o do mesmo e o momento em que ele � guardado na estante.
A sugest�o do departamento de TI � de criar um programa que fa�a o controle
na pilha, assim, pode-se verificar se o livro ainda n�o foi guardado e qual a
sua posi��o dentro da pilha de livros que aguardam ao lado da recep��o.


n�meros inteiros, um para controlar o in�cio e outro o final da pilha.
b) Defina a vari�vel que ser� um vetor do tipo pilha de livros.
c) Fa�a uma fun��o de empilhamento, lembrando-se de verificar se a pilha
atingiu o tamanho m�ximo de livros (a mesa n�o aguenta muito peso).
d) Crie uma fun��o para desempilhamento de livros. N�o se esque�a de que �
necess�rio verificar se ainda existem livros para ser guardados.
e) Elabore uma fun��o que apresente na tela a lista de todos os livros que se
encontram empilhados ao lado da recep��o.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Constantes
#define tamanho 5

//Estrutura do livro
struct tlivro {
	int codigo;
	char nome[50];
	char autor[50];
};

//Estrutura da pilha 
struct tpilha {
 struct tlivro dados[tamanho];
 int ini;
 int fim;
};

struct tpilha pilha;

//Empilhamento de livros
int empilhar(){
	if(pilha.fim == tamanho){
		printf("A pilha est� cheia, imposs�vel empilhar.");
		system("pause");
	} else {
		printf("\n Digite o c�digo do livro: \n");
		scanf("%d", &pilha.dados[pilha.fim].codigo);
		printf("\n Digite o nome do livro: \n");
		scanf("%s", &pilha.dados[pilha.fim].nome);
		printf("\n Digite o nome do autor: \n");
		scanf("%ds", &pilha.dados[pilha.fim].autor);
	}
}

//Desempilhamento de livros
int desempilhar(){
	if(pilha.ini == pilha.fim){
		printf("A pilha est� vazia, imposs�vel desempilhar.");
		system("pause");
	} else {
		pilha.dados[pilha.fim - 1].codigo = 0;
		strcpy(pilha.dados[pilha.fim - 1].nome, "");
		strcpy(pilha.dados[pilha.fim - 1].autor, "");
		pilha.fim--;
	}
}

//Mostrando conte�do da pilha
void pilha_mostrar() {
	int i;
	printf("[ ");
	for (i = 0; i < tamanho; i++) {
		printf("%d ", pilha.dados[i].codigo);
	}
	printf("]\n\n");
}





















