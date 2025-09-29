/*
 Escreva um programa que calcule o preço da gasolina por litro no Brasil se aqui fosse adotado o mesmo preço cobrado nos Estados Unidos.
 O programa deve capturar dois valores fornecidos via teclado: o preço do galão de gasolina praticado nos Estados Unidos (em dólares) e  a taxa de conversão do dólar  para o real.
 O programa deve exibir o preço do litro de gasolina correspondente em reais. Sabe-se que o galão tem 3.7854 litros.
 */

 #include <stdio.h>

 int main(void){
	float galao_em_dolar;
	float taxa_conversão;
	printf("Digite o preço do galão de gasolina em dólar: ");
	scanf("%f", &galao_em_dolar);
	printf("Digite a taxa de conversão do dólar para o real: ");
	scanf("%f", &taxa_conversão);
	float barril_em_real = taxa_conversão * galao_em_dolar;
	float preço_litro_real = barril_em_real / 3.7854;
	printf("Preço por litro em real: %.2f", preço_litro_real);

	return 0;
 }
