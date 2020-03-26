/*Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um
programa que receba o código e o valor de 15 transações, calcule e mostre:
a. O valor total das compras à vista;
b. O valor total das compras a prazo;
c. O valor total das compras efetuadas; e
d. O valor da primeira prestação das compras a prazo juntas, sabendo-se que serão
pagas em três vezes.*/

#include <stdio.h>


int main()
{
    char pagamento;
    float  valor, valorCompras = 0, compraVista = 0, compraPrazo = 0;
    int i, compras;
    
    printf("Quantas compras foram feitas?\n");
    scanf("%d", &compras);
    printf("Informe os valores das compras e suas respectivas formas de pagamento (V ou P).\n");

    
    if(compras <= 0 || compras > 15){
        
        printf("Número inválido.");
        
    } else {
        
        for(i = 1; i <= compras; i++){
            
            scanf("%f %c", &valor, &pagamento);
            valorCompras += valor;
            
            if(pagamento == 'V'){
                
                compraVista += valor; 
                
            } else if(pagamento == 'P'){
                
                compraPrazo += valor; 
                
            }
        }
    }
    
    printf("Compras à vista: R$ %.2f\n", compraVista);
    printf("Compras a prazo: R$ %.2f\n", compraPrazo);
    printf("Valor total: R$ %.2f\n", valorCompras);
            

    return 0;
}
