/*
 ============================================================================
 Name        : questao_03.c
 Author      : Vitor Emanuel Santos Lima
 Version     :
 Copyright   : 
 Description :

 Escreva um programa em C, que leia um número natural
 positivo N e gere uma lista de todos os elementos da lista sendo
 a(n) = sigma(n), onde sigma(n) é a somatória dos divisores de n, com n <= N. Por exemplo,
 para N = 10, o programa deverá imprimir: 1, 3, 4, 7, 6, 12, 8, 15, 13, 18
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 1000

int main(void) {

	int limite;//limite == N

	printf("Informe N inteiros que queira verificar:");
	scanf("%d", &limite);

	int lista[TAM];

	for(int inteiro = 1; inteiro <= limite; inteiro++){
		//inteiro == n
		int soma = 0;//zerar a soma para refazer a verificação com o proximo inteiro após cada iteração

		for(int divisor = 1; divisor <= inteiro; divisor++){

			if(inteiro % divisor == 0){

				soma += divisor;

			}

			lista[inteiro] = soma;//array que guarda a soma dos divisores do inteiro atual numa posição correspondente

		}

	}

	for(int divisor = 1; divisor <= limite; divisor++){

		printf("%d ",lista[divisor]);//mostrar a soma dos divisores de cada inteiro da lista

	}

}
