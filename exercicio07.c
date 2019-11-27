#include <stdio.h>

int main()
{   
    int idade;
    int meses = idade /30;
    int anos = idade /365;
    
    printf("Qual a sua idade em dias?\n");
    scanf("%d", &idade);
    
    printf("Você tem %d anos. Isso equivale a %d meses.", anos, meses);
    
    return 0;
}
