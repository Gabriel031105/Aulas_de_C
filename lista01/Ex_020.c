#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float valor1, valor2, valor3, valor4, valor5, mediap;

	printf("\nInforme o primeiro n�mero: ");
	scanf("%f", &valor1);
	
	printf("\nInforme o segundo n�mero: ");
	scanf("%f", &valor2);
	
	printf("\nInforme o terceiro n�mero: ");
	scanf("%f", &valor3);
	
	printf("\nInforme o quarto n�mero: ");
	scanf("%f", &valor4);
	
	printf("\nInforme o quinto n�mero: ");
	scanf("%f", &valor5);
	
	mediap = (valor1*2 + valor2*4 + valor3*2 + valor4*5 + valor5*3)/16;
	
	printf ("\nA m�dia pondera dos cincos n�meros foi de: %.2f", mediap);
}
