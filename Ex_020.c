#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float valor1, valor2, valor3, valor4, valor5, mediap;

	printf("\nInforme o primeiro número: ");
	scanf("%f", &valor1);
	
	printf("\nInforme o segundo número: ");
	scanf("%f", &valor2);
	
	printf("\nInforme o terceiro número: ");
	scanf("%f", &valor3);
	
	printf("\nInforme o quarto número: ");
	scanf("%f", &valor4);
	
	printf("\nInforme o quinto número: ");
	scanf("%f", &valor5);
	
	mediap = (valor1*2 + valor2*4 + valor3*2 + valor4*5 + valor5*3)/16;
	
	printf ("\nA média pondera dos cincos números foi de: %.2f", mediap);
}
