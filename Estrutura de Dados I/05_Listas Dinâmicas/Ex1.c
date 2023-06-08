//Lista din�mica em forma de pilha

//Definindo o n�
typedef struct NO{
	int dado;
	struct NO* ptr;		//refer�ncia para o pr�ximo n�
}NO;

//Definindo a pilha
typedef struct PILHA{
	NO* topo;		//ponteiro para o topo
}PILHA;

//Declarando vari�vel
PILHA *p

//Empilhando
void empilha(){
	NO* ptr = (NO *) malloc(sizeof(NO));		//alocando novo ponteiro e novo n�
	ptr->dado = rand()%100;		//dado recebendo um valor aleat�rio
	ptr->prox = p->topo;
	p->topo = ptr;
}

//Desempilhando
int desempilha(){
	NO* ptr = p->topo;		//ponteiro apontando para o topo
	int dado;		//cria backup para armazenar o elemento que est� sendo removido
	if(ptr != NULL){		//verifica se a pilha est� vazia
		p->topo = ptr->prox;	//atualiza o valor do topo da pilha
		prt->prox = NULL;	//desliga o elemento no topo da pilha
		dado = ptr->dado;	//armazena o valor de retorno
		free(ptr);	//liberando mem�ria
		return dado;
		
	}
}
