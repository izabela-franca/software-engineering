/*
Quando um livro é devolvido na Biblioteca do Unicesumar, o funcionário responsável 
pelo recebimento coloca o livro em cima de uma pilha de livros na
mesa ao lado da recepção. O auxiliar de bibliotecário pega o livro do topo
da pilha, verifica o seu código e leva-o para o seu devido local no acervo.
No atual sistema de informação, é possível verificar se o livro está disponível
ou se está emprestado. Entretanto o livro que acabou de ser devolvido ainda
não se encontra na prateleira, pois existe um intervalo de tempo entre a
devolução do mesmo e o momento em que ele é guardado na estante.
A sugestão do departamento de TI é de criar um programa que faça o controle
na pilha, assim, pode-se verificar se o livro ainda não foi guardado e qual a
sua posição dentro da pilha de livros que aguardam ao lado da recepção.


números inteiros, um para controlar o início e outro o final da pilha.
b) Defina a variável que será um vetor do tipo pilha de livros.
c) Faça uma função de empilhamento, lembrando-se de verificar se a pilha
atingiu o tamanho máximo de livros (a mesa não aguenta muito peso).
d) Crie uma função para desempilhamento de livros. Não se esqueça de que é
necessário verificar se ainda existem livros para ser guardados.
e) Elabore uma função que apresente na tela a lista de todos os livros que se
encontram empilhados ao lado da recepção.
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
		printf("A pilha está cheia, impossível empilhar.");
		system("pause");
	} else {
		printf("\n Digite o código do livro: \n");
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
		printf("A pilha está vazia, impossível desempilhar.");
		system("pause");
	} else {
		pilha.dados[pilha.fim - 1].codigo = 0;
		strcpy(pilha.dados[pilha.fim - 1].nome, "");
		strcpy(pilha.dados[pilha.fim - 1].autor, "");
		pilha.fim--;
	}
}

//Mostrando conteúdo da pilha
void pilha_mostrar() {
	int i;
	printf("[ ");
	for (i = 0; i < tamanho; i++) {
		printf("%d ", pilha.dados[i].codigo);
	}
	printf("]\n\n");
}





















