#include <stdio.h>

int main () {
	float array[10];
	int i, j;
	for(i = 0; i < 10; i++){
		printf("endereco da posicao %d: %p\n", i, &array[i]);
	}
	
	return 0;
}