#include <stdio.h>
int main () {
	int a;
	int b;
	
	printf("endereco de a: %p\n", &a); 
	printf("endereco de b: %p\n", &b);
	
	if(&a > &b){
		printf("o maior endereco eh o de a: %p\n", &a);
	}else{
		printf("o maior endereco eh o de b: %p\n", &b);
	}
	
	return 0;
}