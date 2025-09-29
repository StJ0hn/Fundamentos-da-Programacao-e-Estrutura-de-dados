/*
Considerando a existência de notas (cédulas) nos valores R$ 100, R$ 50, R$ 20, R$ 10, R$ 5, R$,
R$ 2 e R$ 1, escreva um programa que capture um valor inteiro em reais (R$) e determine o valor das notas se obter o montante fornecido. O programa deve exibir o número de notas para cada um dos valores de nota existentes.
*/

#include <stdio.h>
	int main(void){
	int real_int;
	int cedula_cem;
	int cedula_cinquenta;
	int cedula_vinte;
	int cedula_dez;
	int cedula_cinco;
	int cedula_dois;
	int cedula_um;
	printf("Insira uma valor em reais: ");
	scanf("%d", &real_int);
	cedula_cem = real_int / 100;
	int resto = real_int % 100;
	cedula_cinquenta = resto / 50;
	resto = resto % 50;
	cedula_vinte = resto / 20;
	resto = resto % 20;
	cedula_dez = resto / 10;
	resto = resto % 10;
	cedula_cinco = resto / 5;
	resto = resto % 5;
	cedula_dois = resto / 2;
	resto = resto % 2;
	cedula_um = resto / 1;
	printf("Notas de R$ 100: %d\n"
	"Notas de R$ 50: %d\n"
	"Notas de R$ 20: %d\n"
	"Notas de R$ 10: %d\n"
	"Notas de R$ 5: %d\n"
	"Notas de R$ 2: %d\n"
	"Notas de R$ 1: %d\n", cedula_cem, cedula_cinquenta, cedula_vinte, cedula_dez, cedula_cinco, cedula_dois, cedula_um);

	return 0;
}
