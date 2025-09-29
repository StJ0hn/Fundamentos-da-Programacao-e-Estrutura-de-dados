/*
Escreva um programa que converta um ângulo em radianos para o valor correspondente em graus, minutos e segundos.
Sabe-se que 1 radiano equivale  57.29578 graus. Escolha um formato de saída apropriado.
*/

#include <stdio.h>
int main(void){
	float rad;
	printf("Insira o valor do ângulo em radianos: ");
	scanf("%f", &rad);
	float graus_totais = rad * 57.29578;
	int graus_int = (int) graus_totais;
	float fracao_restante = graus_totais - graus_int;
	float minutos_totais = fracao_restante * 60;
	int minutos_int = (int) minutos_totais;
	float fracao_restante_minutos = minutos_totais - minutos_int;
	float segundos = fracao_restante_minutos * 60;
	printf("%d graus, %d minutos e %.2f segundos.\n", graus_int, minutos_int, segundos);
	return 0;
}
