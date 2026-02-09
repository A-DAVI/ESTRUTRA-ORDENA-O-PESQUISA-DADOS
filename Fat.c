#include <stdio.h>

int fat(int n);

int main () {
	int valor = 5;
	
	printf("O Fatorial de %d eh %d", valor,fat(valor))
	
	return 0;
}
int fat(int n){
	if (n == 0) return 1;
	else return n*fat(n-1);	
}
