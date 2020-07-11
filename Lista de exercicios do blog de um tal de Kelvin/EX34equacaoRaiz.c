/*Desenvolver um algoritmo que leia os coeficientes
(a , b e c) de uma equação do segundo grau e calcule
suas raízes. O programa deve mostrar, quando possível,
o valor das raízes calculadas e a classificação das raízes.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2, delta;
    
    printf("Dada uma equação do tipo ax² + bx + c, informe os coeficientes.\n");
    scanf("%f%f%f", &a, &b, &c);
    
    delta = pow(b,2) - (4*a*c);
    
    x1 = (-b + sqrt(delta))/2*a;
    x2 = (-b - sqrt(delta))/2*a;
    
    if(delta == 0){
        
        printf("A solução da equação é %.2f.", x1);
        
    } else if(delta < 0){
        
        printf("Sem solução para números reais.");
        
    } else if (delta > 0){
        
        printf("As raízes da equação informada são: %.2f e %.2f", x1, x2);
        
    }
    
    return 0;
}
