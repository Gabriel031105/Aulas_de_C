#include <stdio.h>
#include <locale.h>

main(){
	setlocale (LC_ALL, "Portuguese");
	int contador;
	
	for (contador=2; contador <=20; contador +=2){
		printf ("%d\n", contador);
	}
}
