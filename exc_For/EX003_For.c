#include <stdio.h>
#include <locale.h>

main(){
	setlocale (LC_ALL, "Portuguese");
	int numero = 0, contador = 0, soma = 0;
	float media = 0;
	
	do{
		printf("Informe um numero: ");
		scanf("%i", &numero);
		soma += numero;
		contador = contador + 1;
	}while (contador<5);
	
	media = soma/5;
	
	printf("A média é %.2f", media);
	
}
