#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float cpc, d, raio;
	
	printf("Informe o valor do raio: ");
	scanf("%f", &raio);

	d=raio+raio;
	cpc=3.1416*d;
	
	printf("O perímetro do círculo é: %.2f",cpc);
}
