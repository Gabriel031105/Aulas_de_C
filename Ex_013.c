#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, resultado;
	
	printf ("\nInforme o primeiro n�mero: ");
	scanf ("%f", &n1);
	
	printf ("\nInforme o segundo n�mero: ");
	scanf ("%f", &n2);
	
	printf ("\nInforme o terceiro n�mero: ");
	scanf ("%f", &n3);
	
	resultado = (n1+n3)*n2;
	
	printf ("\nO resultado �: %.2f", resultado);
}
