/*
Considere as equações de movimento para calcular a posição (s)  e a velocidade (v) de uma partícula em um determinado instante (t), dado sua aceleração, posição inicial s0 e velocidade inicial v0, de acordo com as fórmulas: $s = s0 + v0t + a.t² / 2$ e $v = v0 + a.t$
Escrever um programa em C que capture os valores de s0, v0, a e t fornecidos pelo usuário via teclado e calcule e exiba os valores de s e v. Todos os valores tratados no programa devem ser números reais;
*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
	float s_inicial, v_inicial, aceleracao, tempo;
	printf("Digite o valor da posicao inicial (s0): ");
	scanf("%f", &s_inicial);
	printf("Digite o valor da velocidade inicial (v0): ");
	scanf("%f", &v_inicial);
	printf("Digite o valor da aceleracao (a): ");
	scanf("%f", &aceleracao);
	printf("Digite o valor do tempo (t): ");
	scanf("%f", &tempo);

	float posicao_valor = s_inicial + (v_inicial*tempo) + ((aceleracao * (tempo*tempo)) / 2);
	float velocidade_valor = v_inicial + (aceleracao * tempo);

	printf("O valor da Posicao é: %f", posicao_valor);
	printf("O valor da velocidade é: %f", velocidade_valor);

	return 0;

}
