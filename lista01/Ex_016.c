#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float contador, numero, total;
	
	for(contador=0; contador<5; contador++){
	    printf("Digite um n�mero: ");
	    scanf("%f", &numero);
	    total += numero;
	
	}
	
	printf("\nA soma dos n�meros �: %.2f", total);
}
