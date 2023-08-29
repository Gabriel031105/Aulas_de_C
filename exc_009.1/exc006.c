#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    float media, altura, totalAltura = 0.0;
    int pessoas = 0;
    char resposta;
	

	for(;;){
		printf("\nInforme a altura: ");
		scanf("%f", &altura);
		totalAltura += altura;
		pessoas++; 
		
		printf("\nVocê quer continuar? [S/N] ");
		scanf(" %c", &resposta);
		
		if (resposta != 'S' && resposta != 's') {
            break;
        }
	}
	
	media = totalAltura / pessoas;
	printf("A média da altura da sala é: %.2f", media);
	
	return 0;
}
