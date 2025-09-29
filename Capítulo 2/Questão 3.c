/*
 * Escreva um programa que captura do teclado o número de segundos  transcorridos num evento e imprima no formato hora-minuto-segundo: h: m: s,
 * onde hora e minuto são exibidos com dois dígitos, preenchidos com zero à esquerda ("%02d"),
 * e segundo exibido também com duas casas decimais também preenchido com zero à esquerda (%05.2f).
*/

#include <stdio.h>
int main(void){
	float segundos_total; //total de segundos
	printf("Insira o numero de segundos transcorridos no evento: ");
	scanf("%f", &segundos_total);
	int horas = segundos_total / 3600; //Cálculo das horas
	int minutos_totais = segundos_total /60; //calculo dos minutos totais
	int minutos = minutos_totais % 60; //minutos que sobram
	float segundos = (int) segundos_total % 60; //segundos que sobram
	printf("%02d:%02d:%05.2f", horas, minutos, segundos);
	return 0;
}
