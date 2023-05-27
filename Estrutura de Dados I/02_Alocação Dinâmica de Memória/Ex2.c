//Alocar um vetor din�mico

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	
  int i, tam, *vet;

  printf("Informe o tamanho do vetor: ");
  scanf("%d", &tam);
  srand(time(NULL));	//gerando n�meros aleat�rios

  vet = malloc(tam * sizeof(int));

  if(vet){
    printf("Mem�ria alocada com sucesso.\n");
    //carregando mem�ria
    for(i = 0; i < tam; i++)	
      *(vet + i) = rand() % 100;	//aritm�tica de ponteiro
    //imprimindo
	for(i = 0; i < tam; i++)
      printf("%d ", *(vet + i));
    printf("\n");
  }else
    printf("Erro ao alocar mem�ria.\n");
    
  free(vet);	//libera o conte�do da mem�ria
}
