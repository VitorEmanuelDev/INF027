/*Escreva um programa que receba um numero inteiro de 1 a 100 e mostre na tela o
numero por extenso.*/

#include <stdio.h>
#include <stdlib.h>

int
main ()
{
  int num, unidade;

  printf ("Informe um número de 1 a 100.\n");
  scanf ("%d", &num);

    if (num <= 0 || num > 100){

      printf ("Sua escolha não está dentro do escopo.\nTente novamente.\n");

    }else if ((num / 100 == 1)){

      printf ("Cem");

    }else{

      if (num >= 90){

	  printf ("Noventa");

	}else if (num >= 80 && num < 90){

	  printf ("Oitenta");

	}else if (num >= 70 && num < 80){

	  printf ("Setenta");

	}else if (num >= 60 && num < 70){

	  printf ("Sessenta");

	}else if (num >= 50 && num < 60){

	  printf ("Cinquenta");

	}else if (num >= 40 && num < 50){

	  printf ("Quarenta");

	}else if (num >= 30 && num < 40){

	  printf ("Trinta");

	}else if (num >= 20 && num < 30){

	  printf ("Vinte");

	}


    //encontrar o resto do número informado, caso seja maior que 19 para saber qual unidade deve mostrar na tela
      unidade = num % 10;

    if (num > 19){

	  if (unidade == 9){

	      printf (" e nove");

	  }else if (unidade == 8){

	      printf (" e oito");

	  }else if (unidade == 7){

	      printf (" e sete");

	  }else if (unidade == 6){

	      printf (" e seis");

	  }else if (unidade == 5){

	      printf (" e cinco");

	  }else if (unidade == 4){

	      printf (" e quatro");

	  }else if (unidade == 3){

	      printf (" e três");

	  }else if (unidade == 2){

	      printf (" e dois");

	  }else if (unidade == 1){

	      printf (" e um");

	  }
	}
	

    if (num >= 10 && num < 20){

	  if (num == 10){

	      printf ("Dez");

	  }else if (num == 11){

	      printf ("Onze");

	  }else if (num == 12){

	      printf ("Doze");

	  }else if (num == 13){

	      printf ("Treze");

	  }else if (num == 14){

	      printf ("Quatorze");

	  }else if (num == 15){

	      printf ("Quinze");

	  }else if (num == 16){

	      printf ("Dezesseis");

	  }else if (num == 17){

	      printf ("Dezessete");

	  }else if (num == 18){

	      printf ("Dezoito");

	  }else if (num == 19){

	      printf ("Dezenove");

	  }

	}else if (num < 10){

	  if (num == 9){

	      printf ("Nove");

	  }else if (num == 8){

	      printf ("Oito");

	  }else if (num == 7){

	      printf ("Sete");

	  }else if (num == 6){

	      printf ("Seis");

	  }else if (num == 5){

	      printf ("Cinco");

	  }else if (num == 4){

	      printf ("Quatro");

	  }else if (num == 3){

	      printf ("Três");

	  }else if (num == 2){

	      printf ("Dois");

	  }else if (num == 1){

	      printf ("Um");

	  }
	}
  }
  return 0;
}


