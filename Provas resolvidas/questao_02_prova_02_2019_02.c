/*
 ============================================================================
 Name        : questao_02.c
 Author      : Vitor Emanuel Santos Lima
 Version     :
 Copyright   : 
 Description :

 Uma pesquisa genética sobre populações de repteis extintos na Ilha de Soforuei,
 busca verificar se indivíduos fossilizados são da mesma família. Indivíduos são considerados
 da mesma família se partilham de uma parte idêntica e contígua de código genético de no mínimo
 P% do tamanho da menor fita genética dentre os indivíduos.

Por exemplo, um indivíduo A possui o código genético GATTACTGAGTCA e o indivíduo B possui o código
genético CATACAGT. Se aplicarmos um critério de parentesco de 62%, os indivíduos A e B devem ser
considerados parentes, pois a fita AGTCA é uma parte contígua da sequência dos dois indivíduos e possui
comprimento de tamanho 5, onde 5 >= 8 * 62%. Observe, que a menor das sequências é a de tamanho 8 do
indivíduo B. Observe que as fitas são avaliadas em cadeias circulares (seguindo o último elemento da cadeia,
está o primeiro).

Escreva um programa em C que leia as duas cadeias (o tamanho máximo da cadeia é 512) e o valor de P e indi-
que se os indivíduos são parentes.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 512

int main(void) {

	char cadeiaA[TAMANHO];// = "GATTACTGAGTCA";//teste
	char cadeiaB[TAMANHO];// = "CATACAGT";//teste

	printf("Informe a sequencia da primeira cadeia genética:");
	scanf("%s", cadeiaA);//com fgets dá erro e com gets dá warning

	printf("Informe a sequencia da segunda cadeia genética:");
	scanf("%s", cadeiaB);//com fgets dá erro e com gets dá warning

	//converter cadeiaB para caracteres maiusculos e verificar se há caracteres inválidos
	for(int atualA = 0; cadeiaA[atualA] != '\0'; atualA++){

		if(cadeiaA[atualA] >= 'a' && cadeiaA[atualA] <= 'z'){

			cadeiaA[atualA] -= 32;

		}

		if(cadeiaA[atualA] != 'A' && cadeiaA[atualA] != 'T' &&
		   cadeiaA[atualA] != 'G' && cadeiaA[atualA] != 'C' &&
		   cadeiaA[atualA] != '\0'){

			printf("Caractere inválido. Use apenas 'A', 'T', 'G' ou 'C'");
			exit(0);

		}

	}

	//converter cadeiaB para caracteres maiusculos e verificar se há caracteres inválidos
	for(int atualB = 0; cadeiaB[atualB] != '\0'; atualB++){

		if(cadeiaB[atualB] >= 'a' && cadeiaB[atualB] <= 'z'){

			cadeiaB[atualB] -= 32;

		}

		if(cadeiaB[atualB] != 'A' && cadeiaB[atualB] != 'T' &&
		   cadeiaB[atualB] != 'G' && cadeiaB[atualB] != 'C' &&
		   cadeiaA[atualB] != '\0'){

			printf("Caractere inválido. Use apenas 'A', 'T', 'G' ou 'C'");
			exit(0);

		}

	}

	printf("\n");

	int tamanhoA = 0;

	while(cadeiaA[tamanhoA] != '\0'){

		printf("%c", cadeiaA[tamanhoA]);
		tamanhoA++;

	}


	printf("\n");

	int tamanhoB = 0;

	while(cadeiaB[tamanhoB] != '\0'){

		printf("%c", cadeiaB[tamanhoB]);
		tamanhoB++;

	}

	if(tamanhoA <= 7 || tamanhoB <= 7){

		printf("\nSequencia curta demais para ser analisada.");
		exit(0);

	}

	int cadeiaMenor;

	if(tamanhoA > tamanhoB){

		cadeiaMenor = tamanhoB;

	}else{

		cadeiaMenor = tamanhoA;

	}

	float negativo = 0;//grau de parentesco insuficiente
	float sequencia = 0;//armazena quantidade de pareamentos sucessivos
	float parentesco = 0;//parentesco == P

	int atualA = 0;
	int atualB = 0;


	while(tamanhoA < TAMANHO || tamanhoB < TAMANHO){

		//se os elementos analisados forem iguais,
		if(cadeiaA[atualA] == cadeiaB[atualB]){

			sequencia++;
			parentesco = sequencia/cadeiaMenor;//guardar o grau de parentesco após cada verificacao

			if(parentesco > 0 && parentesco < 0.62){//o zero deve ficar de fora para que o programa não contabilize
													//os pareamentos falhos em vez dos pareamentos que que deram sucesso

				if(parentesco > negativo){//armazenar o maior grau de parentesco registrado até o momento.

					negativo = parentesco;
					/*teste AAAAAAAAAAA
					CAAACCACACCC => 36.36%*/
				}

			}

			//mas se o proximo pareamento nao for igual e o grau de parentesco inferior a 62%
			if((cadeiaA[atualA + 1] != cadeiaB[atualB + 1]) && (parentesco < 0.62)){

				sequencia = 0;
				parentesco = 0;
				cadeiaA[tamanhoA] = cadeiaA[atualA];
				atualA++;
				tamanhoA++;

			}

			//e se o proximo pareamento tambem for igual
			if(cadeiaA[atualA + 1] == cadeiaB[atualB + 1]){

				cadeiaA[tamanhoA] = cadeiaA[atualA];
				cadeiaB[tamanhoB] = cadeiaB[atualB];
				atualA++;
				atualB++;
				tamanhoA++;
				tamanhoB++;
				//se a varredura não identificar um pareamento anterior e a sequencia estiver no segundo pareamento
				if((cadeiaA[atualA - 1] == cadeiaB[atualB - 1]) && (sequencia == 1)){

					sequencia++;
					parentesco = sequencia/cadeiaMenor;//guardar o grau de parentesco

				}

			}

			if((cadeiaA[atualA + 1] != cadeiaB[atualB + 1]) && (parentesco >= 0.62)){
				//se depois de uma sequencia de pareamentos o proximo pareamento não for igual,
				//mas o valor do parentesco for superior ou igual 62%,
				//informe o grau de parentesco e saia do programa
				printf("\n\nParentesco de %.2f%%\nDiagnóstico: POSITIVO", parentesco * 100);
				exit(0);

			}

			if(parentesco == 1){

				printf("\n\nParentesco de %.2f%%\nDiagnóstico: POSITIVO", parentesco * 100);
				exit(0);

			}

		}

		//se os elementos analisados forem diferentes, continue a segunda string,
		//não adicione valores na sequencia e coloque o valor do primeiro indice no final para formar um array circular
		if((cadeiaA[atualA] != cadeiaB[atualB]) && (parentesco < 0.62)){

			sequencia = 0;
			parentesco = 0;
			cadeiaB[tamanhoB] = cadeiaB[atualB];
			atualB++;
			tamanhoB++;

		}

		if((tamanhoA == TAMANHO - 1 || tamanhoB == TAMANHO - 1 ||
			atualA == TAMANHO - 1 || atualB == TAMANHO - 1) && (parentesco < 0.62)){
			//caso uma das variaveis acima vá invadir espaço de memória,
			//mostre o último registro de compatibilidade e pare o programa
		   printf("\n\nParentesco de %.2f%%\nDiagnóstico: NEGATIVO", negativo * 100);
		   exit(0);

		}

		if((tamanhoA == TAMANHO - 1 || tamanhoB == TAMANHO - 1 ||
			atualA == TAMANHO - 1 || atualB == TAMANHO - 1) && (parentesco >= 0.62)){
			//caso uma das variaveis acima vá invadir espaço de memória,
			//mostre o último registro de compatibilidade e pare o programa
		   printf("\n\nParentesco de %.2f%%\nDiagnóstico: POSITIVO", parentesco * 100);
		   exit(0);

		}


	}

	printf("\n\nParentesco de %.2f%%\nDiagnóstico: NEGATIVO", negativo * 100);
	exit(0);

}
