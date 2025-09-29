/*
Escreva um programa em C que receba três números inteiros como entrada e imprima como saída, o maior número recebido.
*/
#include <stdio.h>

int main (void){

	int n1, n2, n3;
	printf("Digite o primeiro número: ");
	scanf("%d", &n1);
	printf("Digite o segundo número: ");
	scanf("%d", &n2);
	printf("Digite o terceiro número: ");
	scanf("%d", &n3);

	if (n1 >= n2 && n2 >= n3) {
		printf("Em ordem crescente: %d -> %d -> %d", n3, n2, n1);
	}
	else if (n1 >= n3 && n3 >= n2) {
		printf("Em ordem crescente: %d -> %d -> %d", n2, n3, n1);
	}
	else if (n2 >= n1 && n1 >= n3) {
		printf("Em ordem crescente: %d -> %d -> %d", n3, n1, n2);
	}
	else if (n2 >= n3 && n3 >= n1) {
		printf("Em ordem crescente: %d -> %d -> %d", n1, n3, n2);
	}
	else if (n3 >= n1 && n1 >= n2) {
		printf("Em ordem crescente: %d -> %d -> %d", n2, n1, n3);
	}
	else {
		printf("Em ordem crescente: %d -> %d -> %d", n1, n2, n3);
	}
}
