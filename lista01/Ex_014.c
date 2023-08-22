#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3;
	
	printf("\nInforme o primeiro número: ");
	scanf("%f", &n1);
	
	printf("\nInforme o segundo número: ");
	scanf("%f", &n2);
	
	n3 = (n1-n2)/10;
	
	printf("\nO resultado é: %.2f", n3);
}
