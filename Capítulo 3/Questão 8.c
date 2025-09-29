/*
Escreva um programa em C pra fazer conversões entre diferentes unidades. As opções devem ser exibidas em forma de menu apresentado na tela.
*/
#include <stdio.h>
#include <stdlib.h>

/*
 * Para uma versão final e profissional, os "números mágicos"
 * seriam substituídos por constantes definidas aqui no topo.
 * Exemplo:
 * #define LIBRAS_PARA_KG 0.4536
 * #define GALAO_PARA_LITRO 3.7854
 */

int main (void){
    int opcao;
    printf("|---------------------|\n");
    printf("|Conversor de Unidades|\n");
    printf("|---------------------|\n");
    printf("[1] PESO\n");
    printf("[2] VOLUME\n");
    printf("[3] COMPRIMENTO\n");
    printf("Selecione o tipo de medida: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1: { // PESO
            int opcao_peso;
            printf("[1] - Libra -> Quilograma\n"
                   "[2] - Quilograma -> Libra\n"
                   "[3] - Onça -> Grama\n"
                   "[4] - Grama -> Onca\n");
            printf("Selecione o tipo de conversao: ");
            scanf("%d", &opcao_peso);
            switch (opcao_peso){
            case 1: {
                float libra, quilograma;
                printf("Digite a quantidade de libras: ");
                scanf("%f", &libra);
                quilograma = libra * 0.4536;
                printf("%.2f libras equivalem a %.2f Kg.\n", libra, quilograma);
                break;
            }
            case 2: {
                float libra, quilograma;
                printf("Digite a quantidade de quilogramas: ");
                scanf("%f", &quilograma);
                libra = quilograma / 0.4536;
                printf("%.2f Kg equivalem a cerca de %.2f libras.\n", quilograma, libra);
                break;
            }
            case 3: {
                float onca, grama;
                printf("Digite a quantidade de oncas: ");
                scanf("%f", &onca);
                grama = onca * 28.3495;
                printf("%.2f oncas equivalem a cerca de %.2f g.\n", onca, grama);
                break;
            }
            case 4: {
                float onca, grama;
                printf("Digite a quantidade em grama: ");
                scanf("%f", &grama);
                onca = grama / 28.3495;
                printf("%.2f g equivalem a cerca de %.2f oncas.\n", grama, onca);
                break;
            }
            default:
                printf("Opcao invalida.\n");
                break;
            }
            break;
        }
        case 2: { // VOLUME
            int opcao_volume;
            printf("[1] - Galao -> Litro\n"
                   "[2] - Litro -> Galao\n"
                   "[3] - Onca Liquida -> Mililitro\n"
                   "[4] - Mililitro-> Onca Liquida\n");
            printf("Selecione o tipo de conversao: ");
            scanf("%d", &opcao_volume);
            switch (opcao_volume){
            case 1: {
                float galao, litro;
                printf("Digite a quantidade de galoes: ");
                scanf("%f", &galao);
                litro = galao * 3.7854;
                printf("%.2f galoes equivalem a %.2f l.\n", galao, litro);
                break;
            }
            case 2: {
                float galao, litro;
                printf("Digite a quantidade de litros: ");
                scanf("%f", &litro);
                galao = litro / 3.7854;
                printf("%.2f l equivalem a cerca de %.2f galoes.\n", litro, galao);
                break;
            }
            case 3: {
                float onca_liquida, mililitro;
                printf("Digite a quantidade de oncas liquidas: ");
                scanf("%f", &onca_liquida);
                mililitro = onca_liquida * 29.5735;
                printf("%.2f oncas equivalem a cerca de %.2f ml.\n", onca_liquida, mililitro);
                break;
            }
            case 4: {
                float onca_liquida, mililitro;
                printf("Digite a quantidade de ml: ");
                scanf("%f", &mililitro);
                onca_liquida = mililitro / 29.5735;
                printf("%.2f ml equivalem a cerca de %.2f oncas.\n", mililitro, onca_liquida);
                break;
            }
            default:
                printf("Opcao invalida.\n");
                break;
            }
            break;
        }
        case 3: { // COMPRIMENTO
            int opcao_comprimento;
            printf("[1] - Milha -> Quilometro\n"
                   "[2] - Quilometro -> Milha\n"
                   "[3] - Jardas -> Metro\n"
                   "[4] - Metro -> Jardas\n");
            printf("Selecione o tipo de conversao: ");
            scanf("%d", &opcao_comprimento);
            switch (opcao_comprimento){
            case 1: {
                float milha, quilometro;
                printf("Digite a quantidade de milhas: ");
                scanf("%f", &milha);
                quilometro = milha * 1.6093;
                printf("%.2f milhas equivalem a %.2f Km.\n", milha, quilometro);
                break;
            }
            case 2: {
                float milha, quilometro;
                printf("Digite a quantidade de quilometros: ");
                scanf("%f", &quilometro);
                milha = quilometro / 1.6093;
                printf("%.2f Km equivalem a cerca de %.2f milhas.\n", quilometro, milha);
                break;
            }
            case 3: {
                float jardas, metro;
                printf("Digite a quantidade de jardas: ");
                scanf("%f", &jardas);
                metro = jardas * 0.9144;
                printf("%.2f jardas equivalem a cerca de %.2f metros.\n", jardas, metro);
                break;
            }
            case 4: {
                float jardas, metro;
                printf("Digite a quantidade de metros: ");
                scanf("%f", &metro);
                jardas = metro / 0.9144;
                printf("%.2f metros equivalem a cerca de %.2f jardas.\n", metro, jardas);
                break;
            }
            default:
                printf("Opcao invalida.\n");
                break;
            }
            break;
        }
        default:
            printf("Opção inválida.\n");
            break;
    }
    return 0;
}
