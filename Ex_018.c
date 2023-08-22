#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int numero, resto;
	
	printf("Informe um número inteiro: ");
	scanf("%i", &numero);
	
	resto = numero%2;
	
	printf ("\nO resto da divisão por 2 é: %i", resto);
	
}
