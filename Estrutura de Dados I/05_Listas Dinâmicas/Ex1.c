//Lista dinâmica em forma de pilha

//Definindo o nó
typedef struct NO{
	int dado;
	struct NO* ptr;		//referência para o próximo nó
}NO;

//Definindo a pilha
typedef struct PILHA{
	NO* topo;		//ponteiro para o topo
}PILHA;

//Declarando variável
PILHA *p

//Empilhando
void empilha(){
	NO* ptr = (NO *) malloc(sizeof(NO));		//alocando novo ponteiro e novo nó
	ptr->dado = rand()%100;		//dado recebendo um valor aleatório
	ptr->prox = p->topo;
	p->topo = ptr;
}

//Desempilhando
int desempilha(){
	NO* ptr = p->topo;		//ponteiro apontando para o topo
	int dado;		//cria backup para armazenar o elemento que está sendo removido
	if(ptr != NULL){		//verifica se a pilha está vazia
		p->topo = ptr->prox;	//atualiza o valor do topo da pilha
		prt->prox = NULL;	//desliga o elemento no topo da pilha
		dado = ptr->dado;	//armazena o valor de retorno
		free(ptr);	//liberando memória
		return dado;
		
	}
}
