/*3 – Criar uma matriz [5X5] do tipo real. Responder o que se pede:
a) Informar o seu maior elemento e sua posição;
b) Informar a soma de cada linha;
c) Informar a média de cada linha;
d) Informar a soma e a média de todos os elementos.*/

#include <stdio.h>
#define TAMANHO 5

int main()
{
    double matriz[TAMANHO][TAMANHO] = { {1,2,3,4,5},
                                        {3,6,5,4,7},
                                        {7,8,9,6,5},
                                        {6,4,7,8,2},
                                        {6,8,7,4,2} };
                                        
    double maior = matriz[0][0];
    int posicaoLinha;
    int posicaoColuna;
    
    double arraySomaLinha[TAMANHO];
    double arrayMediaLinha[TAMANHO];
    double somaTotal = 0;
    double mediaTotal;
    int divisorTotal = 0;

    for(int linha = 0; linha < TAMANHO; linha++){
        
        int soma = 0;
        int divisor = 0;
        
        for(int coluna = 0; coluna < TAMANHO; coluna++){
        
            if(matriz[linha][coluna] > maior){
                
                maior = matriz[linha][coluna]; 
                posicaoLinha = linha;
                posicaoColuna = coluna;
                
            }
            
            soma += matriz[linha][coluna]; 
            somaTotal += matriz[linha][coluna]; 
            divisor++;
            divisorTotal++;
            
        }
        
        arraySomaLinha[linha] = soma;
        arrayMediaLinha[linha] = soma/divisor;
        
    }
    
    mediaTotal = somaTotal / divisorTotal;
    
    printf("\nO maior elemento é o %.0f na posição (linha x coluna): %d x %d", maior, posicaoLinha + 1, posicaoColuna + 1);
    
    printf("\nSoma de cada linha.\n");
    for(int atual = 0; atual < TAMANHO; atual++)
        printf("%.0f ", arraySomaLinha[atual]);
        
    printf("\nMédia de cada linha.\n");
    for(int atual = 0; atual < TAMANHO; atual++)
        printf("%.2f ", arrayMediaLinha[atual]);
        
    printf("\nA soma de todos os elementos é: %.0f\n", somaTotal);
    
    printf("A média de todos os elementos é: %.2f \n", mediaTotal);

}

