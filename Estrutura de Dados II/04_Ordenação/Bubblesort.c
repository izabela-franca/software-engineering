//BubbleSort
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
