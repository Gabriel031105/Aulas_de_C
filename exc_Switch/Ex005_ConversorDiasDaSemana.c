#include <stdio.h>
#include <locale.h>

main(){
	setlocale (LC_ALL, "Portuguese");
	int numero;
	char day;
	
	do{ 
	  printf ("Informe um n�mero de 1 a 7: ");	
	  scanf ("%d", &numero);
	}while (numero<=1 && numero>=7);
	
	switch(numero){
		case 1:
			printf("O dia � DOMINGO!");
			break;
		case 2:
			printf("O dia � SEGUNDA!");
			break;
		case 3:
			printf("O dia � TER�A!");
			break;
		case 4:
			printf("O dia � QUARTA!");
			break;
		case 5:
			printf("O dia � QUINTA!");
			break;
		case 6:
			printf("O dia � SEXTA!");
			break;
		case 7:
			printf("O dia � S�BADO!");
			break;
		default:
            printf("Dia Inv�lido!");
	}
	
}
