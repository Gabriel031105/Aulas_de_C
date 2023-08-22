#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	char nome, profissao;
	int idade, salario;
	float novosalario, reducao;
	
	printf("\nInforme seu nome: ");
	scanf("%s", &nome);
	
	printf("\nInforme sua profissão: ");
	scanf("%s", &profissao);
	
	printf("\nInforme sua idade: ");
	scanf("%i", &idade);
	
	printf("\nInforme seu salário: ");
	scanf("%i", &salario);
	
	reducao = (salario/100)*1.3;
	novosalario = salario - reducao;
	
	printf("\nO seu novo salário será de: %.2f", novosalario);
}
