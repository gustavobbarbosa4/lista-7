#include <stdio.h>

int main () {
	int inteiro = 5;
	float real = 3.4;
	char charactere = 'a';
	
	int *end_inteiro = &inteiro;
	float *end_real = &real;
	char *end_charactere = &charactere;

	printf("valores iniciais: \n");
	printf("inteiro: %d\n", inteiro);
	printf("real: %.2f\n", real);
	printf("charactere: %c\n\n", charactere);
	
	*end_inteiro = 6;
	*end_real = 4.4;
	*end_charactere = 'b';
	
	printf("valores alterados pelos ponteiros: \n");
	printf("inteiro: %d\n", inteiro);
	printf("real: %.2f\n", real);
	printf("charactere: %c\n", charactere);
	
	return 0;	
}