#include <stdio.h>
#include <locale.h>

main(){
	setlocale (LC_ALL, "Portuguese");
	char operacao;
	float numero1, numero2;
	
	printf("Informe uma opera��o matem�tica (+, -, *, /): ");
	scanf("%c", &operacao);
	
	printf("Informe o primeiro n�mero: ");
	scanf("%f", &numero1);
	
	printf("Informe o segundo n�mero: ");
	scanf("%f", &numero2);
	
	switch(operacao){
		case '+':
			printf("Resultado %.2f\n", numero1 + numero2);
			break;
		case '-':
			printf("Resultado %.2f\n", numero1 - numero2);
			break;
		case '*':
			printf("Resultado %.2f\n", numero1 * numero2);
			break;
		case '/':
			if (numero2 !=0){
				printf("Resultado %.2f\n", numero1 / numero2);
			}else {
				printf("N�o � poss�vel divir por zero \n");
			}
			break;
		default:
			printf("Opera��o Inv�lida.\n");
	}
	
	return 0;
}
