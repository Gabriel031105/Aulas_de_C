#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float raio, area;
	
	printf("Informe o valor do raio: ");
	scanf("%f", &raio);

	area=(3.1416*raio*raio);
	
	printf("A area do círculo é: %.2f",area);
}
