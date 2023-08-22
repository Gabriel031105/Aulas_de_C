#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float contador, numero, total;
	
	for(contador=0; contador<5; contador++){
	    printf("Digite um número: ");
	    scanf("%f", &numero);
	    total += numero;
	
	}
	
	printf("\nA soma dos números é: %.2f", total);
}
