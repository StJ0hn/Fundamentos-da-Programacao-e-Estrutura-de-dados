/*
 Considere uma disciplina que adota o seguinte critério de aprovação: os alunos fazem duas provas (P1 e P2) iniciais; se a média nas duas provas for maior ou igual a 5.0, e se nenhuma  das duas notas for inferior a 3.0, o aluno passa direto. Caso contrário,  o aluno faz uma terceira prova (P3) e a média é calculada considerando-se a terceira nota e a maior nota entre P1 e P2. Neste caso, o aluno é aprovado se a média final for maior ou igual a 5.0. Escreva um programa  completo que leia inicialmente as duas notas de um aluno fornecidas pelo usuário via teclado. Se as notas não forem suficientes para o aluno passar direto, o programa deve capturar a nota da terceira prova, também fornecida via teclado. Como saída, o programa deve imprimir a média final, seguida da mensagem "Aprovado"  ou "Reprovado", conforme o critério descrito aqui.
 */

 #include <stdio.h>


 int main (void){
	float n1, n2, n3;
	printf("Digite sua primeira nota (P1): ");
	scanf("%f", &n1);
	printf("Digite sua segunda nota (P2): ");
	scanf("%f", &n2);
	if ((n1 >= 3.0 && n2 >= 3.0) && (n1 + n2)/2 >= 5.0){
		printf("Aprovado.");
	}
	else {
		float media, maior_nota_inicial;
		if (n1 < 3.0 || n2 < 3.0){
			printf("Digite sua terceira nota (P3): ");
			scanf("%f", &n3);
			if (n1 >= n2){
				maior_nota_inicial = n1;
			}
			else {
				maior_nota_inicial = n2;
			}
			media = (maior_nota_inicial + n3) / 2;
			if (media >= 5.0){
				printf("Aprovado.");
			}
			else {
				printf("Reprovado.");

			}
		}
		else {
			printf("Reprovado.");
		}
	}
 }
