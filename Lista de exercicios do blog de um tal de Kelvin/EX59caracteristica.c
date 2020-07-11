/*O número 3025 possui a seguinte característica:
30 + 25 = 55
55² = 3025
Fazer um algoritmo que dado um número de 4 dígitos
calcule e escreva se este número possui ou não tal característica.*/

#include <math.h>
#include <stdio.h>

int main()
{
    int num, milharCentena, dezenaUnidade, somaPartes, quadradoPartes;
    
    printf("Informe um número.\n");
    scanf("%d", &num);
    
    milharCentena = num/100;
    dezenaUnidade = num%100;
    somaPartes = milharCentena + dezenaUnidade;
    quadradoPartes = pow(somaPartes,2);
    
    if(num < 1000 || num > 9999){
        
        printf("Número inválido");
        
    } else if(quadradoPartes == num){
        
        printf("%d == %d",quadradoPartes, num);
        
    } else {
        
        printf("%d != %d",quadradoPartes, num);
        
    }

    return 0;
}
