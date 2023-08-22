#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2;
	
	printf("Informe o primeiro número: ");
	scanf("%f", &n1);
	
	printf("Informe o segundo número: ");
	scanf("%f", &n2);
	
	printf("\nO resultado é: %.2f",(n1-n2)/10);
}
