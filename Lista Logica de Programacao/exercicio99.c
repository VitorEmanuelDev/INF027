/*Escrever um algoritmo e implementá-lo em linguagem C que dada uma matriz N X N,
contendo, em cada linha, as idades de um casal cis, criar uma
matriz de freqüência de idade de casamento, com as contagens para cada combinação de
idades. As idades variam de 18 até 30. Os pares de idade devem ser lidos até que se
informe um valor inválido para a idade de qualquer dos dois nubentes. Em seguida, o
programa deverá informar:
(1) Qual a idade mais freqüente de casamento dos homens
(2) Qual a idade mais freqüente de casamento das mulheres
(3) Qual a combinação mais freqüente de idades de casamento*/


#include <stdio.h>

int main()
{
    int casais = 7;
    int /*matrizCasais[casais][2],*/ homens[casais], mulheres[casais];


   /*
    //informar quantas linhas a matriz vai ter
    printf("Quantos casais há?:\n");
    scanf("%d", &casais);

    // usuário informa cada idade que vai ser armazenada na matriz
    printf("Informe as idades dos casais (18 a 30 / H e M):\n");

    for(i = 0; i < casais; i++){

        for(j = 0; j < 2; j++){

            scanf("%d", &matrizCasais[i][j]);

            if(matrizCasais[i][j] > 30 || matrizCasais[i][j] < 18){

                break;

            }

        }

    }
    */


    //teste
   int matrizCasais[7][2] = {{27, 23},
                           {24, 21},
                           {24, 21},
                           {27, 23},
                           {29, 21},
						   {27, 23},
						   {26, 21}};

    // mostrar as idades dos casais
    printf("\nIdades dos casais:\n");

    for(int i = 0; i < casais; i++){

        for(int j = 0; j < 2; j++){

            printf("%4d", matrizCasais[i][j]);

            if(matrizCasais[i][j] > 30 || matrizCasais[i][j] < 18){

                printf(" => Idade inválida.\n");
                break;

            }

        }

        printf("\n");

    }

    int freq_homens[casais];
    int freq_mulheres[casais];


    // separar idades de homens e mulheres em dois arrays diferentes
    printf("\nHomens:\n");

    for(int i = 0; i < casais; i++){

        homens[i] = matrizCasais[i][0];
        freq_homens[i] = -1;
        printf("%d ", homens[i]);

    }

    printf("\nMulheres:\n");

    for(int i = 0; i < casais; i++){

        mulheres[i] = matrizCasais[i][1];
        freq_mulheres[i] = -1;
        printf("%d ", mulheres[i]);

    }

	 printf("\n");


    int cont_homens;
    int cont_mulheres;
    for(int i = 0; i < casais; i++){

        cont_homens = 1;
        cont_mulheres = 1;
        for(int j = i + 1; j < casais; j++){

            /* Se elemento duplicado for encontrado */
            if(homens[i] == homens[j]){

                cont_homens++;

                /* para não contar a frequencia do mesmo elemento de novo */
                freq_homens[j] = 0;
            }

	   if(mulheres[i] == mulheres[j]){

		   cont_mulheres++;


		   freq_mulheres[j] = 0;
	   }
        }

        /* Se a frequencia do elemento atual não for contada*/
        if(freq_homens[i] != 0){

        	freq_homens[i] = cont_homens;
        }

	if(freq_mulheres[i] != 0){

		freq_mulheres[i] = cont_mulheres;
	}
    }

    int maior_h = 0;
    int pos_h = 0;
    int maior_m = 0;
    int pos_m = 0;

    for(int i = 0; i < casais; i++){

    	if(freq_homens[i] > maior_h){

    		maior_h = freq_homens[i];
    		pos_h = i;

    	}
    	if(freq_mulheres[i] > maior_m){

		maior_m = freq_mulheres[i];
		pos_m = i;

	}

    }

    int idade_h = homens[0];
    int idade_m = mulheres[0];
    int soma_i;
    int soma_j;

    for(int i = 0; i < casais; i++){

         for(int j = i + 1; j < casais; j++){

        	soma_i = homens[i] + mulheres[i];
        	soma_j = homens[j] + mulheres[j];

        	 if((soma_i == soma_j) && (homens[i] == homens[j]) && (mulheres[i] == mulheres[j])){

				 idade_h = homens[i];
				 idade_m = mulheres[i];

        	 }

         }
    }


	printf("\nA idade mais frequente de casamento para homens é de: %d", homens[pos_h]);

	printf("\nA idade mais frequente de casamento para mulheres é de: %d", mulheres[pos_m]);

	printf("\nA combinação mais frequente é %d e %d.", idade_h, idade_m);

    return 0;

}
