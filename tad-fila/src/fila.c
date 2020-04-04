#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila* inicializa(){

	Fila* fila = (Fila*) malloc( sizeof(Fila));
	fila->primeiro = (Celula*) malloc( sizeof(Celula)) ;
	fila->ultimo = fila->primeiro;
	fila->primeiro->prox = NULL;
	fila->primeiro->valor = -1;

	return fila;

}

int vazia( Fila* fila){

	return(fila->primeiro == fila->ultimo);
}

void insereIten( Fila** fila, int valor){

	Celula *reg;
	reg = (Celula*)malloc(sizeof(Celula));
	reg->valor = valor;
	reg->prox = NULL;

	(*fila)->ultimo->prox = reg;
	(*fila)->ultimo = reg;
}

void removeIten( Fila* fila){

	Celula *temp;

	temp = fila->primeiro->prox;
	fila->primeiro->prox = fila->primeiro->prox->prox;

	free(temp);

}

void imprime( Fila *fila){
	Celula *p;

		for (p = fila->primeiro->prox ; p != NULL; p = p->prox) {

			printf("%d \n", p->valor);
		}

}

void libera(Fila **fila){
	Celula *p, *temp;

		p = (*fila)->primeiro;
		while (p != NULL) {
			temp = p;
			p = p->prox;
			free(temp);
		}

		free(*fila);
}
