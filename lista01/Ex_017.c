#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	char nome;
	float idade, total = 0, contador, media;
	
	
	for(contador=0; contador<4; contador++){
		printf("Informe seu nome: ");
		scanf("%s", &nome);
		
		printf("Informe sua idade: ");
		scanf("%f", &idade);
		
		total += idade;
		
	}
	
	media = total / 4.0;
	
	printf("\nA media das idades é: %f", media);
}
