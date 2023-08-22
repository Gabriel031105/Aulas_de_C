#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float vef1 = 4.1888, raio, vef;
	
	printf("Informe o raio da esfera: ");
	scanf("%f", &raio);

	vef = (vef1*raio*raio*raio);

	printf("O volume da esfera é: %.2f", vef);

}
