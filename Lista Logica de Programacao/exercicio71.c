/*

Escreva um programa que leia um vetor de 10 posições de inteiros e um inteiro.
O programa deve informar a primeira posição onde este inteiro ocorre no vetor 
ou -1 caso o valor não ocorra no vetor (Busca sequencial).

*/
#include <stdio.h>

int main()
{
    int numero, valor, i, array[10] = {89 , 45, 23, 24 ,82 , 10 , 88 , 66 , 99 , 88};
    
    printf("Informe o número a ser procurado:\n");
    scanf("%d", &numero);
    
    valor = -1;
    
    for(i = 0; i < 10; i++){
        
        if(array[i] == numero){
            
            valor = i;
            printf("A primeira posição em que %d ocorre no array é no índice %d.", numero, valor);
            break;
            
        }
        
    }
    
    if(valor == -1){
        
        printf("O número %d não consta no array.", numero);
        
    }

    return 0;
}
