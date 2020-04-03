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

void insereIten( Fila** fila, int valor){

}

void removeIten( Fila* fila, int valor){

}

void imprime( Fila *fila){

}

void libera(Fila **fila){

}
