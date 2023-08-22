#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float area, base, altura;
	
	printf("Informe o valor da base do triângulo: ");
	scanf("%f", &base);
	
	printf("Informe o valor da altura do triângulo: ");
	scanf("%f", &altura);
	
	area=(base*altura)/2;
	
	printf("A area do triângulo é: %.2f",area);
}
