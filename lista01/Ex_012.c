#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero, contador, total = 1, multiplicacao;
	
	for(contador=0; contador<3; contador++){
		printf("\nInforme um n�mero inteiro: ");
		scanf ("%i", &numero);
		total = total * numero;
	}

	printf("\nOs tr�s n�meros multiplicados �: %i ", total);
} 
