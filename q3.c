#include <stdio.h>
	
	void trocar_valores(int *a, int *b){
	int aux = *a;
	*a = *b;
	*b = aux;
	}

int main () {
	int a = 2, b = 4, aux;
	
	printf("valor de a e b: %d, %d", a, b);
	
	trocar_valores(&a, &b);
	
	printf("\nvalores trocados: %d, %d", a, b);
}