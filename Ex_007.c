#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float raio, altura, vcn;
	
	printf("Informe o valor do raio: ");
	scanf("%f", &raio);

	printf("Informe a altura: ");
	scanf("%f", &altura);
	
	vcn=((3.1416*raio*raio)/3)*altura;
	
	printf("O volume do cone é: %.2f", vcn);
}
