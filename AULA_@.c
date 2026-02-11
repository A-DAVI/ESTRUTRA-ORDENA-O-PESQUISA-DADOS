#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void imprimir(A[], int n, int tempo);
void delay(int tempo_segundos);
int* criarArranjo(int n);
void trocar(int *x, int *y);
void ordenacao_por_insercao(A[], n);



int main(){
	int n = 10;
	int* A = criarArranjo(n);
	imprimir(A,n,1);
	ordenacao_por_isercao(A[], n);
	return 0;
}

void ordenacao_por_insercao(A[], n){
	int chave, i;
	for(int j=1; j < n; j++){
		chave = A[j];
		i = j - 1;
		while(i > -1 && A[i] > chave){
		 A[i+1] = A[i];
		 i --;
		}
		A[i+1] = chave;
	}
}

void imprimir(A[], int n, int tempo){
	for int(int i=0; i < n; i++){
			printf("d% ", A[i]);
	}
	delay(tempo);
	printf("\n")
}

void delay(int tempo_segundos){
	int tempo= 1000 * tempo_segundos;
	clock_t tempo_inicial = clock();
	while (clock() < tempo_inical + tempo_segundos);	 
}

int* criar arranjo(int n){
	int* arranjo = (int*)malloc(n * sizeof(int));
	if(arranjo == NULL){
		printf("Problema na alocação de Memoria!\n");
		exit(1);
	}
	srand(time(NULL));
    for (int i = 0; i < n; i++){
		arranjo[i] = rand() % (n*2);
	}
}

void trocar(int *x, int *y){
	int aux = *x;
	*x = *y;
	*y = aux;
}



