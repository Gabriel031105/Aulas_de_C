#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float area, base, altura;
	
	printf("Informe o valor da base do tri�ngulo: ");
	scanf("%f", &base);
	
	printf("Informe o valor da altura do tri�ngulo: ");
	scanf("%f", &altura);
	
	area=(base*altura)/2;
	
	printf("A area do tri�ngulo �: %.2f",area);
}
