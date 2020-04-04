#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(void) {

	Fila *fila = inicializa();
	insereIten(&fila,2);
	insereIten(&fila,3);
	insereIten(&fila,4);
	insereIten(&fila,5);
	imprime(fila);
	printf("removendo \n");
	removeIten(fila);
	imprime(fila);
	libera(&fila);
}
