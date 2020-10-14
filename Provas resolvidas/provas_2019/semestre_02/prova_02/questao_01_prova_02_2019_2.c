/*
 ============================================================================
 Name        : questao_01.c
 Author      : Vitor Emanuel Santos Lima
 Version     :
 Copyright   : 
 Description :

 Escreva um programa em C, que receba uma sequência de N
 números inteiros e um valor X. Este programa deverá computar e imprimir qual
 a quantidade de subsequencias de inteiros consecutivos em N, que quando
 somados resultam exatamente em X.

Por exemplo, a figura abaixo mostra uma sequência de N = 10, para a qual
existem 5 subsequencias cuja soma dos números é igual a K = 5.
 ============================================================================
*/

#include <stdio.h>
#include <stdlib.h>
//#define TAM 10//teste

int main(void) {

	int tamanho;

	printf("Informe quantos números a sua sequencia vai ter:");
	scanf("%d", &tamanho);//tamanho == N

	if(tamanho < 0){

		tamanho *= -1;

	}

	int valorMax;// = 5;//teste

	printf("Informe o valor máximo da soma de uma subsequencia:");
	scanf("%d", &valorMax);//valorMax == X

	if(valorMax < 0){

		valorMax *= -1;

	}

	int sequencia[tamanho];// = {1,0,2,2,0,0,8,5,3,2};//teste

	printf("Informe os valores da sua sequencia:");

	int valor;

	for(int indiceAtual = 0; indiceAtual < tamanho; indiceAtual++){

		scanf("%d", &valor);
		sequencia[indiceAtual] = valor;

	}

	int soma = 0;
	int contador = 0;
	int subsequencia = 0;

	for(int iteracao = 0; iteracao < tamanho; iteracao++){

		//reiniciar o loop com o contador para que a leitura do array recomece a partir do ponto de referencia atual e não do início 0
		for(int subcontagem = contador; subcontagem < tamanho; subcontagem++){

			soma += sequencia[subcontagem];
			contador++;
			//printf("%d ", soma);//teste

			if(soma == valorMax && sequencia[subcontagem + 1] == 0){
							  //e
				subsequencia++;
				break;

			}else if(soma == valorMax && sequencia[subcontagem + 1] != 0){
									//e
				soma = 0;
				subsequencia++;
				break;

			}else if(soma > valorMax && sequencia[subcontagem] == valorMax && sequencia[subcontagem + 1] == 0){
								  //mas								      //e
				soma = sequencia[subcontagem];
				subsequencia++;
				break;

			}else if(soma > valorMax && sequencia[subcontagem] == valorMax && sequencia[subcontagem + 1] != 0){
								   //mas								  //e
				soma = 0;
				subsequencia++;
				break;

			} else if(soma > valorMax){

				soma = 0;
				break;

			} else if(sequencia[subcontagem] + sequencia[subcontagem + 1] == valorMax){
			    
			    subsequencia++;
				break;
			    
			}

        		if(sequencia[subcontagem] == valorMax && sequencia[subcontagem + 1] == 0){
												//e
				subsequencia++;
				break;

			}else if(sequencia[subcontagem] == valorMax && sequencia[subcontagem + 1] != 0){
													//mas
				soma = 0;
				subsequencia++;
				break;

			}

		}

	}

	printf("\nExistem %d subsequencias cuja soma dos números é igual a %d.", subsequencia, valorMax);

}

/*
cenários de teste:

{1,0,2,2,0,0,8,5,3,2} 5
[7 7 7 7 5 2 1 5 9 0]
[1 2 3 5 6 7 2 1 6 1] 3
[1,2,0,3,5] 2
*/


