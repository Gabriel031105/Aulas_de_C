#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int numero, resto;
	
	printf("Informe um n�mero inteiro: ");
	scanf("%i", &numero);
	
	resto = numero%2;
	
	printf ("\nO resto da divis�o por 2 �: %i", resto);
	
}
