//Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles.

#include <stdio.h>

 int main()
{
    int numero1, numero2, quociente, resto;
    
    printf("Informe o numerador.\n");
    scanf("%d", &numero1);
    printf("Informe o denominador.\n");
    scanf("%d", &numero2);
    
    quociente = numero1/numero2;
    
    resto = numero1%numero2;
    
    printf("O quociente é de %d e o resto é de %d .", quociente, resto);

    return 0;
}

