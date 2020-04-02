/*Certa vez, numa aula, a professora passou um filme para os alunos assistirem. Durante este filme, ela passou uma
lista de presença em sua sala para verificar a presença dos alunos, onde cada aluno deveria inserir apenas seu
número de registro (um número inteiro). Alguns alunos contudo, como possuem amigos que fogem da aula,
decidiram ser camaradas e inseriram os números de registro de seus amigos fujões. O problema é que muitos alunos
são amigos de alunos que fogem da aula e alguns números de registro acabaram sendo repetidamente inseridos na
lista de presença. Além de tudo, alguns dos alunos que se esperava que não estivessem na aula de fato estavam! A
professora, ao notar que a lista de presença continha alguns números repetidos, ficou sem entender, mas decidiu dar
um voto de confiança e dar presença a todos os alunos cujos números de registro estavam na lista. Como são muitos
alunos na sala e muitos números com repetição, ela pediu a sua ajuda para determinar o total de alunos que receberam
presença na aula e a o número destes alunos. Considere que a lista original possuía 50 números de
registro. (Adaptado OBI2012)
Um exemplo considerando uma lista com 10 números.
ENTRADA
1 – 10
2 – 20
3 – 50
4 – 15
5 – 50
6 – 50
7 – 20
8 – 10
9 – 7
10 – 50
*/
#include <stdlib.h>
#include <stdio.h>
#define TAM_LISTA 50
#include <math.h>

int main()
{
    int i, j, k = 0, elementos = 0, auxiliar = 0, lista[TAM_LISTA], armazena = 0, tamanho = 0, listaNova[] = {};
    
    elementos = sizeof(lista)/sizeof(int);
	
	printf("Número inicial de assinaturas: %d\n",elementos);
	
	for(i = 0; i < TAM_LISTA; i++){
	    
	    lista[i] = rand() % 50;
	    
	}
    
    for(i = 0; i < TAM_LISTA; i++){
        
        for(j = i + 1; j < TAM_LISTA; j++){
         
            if(lista[i] > lista[j]){
               
               auxiliar = lista[i];
               lista[i] = lista[j];
               lista[j] = auxiliar;
                
            } 
            
        }
    
    }
    
    for(j = 0; j < TAM_LISTA - 1; j++){
        
        //printf("%d ", lista[j]);
        if(lista[j] != lista[j+1]){
            
            listaNova[k] = lista[j];
            k++;
            tamanho++;
        }
        
    }
    
    listaNova[k] = listaNova[tamanho];
    
    for(k = 1; k < tamanho; k++){
        
        printf("%d ", listaNova[k]);
        
    }
    

    return 0;
}

