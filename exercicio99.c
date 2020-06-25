/*Escrever um algoritmo e implementá-lo em linguagem C que dada uma matriz N X N,
contendo, em cada linha, as idades de um casal cis, criar uma
matriz de freqüência de idade de casamento, com as contagens para cada combinação de
idades. As idades variam de 18 até 30. Os pares de idade devem ser lidos até que se
informe um valor inválido para a idade de qualquer dos dois nubentes. Em seguida, o
programa deverá informar:
(1) Qual a idade mais freqüente de casamento dos homens
(2) Qual a idade mais freqüente de casamento das mulheres
(3) Qual a combinação mais freqüente de idades de casamento*/


#include <stdio.h>

int main()
{
    int casais, i, j, k, armazena = 0;
    int contaModa = 0, contaAtual = 0;
    int atual, modaHomens = 0, modaMulheres = 0;
    int matrizCasais[casais][2], homens[casais], mulheres[casais];
    
    //informar quantas linhas a matriz vai ter
    printf("Quantos casais há?:\n");
    scanf("%d", &casais);
    
    // usuário informa cada idade que vai ser armazenada na matriz
    printf("Informe as idades dos casais (18 a 30 / H e M):\n");
    
    for(i = 0; i < casais; i++){
        
        for(j = 0; j < 2; j++){
                
            scanf("%d", &matrizCasais[i][j]);

            if(matrizCasais[i][j] > 30 || matrizCasais[i][j] < 18){
                
                break;
                
            }
            
        }
        
    }
    
    
    // mostrar as idades dos casais
    printf("\nIdades dos casais:\n");
    
    for(i = 0; i < casais; i++){
    
        for(j = 0; j < 2; j++){
            
            printf("%4d", matrizCasais[i][j]);
            
            if(matrizCasais[i][j] > 30 || matrizCasais[i][j] < 18){
                
                printf(" => Idade inválida.\n");
                break;
                
            }
            
        }
    
        printf("\n");
        
    }
    
    // separar idades de homens e mulheres em dois arrays diferentes
    printf("\nHomens:\n");
    
    for(i = 0; i < casais; i++){
    
        homens[i] = matrizCasais[i][0];
        printf("%d ", homens[i]);
        
    }
    
    printf("\nMulheres:\n");
    
    for(i = 0; i < casais; i++){
    
        mulheres[i] = matrizCasais[i][1];
        printf("%d ", mulheres[i]);
        
    }
	
    
    // ordenar arrays
    for(i = 0; i < casais; i++){
        
       for(j = i + 1; j < casais; j++){
           
            if(homens[i] > homens[j]){
               
                armazena = homens[i];
                homens[i] = homens[j];
                homens[j] = armazena;
               
            }
            
            if(mulheres[i] > mulheres[j]){
                       
                armazena = mulheres[i];
                mulheres[i] = mulheres[j];
                mulheres[j] = armazena;
                       
            }
           
        }
        
    }
    
    //verificar se o bubble sort funcionou da forma correta.
    //for(i = 0; i < casais; i++){
    //
    //    mulheres[i];
    //    printf("%d ", mulheres[i]);
    //    
    //}
    //
    //for(i = 0; i < casais; i++){
    //
    //    homens[i];
    //    printf("%d ", homens[i]);
    //    
    //}
    
    //encontrar a idade mais frequente dos homens
    contaModa = 0;
    atual = 0;
    contaAtual = 0;
    
	for(i = 0; i < casais; i++){
	    
	  atual = homens[i]; 
  	  contaAtual = 0;
  	  
	  while(atual == homens[i]){
	      
	    i++;  
	    contaAtual++;
	  	
	  }	
	  
	  if(contaAtual > contaModa){
	      
	    contaModa = contaAtual;
	  	modaHomens = atual;
	  	
	  }
	  
	}
	
	//encontrar a idade mais frequente das mulheres
	contaModa = 0;
	atual = 0;
	contaAtual = 0;
    
	for(i = 0; i < casais; i++){
	    
		atual = mulheres[i]; 
  	  	contaAtual = 0;
  	  
	  	while(atual == mulheres[i]){
	      
	  	  i++;  
	  	  contaAtual++;
	  	
	  	}	
	  
	  if(contaAtual > contaModa){
	      
	  	contaModa = contaAtual;
	  	modaMulheres = atual;
	  	
	  }
	  
	}
	
	printf("\n\nA idade mais frequente de casamento para homens é de: %d", modaHomens);
	
	printf("\nA idade mais frequente de casamento para mulheres é de: %d", modaMulheres);

    return 0;
    
}
