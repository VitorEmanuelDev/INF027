//Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é suficientemente longa. Assumindo 
//que seja possível medir sua sombra e a do prédio no chão, e que você lembre da sua altura, faça um programa para
//ler os dados necessários e calcular a altura do prédio.

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
    
    return 0;
}
