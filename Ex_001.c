#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	char nome;
	float s, sn;
	
	printf("Informe seu nome: ");
	scanf("%s", &nome);
	
	printf("Informe seu sal�rio: ");
	scanf("%f", &s);
	
	sn=s*1.285;
	
	printf("Seu novo sal�rio com aumento de 28,5 porcento ser� de: %.2f ",sn);
}
