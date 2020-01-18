/*Elabore um algoritmo que calcule o que deve ser pago por
um produto, considerando o preço normal de etiqueta e a
escolha da condição de pagamento. Utilize os códigos da
tabela a seguir para ler qual a condição de pagamento
escolhida e efetuar o cálculo adequado.

Código  Condição de pagamento

0001    À vista em dinheiro ou cheque, recebe 10% de desconto
0002    À vista no cartão de crédito, recebe 5% de desconto
0003    Em 2 vezes, preço normal de etiqueta sem juros
0004    Em 3 vezes, preço normal de etiqueta mais juros de 10%
*/

#include <stdio.h>

int main()
{
    float preco, precoFinal, parcela;
    int codigo;
    
    printf("Informe o preço do produto:\n");
    scanf("%f", &preco);
    
    printf("Informe o código da forma de pagamento:\n\n");
    printf("0001 À vista em dinheiro ou cheque\n0002 À vista no cartão de crédito\n0003 Em 2 vezes\n0004 Em 3 vezes\n");
    scanf("%d", &codigo);
    
    if(codigo == 0001){
        
        precoFinal = preco * 0.9;
        printf("Pagamento à vista (dinheiro ou cheque).\n");
        
        
    }else if(codigo == 0002){
        
        precoFinal = preco * 0.95;
        printf("Pagamento à vista (cartão de crédito).\n");
        
    }else if(codigo == 0003){
        
        precoFinal = preco * 1;
        parcela = precoFinal/2;
        printf("Pagamento parcelado em 2x sem juros.\n");
        printf("Valor das parcelas: R$ %.2f\n",parcela);
        
    }else if(codigo == 0004){
        
        precoFinal = preco * 1.10;
        parcela = precoFinal/2;
        printf("Pagamento parcelado em 3x.\n");
        printf("Valor das parcelas: R$ %.2f\n",parcela);
        
    }
    
    
    printf("Valor a pagar: R$ %.2f", precoFinal);
    
    return 0;
}
