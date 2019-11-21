
#include <stdio.h>

int main()
{
    
    int cent, dez, uni;
    
    printf("Insira o número da centena.\n");
    scanf("%d", &cent);
    
    printf("Insira o número da dezena.\n");
    scanf("%d", &dez);
    
    printf("Insira o número da centena.\n");
    scanf("%d", &uni);
    
    
    printf(" O seu número é %d%d%d.\n", cent, dez, uni);
    
   int num [] = {cent, dez, uni};
   
   
    
   printf("O número ao contrário é: %d%d%d.\n", num[2], num[1], num[0]);
    
    
    return 0;
}
