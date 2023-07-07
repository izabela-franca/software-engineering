//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

//Constantes
#define tamanho 10

//Variáveis
int lista[tamanho];
int ordenado[tamanho];
int opt=-1;
int qtd;

//Prototipação
void menu_mostrar(void);
void lista_mostrar(void);
void lista_gerar(void);
void lista_ler(void);
void lista_limpar(void);
void ordenado_limpar(void);
void lista_mostrar_ordenado(void);
int bubbleSort(int vec[], int tam);
void troca(int* a, int* b);
int selectionSort(int vec[], int tam);
int mergeSort(int vec[], int tam, int qtd);
void junta(int vec[], int tam);
int heapifica(int vec[], int tam, int i);
int constroiHeap(int vec[], int tam);
int heapSort(int vec[], int tam);
int quickSort(int vec[], int left, int right, int qtd);
int particiona(int vec[], int left, int right);
int insertionSort(int vec[], int tam);

//Função Principal
int main(void){
	setlocale(LC_ALL, "");
	srand(time(NULL));
	do {
		system("cls");
		lista_mostrar();
		lista_mostrar_ordenado();
		lista_limpar();
		qtd=0;
		menu_mostrar();
		scanf("%d",&opt);
		switch (opt){
			case 1:
				lista_gerar();
				ordenado_limpar();
				break;
			case 2:
				lista_ler();
				ordenado_limpar();
				break;
			case 3:
				qtd = bubbleSort(ordenado, tamanho);
				break;
			case 4:
				qtd = selectionSort(ordenado, tamanho);
				break;
			case 5:
				qtd = insertionSort(ordenado, tamanho);
				break;
			case 6:
				qtd = mergeSort(ordenado, tamanho, qtd);
				break;
			case 7:
				qtd = heapSort(ordenado, tamanho);
				break;
			case 8:
				qtd = quickSort(ordenado, 0, tamanho-1, qtd);
				break;
			default:
				if(opt != 0){
					printf("Opção inválida.\n");
					system("pause");
				}
				break;
		}
	}while(opt!=0);
	system("pause");
	return(0);
}

void lista_mostrar(void){
	int i;
	printf("[ ");
	for (i = 0; i < tamanho; i++ ){
		printf("%d ",lista[i]);
	}
	printf("]\n\n");
}

//Mostra o menu
void menu_mostrar(void){
	printf("1 - Gerar lista aleatoriamente\n");
	printf("2 - Criar lista manualmente\n");
	printf("3 - Ordenar com BubbleSort\n");
	printf("4 - Ordenar com SelectionSort\n");
	printf("5 - Ordenar com InsertionSort\n");
	printf("6 - Ordenar com MergeSort\n");
	printf("7 - Ordenar com HeapSort\n");
	printf("8 - Ordenar com QuickSort\n");
	printf("0 - Sair...\n\n");
}

//Gera uma lista aleatória
void lista_gerar(void){
	int i;
	for (i = 0; i < tamanho; i++){
		lista[i] = rand()%50;
	}
}

//Mostra o conteúdo da lista
//Permite que o usuário entre com os valores da lista
void lista_ler(void){
	int i;
	for (i = 0; i < tamanho; i++){
		system("cls");
		lista_mostrar();
		printf("\nDigite o valor para a posicao %d: ", i);
		scanf("%d", &lista[i]);
	}
}

//Preparar a lista para ordenação
void lista_limpar(void){
	int i;
	for (i = 0; i < tamanho; i++) {
		ordenado[i] = lista[i];
	}
}

void ordenado_limpar(void){
	int i;
	for (i = 0; i < tamanho; i++) {
		ordenado[i] = 0;
	}
}

//Mostra o conteúdo da lista ordenada
void lista_mostrar_ordenado(void){
	int i;
	printf("[ ");
	for (i = 0; i < tamanho; i++ ){
		printf("%d ",ordenado[i]);
	}
	printf("] Tempo = %d iteracoes\n\n", qtd);
}

//Aplica o método do bubbleSort
int bubbleSort(int vec[], int tam){
	int qtd, i, j, tmp;
	qtd = 0;
	for (i = 0; i < tam-1; i++){
		for (j = i+1; j < tam; j++){
			if (vec[i] > vec[j]){
				troca(&vec[i], &vec[j]);
			}
			qtd++;
		}
	}
	return(qtd);
}

//Função genérica de troca de valores
void troca(int* a, int* b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

//Aplica o modo selectionSort
int selectionSort(int vec[], int tam){
	int i, j, min, qtd=0;
	for (i = 0; i < (tam-1); i++)
	{
		min = i;
		for (j = (i+1); j < tam; j++) {
			if(vec[j] < vec[min]) {
				min = j;
			}
			qtd++;
		}
		if (i != min) {
			troca(&vec[i], &vec[min]);
		}
	}
	return(qtd);
}

//Aplica o modo MergeSort
int mergeSort(int vec[], int tam, int qtd) {
	int meio;
	if (tam > 1) {
		meio = tam / 2;
		qtd = mergeSort(vec, meio, qtd);
		qtd = mergeSort(vec + meio, tam - meio, qtd);
		junta(vec, tam);
	}
	return (qtd+1);
}

//Junta os pedaços num novo vetor ordenado
void junta(int vec[], int tam) {
	int i, j, k;
	int meio;
	int* tmp;
	tmp = (int*) malloc(tam * sizeof(int));
	if (tmp == NULL) {
		exit(1);
	}
	meio = tam / 2;
	i = 0;
	j = meio;
	k = 0;
	while (i < meio && j < tam) {
		if (vec[i] < vec[j]) {
			tmp[k] = vec[i];
			++i;
		}
		else {
			tmp[k] = vec[j];
			++j;
		}
		++k;
	}
	if (i == meio) {
		while (j < tam) {
			tmp[k] = vec[j];
			++j;
			++k;
		}
	}
	else {
		while (i < meio) {
			tmp[k] = vec[i];
			++i;
			++k;
		}
	}
	for (i = 0; i < tam; ++i) {
		vec[i] = tmp[i];
	}
	free(tmp);
}

//Garante as propriedades de heap a um nó
int heapifica(int vec[], int tam, int i){
	int e, d, maior, qtd;
	qtd = 1;
	e = 2*i+1;
	d = 2*i+2;
	if(e<tam && vec[e] > vec[i]){
		maior = e;
	}
	else {
		maior = i;
	}
	if(d<tam && vec[d] > vec[maior]){
		maior = d;
	}
	if(maior != i){
		troca(&vec[i], &vec[maior]);
		qtd += heapifica(vec, tam, maior);
	}
	return qtd;
}

//Transforma o vetor em uma heap
int constroiHeap(int vec[], int tam){
	int i, qtd;
	qtd = 0;
	for(i=tam/2;i>=0;i--){
		qtd += heapifica(vec, tam, i);
	}
	return qtd;
}

//Ordena com base na estrutura heap
int heapSort(int vec[], int tam){
	int n, i, qtd;
	qtd = 0;
	qtd += constroiHeap(vec, tam);
	n = tam;
	for(i=tam-1;i>0;i--){
		troca(&vec[0], &vec[i]);
		n--;
		qtd += heapifica(vec, n, 0);
	}
	return qtd;
}

//Aplica o modo do Quicksort
int quickSort(int vec[], int left, int right, int qtd) {
	int r;
	if (right > left) {
		r = particiona(vec, left, right);
		qtd = quickSort(vec, left, r - 1, qtd);
		qtd = quickSort(vec, r + 1, right, qtd);
	}
	return (qtd+1);
}

//Divide o vetor em pedaços menores
int particiona(int vec[], int left, int right) {
	int i, j;
	i = left;
	for (j = left + 1; j <= right; ++j) {
		if (vec[j] < vec[left]) {
			++i;
			troca(&vec[i], &vec[j]);
		}
	}
	troca(&vec[left], &vec[i]);
	return i;
}

//Aplicando o insertionSort
int insertionSort(int vec[], int tam)
{
	int i, j, qtd=0;
	for(i = 1; i < tam; i++){
		j = i;
		while((vec[j] < vec[j - 1]) && (j!=0)){
			troca(&vec[j], &vec[j-1]);
			j--;
			qtd++;
		}
	}
	return(qtd);
}
