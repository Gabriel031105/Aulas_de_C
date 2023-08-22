#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3;
	
	printf("Informe um número: ");
	scanf("%f", &n1);
	
	printf("Informe outro número: ");
	scanf("%f", &n2);
	
	n3=n1+n2;
	
	printf("A soma dos dois números é: %.2f",n3);
}
