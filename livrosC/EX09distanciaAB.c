/*Dados dois pontos A e B, cujas coordenadas
A(x1, y1) e B(x2, y2) serão informadas via teclado,
desenvolver um algoritmo que calcule a distância entre A e B.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, distancia, difx, dify;
    
    printf("Informe as coordenadas de A(x1, y1) e B(x2, y2).\n");
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
    
    difx = x2 - x1;
    
    dify = y2 - y1;
    
    distancia = sqrt(pow(difx,2) + pow(dify,2));
    
    printf("A distância entre os pontos A e B é de %.1f cm\n", distancia);

    return 0;
}
