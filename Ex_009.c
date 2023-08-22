#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float vpm, l1, l2, l3;
	
	printf("Informe o primeiro lado do prisma: ");
	scanf("%f", &l1);
	
	printf("Informe o segundo lado do prisma: ");
	scanf("%f", &l2);
	
	printf("Informe o terceiro lado do prisma: ");
	scanf("%f", &l3);
	
	vpm=l1*l2*l3;
	
	printf("O volume do prisma é: %.2f", vpm);

}
