#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float lado, altura, vdp;
	
	printf("Informe o valor do lado: ");
	scanf("%f", &lado);

	printf("Informe a altura: ");
	scanf("%f", &altura);
	
	vdp=(lado*lado)*(altura/3);
	
	printf("O volume do cone é: %.2f", vdp);
}
