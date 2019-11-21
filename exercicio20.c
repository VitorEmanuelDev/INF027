#include <stdio.h>
#include <stdlib.h>

int main(){
    int prestacao;
    float valor;
    float entrada;
    
    printf("Informe o valor do produto.\n");
    
    scanf("%f", &valor);
    
    prestacao = valor/3;
    
    entrada = (((valor/3)-prestacao)*3)+ prestacao;
    
    printf("A sua entrada deve ser de %.2f.\n", entrada);
    
    printf("As suas duas prestações serão de %d\n", prestacao);

    return 0;
}
