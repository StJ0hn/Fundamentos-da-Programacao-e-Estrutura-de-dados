/*
Escreva um programa em C que receba três números inteiros como entrada e imprima como saída, o maior número recebido.
*/

#include <stdio.h>

int main (void){
	int num_um, num_dois, num_tres;
	printf("Digite o primeiro número: ");
	scanf("%d", &num_um);
	printf("Digite o segundo número: ");
	scanf("%d", &num_dois);
	printf("Digite o terceiro número: ");
	scanf("%d", &num_tres);

	if (num_um >= num_dois && num_um >= num_tres){
		printf("O número %d é o maior valor.", num_um);
	}
	else if (num_dois >= num_um && num_dois >= num_tres){
		printf("O número %d é o maior valor.", num_dois);
	}
	else{
		printf("O número %d é o maior valor.", num_tres);
	}
}
