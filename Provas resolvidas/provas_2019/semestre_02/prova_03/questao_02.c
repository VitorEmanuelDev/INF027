/*
 ============================================================================
 Name        : questao_02.c
 Author      : Vitor Emanuel Santos Lima
 Version     :
 Copyright   : 
 Description :

Bruno é um biólogo apaixonado por sua profissão. Sua especialidade é estudar o
comportamento de leveduras. Por isso, ele possui em seu laboratório centenas de colônias de diferentes
tipos desses microorganismos.
Nesta semana ele viu o anúncio de um evento inusitado: uma feira de leveduras. Nessa feira, vários
fornecedores estarão vendendo diferentes tipos de leveduras. Cada tipo de levedura é vendido em uma
placa de vidro, já preparada para a formação de uma colônia. Cada placa de vidro é vendida com
apenas uma única levedura.

Bruno deu uma olhada no catálogo com os tipos de leveduras que estarão à venda na feira, e notou
algumas coisas interessantes:
• Todos os tipos de leveduras à venda terão o mesmo preço.
• Todas as leveduras (de todos os tipos) se subdividem todas as noites para gerar outras leveduras.
Por exemplo, cada leveduras da colônia de tipo X se subdivide em 2 outras leveduras todas as
noites. Assim, no primeiro dia teremos só uma levedura na colônia. No dia seguinte, teremos 2,
e no próximo, 4. A quantidade de divisões de uma levedura depende do seu tipo.
• O crescimento da colônia cessa após um determinado número de dias, por causa da escassez de
alimento. A quantidade de dias em que uma colônia cresce depende do tipo de levedura.
É final de mês e Bruno já gastou quase tod o o seu dinheiro. Assim, resolveu que irá comprar apenas
uma colônia de leveduras. No entanto, ele pretende comprar a colônia que forneça a maior quantidade
de leveduras ao final do período de crescimento da mesma.
Ele tem um catálogo mostrando os tipos de leveduras à venda. Para cada tipo de levedura, o catálogo
informa o nome da levedura, a quantidade de leveduras geradas por uma única levedura em cada
divisão e por quantos dias a população da colônia crescerá. Porém, a calculadora que ele tem em casa
não é suficiente para que ele faça os cálculos necessários para decidir qual é a melhor colônia a
comprar.
Escreva um programa em C, que leia as informações sobre as leveduras e imprima o nome da levedura
que Bruno deve comprar.
 ============================================================================
 */

#include <stdio.h>
#define TAMANHO 50

struct colonia {

   char nome[TAMANHO];
   int indiceDeReproducao;
   int diasDeVida;

};

int main(void){

	struct colonia levedura[TAMANHO];

	int numeroDeLeveduras;
	printf("Quantos tipos de colônias de levedura deseja cadastrar para análise?\n");
	scanf("%d", &numeroDeLeveduras);

	if(numeroDeLeveduras <= 0){

		printf("Número de levaduras inválido.");
		return 0;

	}

	float custo;
	printf("Qual o preço das leveduras do catálogo?\n");
	scanf("%f", &custo);

	if(custo < 0){

		printf("Custo de levaduras inválido.");
		return 0;

	}

	printf("Informe os dados de cada levedura:\n\n");

	for(int atual = 0; atual < numeroDeLeveduras; atual++){

		printf("-Nome da levedura %d:\n", atual + 1);
		scanf("%s", levedura[atual].nome);

		printf("-Informe o índice de reprodução diário da levedura %s:\n", levedura[atual].nome);
		scanf("%d", &levedura[atual].indiceDeReproducao);

		printf("-Informe por quantos dias a levedura %s sobrevive:\n", levedura[atual].nome);
		scanf("%d", &levedura[atual].diasDeVida);

		if(levedura[atual].indiceDeReproducao <= 1){

			printf("Índice de reprodução informado é inválido.");
			return 0;

		}

		if(levedura[atual].diasDeVida < 1){

			printf("Número de dias informados é inválido.");
			return 0;

		}

	}

	printf("Lista de leveduras cadastradas.");
	printf(" Custo unitário: R$ %.2f.\n\n", custo);

	for(int atual = 0; atual < numeroDeLeveduras; atual++){

		printf("Levedura %d:\n", atual + 1);
		printf("Nome: %s\n", levedura[atual].nome);
		printf("Índice de reprodução: %d\n", levedura[atual].indiceDeReproducao);
		printf("Dias de vida: %d\n\n", levedura[atual].diasDeVida);

	}

	int escolhida;
	double colonias = 0;

	for(int atual = 0; atual < numeroDeLeveduras; atual++){

		double beneficio = 1;
		int current = 1;

		while(current < levedura[atual].diasDeVida){

			beneficio *= levedura[atual].indiceDeReproducao;
			current++;

		}

		if(beneficio > colonias){

			escolhida = atual;
			colonias = beneficio;

		}

	}

	printf("A levedura '%s' apresenta a melhor relação custo-benefício.", levedura[escolhida].nome);
	printf("\nPor R$ %.2f, é possível obter uma colônia com %.0f leveduras após %d dias de cultivo.",custo, colonias, levedura[escolhida].diasDeVida);

	return 0;

}

