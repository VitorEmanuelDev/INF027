//Um circuito elétrico é composto de duas resistências R1 e R2 em paralelo, e ambas em sequência de uma resistência R3. Faça um algoritmo para calcular a resistência equivalente desse circuito.

#include <stdio.h>


int main()

{
    float r1, r2, r3, rparalela, rtotal;
    
    printf("Informe os valores das duas resistências que estão em paralelo e informe o valor da terceira resistência que é subsequente às duas primeiras.\n");
    scanf("%f %f %f", &r1, &r2, &r3);
    
    rparalela = (r1*r2)/(r1+r2);
    
    rtotal = rparalela + r3;
    
    printf("A resistência total do cicuito é %.2f:", rtotal);
    
    return 0;
}
