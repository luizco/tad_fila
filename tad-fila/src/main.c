#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(void) {

	Fila *fila = inicializa();

	printf("teste %d \n",fila->primeiro->valor);
}
