#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float raio, altura, volume;
	
	printf("Informe o valor do raio: ");
	scanf("%f", &raio);

	printf("Informe a altura: ");
	scanf("%f", &altura);
	
	volume=(3.1416*raio*raio)*altura;
	
	printf("O volume do cilindrio é: %.2f", volume);
}
