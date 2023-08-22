#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero, contador, total = 1, multiplicacao;
	
	for(contador=0; contador<3; contador++){
		printf("\nInforme um número inteiro: ");
		scanf ("%i", &numero);
		total = total * numero;
	}

	printf("\nOs três números multiplicados é: %i ", total);
} 
