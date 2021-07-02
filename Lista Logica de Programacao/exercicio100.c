/*100. Verificar se uma matriz dada forma um Quadrado Latino de ordem N, no qual
em cada linha e em cada coluna aparecem todos os inteiros 1,2,3, ... N, ou seja, cada linha
ou coluna é permutação dos N primeiros números inteiros. */


#include <stdlib.h>
#include <stdio.h>

int main()
{
	int N;

    printf("Quantos elementos para cada coluna e cada linha?\n");
    scanf("%d", &N);

    int matriz[N][N];

    printf("Informe os valores da matriz:\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &matriz[i][j]);

        }
    }
	//teste
	/*int N = 4;
    int matriz[4][4] = { { 1, 2, 3, 4 },
                         { 2, 1, 4, 3 },
                         { 3, 4, 1, 2 },
                         { 4, 3, 2, 1 } };
*/
	int soma_l;
	int soma_ac_l = 0;
	int soma_c;
	int soma_ac_c = 0;

	for (int i = 0; i < N; i++) {
    	soma_l = 0;
    	soma_c = 0;
        for (int j = 0; j < N; j++) {

        	soma_l += matriz[i][j];
        	soma_ac_l += matriz[i][j];

        	soma_c += matriz[j][i];
			soma_ac_c += matriz[j][i];

        }
        //printf("%d ", soma_ac_l);
        if(soma_ac_l % soma_l != 0 || soma_ac_c % soma_c != 0){

        	printf("A matriz informada NÃO é um quadrado latino: soma de colunas e linhas difere.");
			exit(0);

        }

    }


  //int flag;

	for (int i = 0; i < N; i++) {

		int flag = 0;

		for (int j = 0; j < N; j++) {

			if(i == j){

				for(int k = 0; k < N; k++){

					if (matriz[i][j] == matriz[i][k])
						flag++;

				}

				for(int l = 0; l < N; l++){

					if (matriz[i][j] == matriz[l][j])
						flag++;

				}

			}

			//printf("%d ", flag);
			if(flag > 2){

				printf("A matriz informada NÃO é um quadrado latino. Existe um mesmo número mais de uma vez numa linha ou coluna.");
				exit(0);

			}

			if (matriz[i][j] <= 0 || matriz[i][j] > N ) {

				printf("A matriz informada NÃO é um quadrado latino. Existe um número que não está conforme a regra.");
				exit(0);

			}

		}

	}

	for(int i = 0; i < N; i++){
		printf("[ ");
		for(int j = 0; j < N; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("]\n");
	}

	printf("\nA matriz informada é um quadrado latino.");

	return 0;

}
