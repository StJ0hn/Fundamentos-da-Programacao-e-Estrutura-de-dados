/*
 Escreva um programa que dado o valor de um raio via teclado calcule e imprima o volume de uma esfera  correspondente.
 Sabe-se que o volume de uma esfera é dado por: 4/3.pi.r³ onde r representa o raio da esfera.
 Para calcular o valor de r³ podemos multiplicar o valor do raio por si mesmo três vezes ou fazer o uso da função pow() da biblioteca padrão matemática (`#include <math.h>`).
 */
 #include <stdio.h>

 int main(void){
	float raio;
	printf("Digite um valor para o raio: ");
	scanf("%f",&raio);
	float volume_da_esfera = (4.0 / 3.0 (3.14(raio*raio*raio));
	printf("Este é o resultado do volume da esfera: %.2f", volume_da_esfera);
	return 0;
 }
