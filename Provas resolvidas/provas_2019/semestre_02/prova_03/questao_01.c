/*
 ============================================================================
 Name        : questao_01.c
 Author      : Vitor Emanuel Santos Lima
 Version     :
 Copyright   : 
 Description :

Na matemática, na álgebra linear, uma matriz de permutação é uma matriz quadrada binária que tem o
efeito de gerar uma permutação dos elementos de um vetor ou entre linhas ou colunas de uma matriz. É formada
apenas de zeros e uns, sendo o valor de apenas um elemento por linha e por coluna que igual a um.
As duas matrizes a seguir são matrizes de permutação:


Escreva um programa em C, que leia uma matriz NxN (para fins de teste, considere N = 5), verifique e imprima
mensagem informando se a matriz lida é uma matriz de permutação.
 ============================================================================
 */

#include <stdio.h>
#define TAM 512

int main(void) {

	int linhas;// = 5;
	printf("Informe o número de linhas:");
	scanf("%d", &linhas);

	int colunas;// = 5;
	printf("Informe o número de colunas:");
	scanf("%d", &colunas);

	if(linhas != colunas){

		printf("\nMatriz informada NÃO é de permutação: número de linhas e colunas diferente.");
		return 0;

	}


	if(linhas < 2 || colunas < 2){

		printf("\nA matriz informada NÃO é de permutação: tamanho muito reduzido para análise.");
		return 0;

	}

	printf("\nCadastre os valores da sua matriz:\n\n");

	int matriz[TAM][TAM];/* = {
							{1,0,0,0,0},
							{0,1,0,0,0},
							{0,0,0,1,0},
							{0,0,1,0,0},
							{0,0,0,0,1}
						};*/// teste

	for(int linhaAtual = 0; linhaAtual < linhas; linhaAtual++){

		for(int colunaAtual = 0; colunaAtual < colunas; colunaAtual++){

			scanf("%d", &matriz[linhaAtual][colunaAtual]);

		}

	}

	for(int linhaAtual = 0; linhaAtual < linhas; linhaAtual++){

		printf("[ ");

		for(int colunaAtual = 0; colunaAtual < colunas; colunaAtual++){

			printf("%d ", matriz[linhaAtual][colunaAtual]);

		}

		printf("]");
		printf("\n");

	}


	int somaLinha;
	int somaColuna;

	for(int linhaAtual = 0; linhaAtual < linhas; linhaAtual++){

		somaColuna = 0;
		somaLinha = 0;

		for(int colunaAtual = 0; colunaAtual < colunas; colunaAtual++){

			if(matriz[linhaAtual][colunaAtual] != 1 && matriz[linhaAtual][colunaAtual] != 0){

				printf("\nA matriz informada NÃO é de permutação: valor inválido encontrado.");
				return 0;

			}

			somaLinha += matriz[linhaAtual][colunaAtual];
			somaColuna += matriz[colunaAtual][linhaAtual];

		}

		if(somaLinha != 1){

			printf("\nA matriz informada NÃO é de permutação: soma diferente de 1 identificada nas linhas.");
			return 0;

		}

		if(somaColuna != 1){

			printf("\nA matriz informada NÃO é de permutação: soma diferente de 1 identificada nas colunas.");
			return 0;

		}

	}

	if(somaLinha == 1 && somaColuna == 1){

		printf("\nA matriz informada É uma matriz de permutação.");

	}

	return 0;

}

