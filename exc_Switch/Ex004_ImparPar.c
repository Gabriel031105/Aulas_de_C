#include <stdio.h>
#include <locale.h>

main(){
	setlocale (LC_ALL, "Portuguese");
	int numero;
	char conceito;
	
	printf("Informe um n�mero: ");
	scanf("%i", &numero);
	
	if(numero%2=0){
		Conceito = 'A';
	}else if (numero%2 = 1){
		Conceito = 'B';
	}
	
	switch (conceito){
		case 'B':
			printf ("� impar!");
		break;
		case 'A':
			printf ("� par!");
		break;
	}
}	
