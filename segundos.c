#include <stdio.h>

int main()
{
    
    int seg;
    int hor; 
    int min;
    
    printf("Escreva uma quantidade de segundos\n");
    scanf("%d", &seg);
    
    hor = seg/3600;
    
    printf("A quantidade de horas é %d\n", hor);
    
    min = hor*60;
    
    printf("A quantidade de minutos é %d\n", min);
    
    printf("A quantidade de segundos é %d\n", seg);
    
    return 0;
}
