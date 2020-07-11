/*Um sistema de equações lineares do tipo:
ax + bx = c
dx + ex = f
pode ser resolvido segundo mostrado abaixo:
x = (ce – bf)/(ae – bd) e y = (af – cd)/(ae – bd)
Escreva um algoritmo que lê os coeficientes a, b, c, d, e, f. 

Calcule e mostre os valores de x e y.*/

#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, x, y;
    
    printf("Informe os valores A, B e c da primeira equação:\n");
    scanf("%d%d%d", &a, &b, &c);
    
    printf("Informe os valores D, E e F da segunda equação:\n");
    scanf("%d%d%d", &d, &e, &f);

    x = ((c * e) - (b * f))/((a * e) - (b * d));
    y = ((a * f) - (c * d))/((a * e) - (b * d));
    
    printf("x e y valem respectivamente %d e %d.", x, y);
    

    return 0;
}
