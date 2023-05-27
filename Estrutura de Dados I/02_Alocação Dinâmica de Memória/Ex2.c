//Alocar um vetor dinâmico

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	
  int i, tam, *vet;

  printf("Informe o tamanho do vetor: ");
  scanf("%d", &tam);
  srand(time(NULL));	//gerando números aleatórios

  vet = malloc(tam * sizeof(int));

  if(vet){
    printf("Memória alocada com sucesso.\n");
    //carregando memória
    for(i = 0; i < tam; i++)	
      *(vet + i) = rand() % 100;	//aritmética de ponteiro
    //imprimindo
	for(i = 0; i < tam; i++)
      printf("%d ", *(vet + i));
    printf("\n");
  }else
    printf("Erro ao alocar memória.\n");
    
  free(vet);	//libera o conteúdo da memória
}
