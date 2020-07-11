#include <stdio.h>

int main()
{
    float dep; 
    float tax; 
    float r;
    float vt;
    
    printf("Deposite uma quantia\n");
    scanf("%f", &dep);
    
    printf("Informe a taxa\n");
    scanf("%f", &tax);
    
    vt = (1+(tax/100))*dep;
    
    printf("O valor total foi de %.2f\n", vt);
    
    r = (tax/100)*dep;
    
    printf("O rendimento foi de %.2f\n", r);
    
    return 0;
}
