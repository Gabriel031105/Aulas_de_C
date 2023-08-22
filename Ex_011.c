#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float nota, media, contador, total = 0;
	
	for(contador=0; contador<3; contador++){
		printf("Informe sua nota: ");
		scanf ("%f", &nota);
		total += nota;
	}
	
	media = total/3;
	
	printf("A media das notas é: %.2f ", media);
}
