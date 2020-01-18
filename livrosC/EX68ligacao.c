/*A cidade de Perdiz das Cruzes possui um único posto telefônico.
Por este posto são feitas todas as ligações interurbanas da cidade.

O valor a se pago e calculado seguindo as seguintes regras:

– Taxa de R$2,00 pela ligação, R$1,00 para os 3 primeiros minutos;

– Acima do três primeiros minutos as regras são de taxa de R$2,00
pela ligação R$1,50 para cada intervalo de 5 minutos e R$0.25
para cada minuto abaixo disto.

*/


#include <stdio.h>
#include <string.h>

int main()
{
    float taxa = 2, valorLigacao;
    int numero, minutos, resto;
    char resposta[15];
    
    printf("Digite um número de telefone:\n");
    scanf("%d", &numero);
    
    printf("Iniciar ligação?\n");
    scanf("%s", resposta);
    
    if (strcmp(resposta, "sim") == 0){
        
        printf("Quantos minutos durou a ligação?\n");
        scanf("%d", &minutos);
        
        if(minutos <= 3){
            
            valorLigacao = taxa + (minutos/3);
        
        } else {
            
            resto = minutos%5;
            valorLigacao = taxa + (1.5 * (minutos/5) + (resto * 0.25));
            
        }
        
        printf("Valor a pagar: R$ %.2f", valorLigacao);
        
    } else {
        
        printf("Até mais!");
    }

    return 0;
}
