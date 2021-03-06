#ifndef FILA_H_
#define FILA_H_

typedef struct nodo{

	int valor;
	struct nodo* prox;
}Celula;

typedef struct{
	Celula *primeiro;
	Celula *ultimo;
}Fila;

Fila* inicializa(void);

int vazia(Fila* fila);

void insereIten( Fila** fila, int valor);

void removeIten( Fila* fila);

void imprime( Fila *fila);

void libera(Fila **fila);


#endif /* FILA_H_ */
