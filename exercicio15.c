#include <stdio.h>

int main()
{
    float alturaPredio, alturaPessoa, sombraPredio, sombraPessoa;
    
    printf("informe a sua altura em metros.\n");
    scanf("%f", &alturaPessoa);
    
    printf("informe a sombra do prédio em metros.\n");
    scanf("%f", &sombraPredio);
    
    sombraPessoa = alturaPessoa * 1.5;
    
    alturaPredio = (alturaPessoa * sombraPredio)/sombraPessoa; 
    
    printf("A altura do prédio é %.2f m.\n", alturaPredio);
    
