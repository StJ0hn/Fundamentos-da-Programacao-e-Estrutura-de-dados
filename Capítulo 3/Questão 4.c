/*
 * Escrever um programa que converta coordenadas polares em coordenadas cartesianas de acordo com as fórmulas: x = r cos(a), y = r sin (a). o programa deve capturar os valores em coordenadas polares e exibir as coordenadas cartesianas correspondentes.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926535
int main (void){

float raio, angulo;

float abcissa_x, ordenada_y;

printf("Insira o raio da coordenada polar: ");
	scanf("%f", &raio);
	printf("Insira o angulo (EM GRAUS) da coordenada polar: ");
	scanf("%f", &angulo);
	float angulo_rad = angulo * (PI/180);
	abcissa_x = raio * cos(angulo_rad);
	ordenada_y = raio * sin(angulo_rad);
	printf("As coordenadas cartesianas (x, y) são: (%.2f, %.2f)\n", abcissa_x, ordenada_y);
}
