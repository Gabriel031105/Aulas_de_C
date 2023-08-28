#include <stdio.h>
#include <locale.h>

main(){
	setlocale (LC_ALL, "Portuguese");
	int numero;
	char day;
	
	do{ 
	  printf ("Informe um número de 1 a 7: ");	
	  scanf ("%d", &numero);
	}while (numero<=1 && numero>=7);
	
	switch(numero){
		case 1:
			printf("O dia é DOMINGO!");
			break;
		case 2:
			printf("O dia é SEGUNDA!");
			break;
		case 3:
			printf("O dia é TERÇA!");
			break;
		case 4:
			printf("O dia é QUARTA!");
			break;
		case 5:
			printf("O dia é QUINTA!");
			break;
		case 6:
			printf("O dia é SEXTA!");
			break;
		case 7:
			printf("O dia é SÁBADO!");
			break;
		default:
            printf("Dia Inválido!");
	}
	
}
