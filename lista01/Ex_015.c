#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2;
	
	printf("Informe o primeiro n�mero: ");
	scanf("%f", &n1);
	
	printf("Informe o segundo n�mero: ");
	scanf("%f", &n2);
	
	printf("\nO resultado �: %.2f",(n1-n2)/10);
}
