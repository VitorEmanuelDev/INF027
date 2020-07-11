#include <stdio.h>

int main()
{
    float num, frac, inte, arre;
    
    printf("Informe um número.\n");
    scanf("%f", &num);
    
    inte = (int)num;
    printf("A parte inteira do número é %.2f\n",num);
    
    frac = (float)num - inte;
    printf("A parte fracionada do número é %f\n", frac);
    
    if (frac < 0.5){
        arre = num - frac;
        printf("O arredondamento para menor é %.2f", arre);
    } else if (frac > 0.5){
        arre = num + (1-frac);
        printf("O arredondamento para maior é %.2f", arre);
    }
    

    return 0;
}
