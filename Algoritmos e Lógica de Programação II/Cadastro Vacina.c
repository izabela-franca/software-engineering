#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>


struct Cadastro {
	char nome[200];
	char cpf[50];
	char vacina[100];
	char data[20];
	int lote;
};	


struct Cadastro cadastrarVacina(){

	struct Cadastro vac;
	printf ("Informe o nome do paciente: \n");
	fflush(stdin);
	gets(vac.nome);
	printf ("Informe o CPF do paciente: \n");
	fflush(stdin);
	gets(vac.cpf);
	printf ("Informe a vacina aplicada: \n");
	fflush(stdin);
	gets(vac.vacina);
	printf ("Informe a data da aplicação: \n");
	fflush(stdin);
	gets(vac.data);
	printf ("Informe o número do lote da vacina: \n");
	fflush(stdin);
	scanf("%d", &vac.lote);
	printf ("Cadastro efetuado com sucesso!\n");
	return vac;
}


void listarAplicacoes(struct Cadastro vacinas[999], int qntCad){
	int i;
	for (i=0; i < qntCad; i++){
		printf ("=======================================\n");
		printf ("Código: %d\n", i);
		printf ("Nome: %s\n", vacinas[i].nome);
		printf ("CPF: %s\n", vacinas[i].cpf);
		printf ("Vacina: %s\n", vacinas[i].vacina);
		printf ("Data: %s\n", vacinas[i].data);
		printf ("Número do lote: %d\n", vacinas[i].lote);	
	}
}


void consultarCpf(struct Cadastro vacinas[999], int qntCad){
	char cpfConsultado[50];
	int i;
	int  contCod = 0;
	bool cpfEncontrado = false;
	
	printf ("Informe o CPF a ser consultado: \n");
	fflush(stdin);
	gets(cpfConsultado);
	for (i=0; i < qntCad; i++){
		if (strcmp(vacinas[i].cpf, cpfConsultado) == 0 ){
			printf ("=======================================\n");
			printf ("Código: %d\n", i);
			printf ("Nome: %s\n", vacinas[i].nome);
			printf ("CPF: %s\n", vacinas[i].cpf);
			printf ("Vacina: %s\n", vacinas[i].vacina);
			printf ("Data: %s\n", vacinas[i].data);
			printf ("Número do lote: %d\n", vacinas[i].lote);
			printf ("=======================================\n");
			cpfEncontrado = true;
			break;
		} else {
			cpfEncontrado == false;
		}		
	}
	if (cpfEncontrado == false){
		printf ("CPF não encontrado!\n");
	}

}


void main(){
	setlocale(LC_ALL,"Portuguese"); 
	int opcao = 0;
	int contCad = 0;
	struct Cadastro cadVacina[999];
	
	while (opcao != 4) {
		printf ("Digite a opção desejada: \n 1- Cadastrar Vacina \n 2- Listas Aplicações \n 3- Consultar por CPF \n 4- Sair \n");
		scanf ("%d", &opcao);
		switch (opcao) {
			case 1:
				cadVacina[contCad] = cadastrarVacina();
				contCad++;
				system("pause");
				system("cls");
				break;
			case 2:
				listarAplicacoes(cadVacina, contCad);
				system("pause");
				system("cls");
				break;
			case 3:
				consultarCpf(cadVacina, contCad);
				system("pause");
				system("cls");
				break;
		}		
	} 
}

