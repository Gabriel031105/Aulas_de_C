#include <stdio.h>
#include <locale.h>

main(){
	setlocale (LC_ALL, "Portuguese");
	int idade;
	char conceito;
	
	printf ("Informe sua idade: ");
	scanf ("%i", &idade);
	
	if (idade<12){
		conceito = 'D';
		
	}if (idade>=12 && idade<=18){
		conceito = 'C';
		
	}if (idade>=19 && idade<=59){
		conceito = 'B';
	
	}if (idade>=60){
		conceito = 'A';

    }
	switch (conceito){
	case 'D': 
		printf("Criança");
		break;
	case 'C':
 	printf("Adolescente");
		break;
	case 'B':
		printf("Adulto");
		break;
	case 'A':	
	printf("Idoso");
		break;
}			
}
