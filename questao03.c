/* Questão 03 Prof. Luiz Machado

Para incentivar os clientes a pagarem com débito automático,
a empresa resolveu oferecer descontos e canais extras
àqueles que aderiem nessa forma de pagamento. Clientes dos pacotes
Básico e Entretenimento ganham 5% de desconto e mais 6 canais,
e os dos demais pacotes ganham 10% de desconto e mais 11 canais.

Escreva um programa que receba como entrada o nome do pacote e
a forma de pagamento escohida por um cliente e exiba o valor final
da mensalidade e a quantidade total de canais à qual ele terá direito.

Básico - 32 canais e custa R$ 80.80
Entretenimento - 56 canais e custa R$ 100.40
Multicultural - 70 canais e custa R$ 130.23
Completo - 112 canais e custa R$ 215.50

*/
#include <stdio.h>
#include <string.h> 

int main()
{
    char pacote[25], pagamento[25];
    float mensalidade;
    int canais;
    
    printf("Informe o tipo de pacote escolhido.\n\nBásico - 32 canais e custa R$ 80.80\nEntretenimento - 56 canais e custa R$ 100.40\nMulticultural - 70 canais e custa R$ 130.23\nCompleto - 112 canais e custa R$ 215.50\n");
    scanf("%s", pacote);
    printf("Qual a forma de pagamento?\nDébito ou Crédito?\n");
    scanf("%s", pagamento);
    
    if (strcmp(pagamento, "Débito") == 0) {
        
       if (strcmp(pacote, "Básico") == 0){
           
        mensalidade = 80.80 * 0.95;
        canais = 32 + 6;
           
       } else if (strcmp(pacote, "Entretenimento") == 0){
           
        mensalidade = 100.40 * 0.95;
        canais = 56 + 6;
           
       } else if (strcmp(pacote, "Multicultural") == 0) {
           
        mensalidade = 130.23 * 0.9;
        canais = 70 + 11;
           
       } else if (strcmp(pacote, "Completo") == 0) {
           
        mensalidade = 215.50 * 0.9;
        canais = 112 + 11;
           
       }
        
    } else if(strcmp(pagamento, "Crédito") == 0){
        
        if (strcmp(pacote, "Básico") == 0){
           
        mensalidade = 80.80;
        canais = 32;
           
       } else if (strcmp(pacote, "Entretenimento") == 0){
           
        mensalidade = 100.40;
        canais = 56;
           
       } else if (strcmp(pacote, "Multicultural") == 0) {
           
        mensalidade = 130.23;
        canais = 70;
           
       } else if (strcmp(pacote, "Completo") == 0) {
           
        mensalidade = 215.50;
        canais = 112;
           
       }
        
    }
    
    printf("\nPacote: %s.\nMensalidade: R$ %.2f.\nCanais: %d.", pacote, mensalidade, canais);
    
    return 0;
}
