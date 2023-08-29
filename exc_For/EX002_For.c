#include <stdio.h>
#include <locale.h>

main(){
	setlocale (LC_ALL, "Portuguese");
	int contador, numero = 1;
	
	while(numero <= 100){
		contador += numero ;
		numero++ ;
	}
	printf ("%i", contador);
}
