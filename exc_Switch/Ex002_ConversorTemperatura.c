#include <stdio.h>
#include <locale.h>

main(){
	setlocale (LC_ALL, "Portuguese");
	float C, F, resposta, temp;
	char conceito;
	
	printf("O que voc� quer converter?\n 1- Fahrenheit para Celsius \n 2- Celsius para Fahrenheit\n");
	scanf ("%f", &resposta);
	
	
	if(resposta==1){
		conceito = 'A';	
	}else if (resposta==2){
		conceito = 'B';
	}
		
		
	switch (conceito){
		case 'B':
			printf ("Informe o F: ");
			scanf("%f", &temp);
			C = (temp + 32)*1.8;
			printf("O Celsius � %.2f",C);
		break;
		case 'A':
			printf ("Informe o �C: ");
			scanf("%f", &temp);	
			F = (temp - 32)/1.8;
			printf("O Fahrenheit � %.2f",F);
		break;

	}
	
}
