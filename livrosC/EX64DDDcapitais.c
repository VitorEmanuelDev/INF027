/*Fazer um algoritmo que leia os dados de um usuário de telefonia de uma empresa de
telecomunicações: cidade e número completo do telefone e verifique se o número do telefone
(Exemplo: 11934232347) está correto, ou seja, se o prefixo (2 primeiros dígitos) é correspondente
à cidade especificada. Sabendo-se que os prefixos existem nas cidades conforme a tabela abaixo:


Estado	            Capital	        DDD
    
Acre	            Rio Branco	    68
Alagoas	            Maceió	        82
Amapá	            Macapá	        96
Amazonas	        Manaus	        92
Bahia   	        Salvador	    71
Ceará	            Fortaleza	    88
Distrito Federal	Brasília	    61
Espírito Santo	    Vitória	        27
Goiás	            Goiânia	        62
Maranhão	        São Luís	    98
Mato Grosso	        Cuiabá	        65
Mato Grosso do Sul	Campo Grande	84
Minas Gerais	    Belo Horizonte	31
Paraná	            Curitiba	    41
Paraíba	            João Pessoa	    83
Pará	            Belém	        91  
Pernambuco	        Recife	        81  
Piauí	            Teresina	    86
Rio de Janeiro	    Rio de Janeiro 	21
Rio Grande do Norte	Natal	        84  
Rio Grande do Sul	Porto Alegre	51
Rondonia	        Porto Velho	    69
Roraima	            Boa Vista	    95
Santa Catarina	    Florianópolis	48
Sergipe	            Aracaju	        79
São Paulo	        São Paulo	    11
Tocantins	        Palmas	        63
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    float numero, DDD;
    char cidade[25];
    
    printf("Informe o nome da sua capital\nCaso necessite de espaço, use o underscore (ex: '_')\n");
    scanf("%s", cidade);
    
    printf("Qual o seu número de telefone?\nSeu número deve conter o DDD + nove dígitos para ser válido.\n");
    scanf("%f", &numero);
    
    DDD = numero/1000000000;
    
    if(strcmp(cidade,"Rio_Branco") == 0 && floor(DDD) == 68){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else if(strcmp(cidade,"Maceió") == 0 && floor(DDD) == 82){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else if(strcmp(cidade,"Macapá") == 0 && floor(DDD) == 96){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else if(strcmp(cidade,"Manaus") == 0 && floor(DDD) == 92){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else if(strcmp(cidade,"Salvador") == 0 && floor(DDD) == 71){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else if(strcmp(cidade,"Fortaleza") == 0 && floor(DDD) == 88){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else if(strcmp(cidade,"Brasília") == 0 && floor(DDD) == 61){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else if(strcmp(cidade,"Vitória") == 0 && floor(DDD) == 27){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else if(strcmp(cidade,"Goiânia") == 0 && floor(DDD) == 62){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else if(strcmp(cidade,"São_Luís") == 0 && floor(DDD) == 98){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else if(strcmp(cidade,"Cuiabá") == 0 && floor(DDD) == 65){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else if(strcmp(cidade,"Campo_Grande") == 0 && floor(DDD) == 84){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else if(strcmp(cidade,"Belo Horizonte") == 0 && floor(DDD) == 31){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else if(strcmp(cidade,"Curitiba") == 0 && floor(DDD) == 41){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else if(strcmp(cidade,"João Pessoa") == 0 && floor(DDD) == 83){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else if(strcmp(cidade,"Belém") == 0 && floor(DDD) == 91){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else if(strcmp(cidade,"Recife") == 0 && floor(DDD) == 81){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else if(strcmp(cidade,"Teresina") == 0 && floor(DDD) == 86){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else if(strcmp(cidade,"Rio_de_Janeiro") == 0 && floor(DDD) == 21){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else if(strcmp(cidade,"Natal") == 0 && floor(DDD) == 84){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else if(strcmp(cidade,"Porto_Alegre") == 0 && floor(DDD) == 51){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else if(strcmp(cidade,"Porto_Velho") == 0 && floor(DDD) == 69){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else if(strcmp(cidade,"Boa_Vista") == 0 && floor(DDD) == 95){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else if(strcmp(cidade,"Florianópolis") == 0 && floor(DDD) == 48){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else if(strcmp(cidade,"Aracaju") == 0 && floor(DDD) == 79){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else if(strcmp(cidade,"São_Paulo") == 0 && floor(DDD) == 11){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else if(strcmp(cidade,"Palmas") == 0 && floor(DDD) == 63){
        
        printf("Seu número corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    } else {
        
        printf("Seu número não corresponde à cidade informada.\nCidade: %s;\nDDD: %.0f.", cidade, floor(DDD));
        
    }

    return 0;
}
