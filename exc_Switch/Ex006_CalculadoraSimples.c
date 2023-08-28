#include <stdio.h>
#include <locale.h>

main(){
	setlocale (LC_ALL, "Portuguese");
	char operacao;
	float numero1, numero2;
	
	printf("Informe uma operação matemática (+, -, *, /): ");
	scanf("%c", &operacao);
	
	printf("Informe o primeiro número: ");
	scanf("%f", &numero1);
	
	printf("Informe o segundo número: ");
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
				printf("Não é possível divir por zero \n");
			}
			break;
		default:
			printf("Operação Inválida.\n");
	}
	
	return 0;
}
