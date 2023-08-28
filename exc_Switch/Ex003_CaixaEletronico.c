#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int valorSaque, opcao, saldo = 6000;
    int numNotas50, numNotas20, numNotas10, numNotas5;

    printf("--------------------------------\n");
    printf(" BEM VINDO AO CAIXA ELETRÔNICO  \n");
    printf("--------------------------------\n");

    while (1) { // Loop
    
        printf("          ESCOLHA UMA OPÇÃO:           \n");
        printf("1- Dinheiro na conta \n");
        printf("2- Sacar dinheiro da conta\n");
        printf("3- Sair\n");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao) {
           				//saber dinheiro na conta
		    case 1:
                printf("Você tem R$ %d de saldo\n\n", saldo);
                break;

           
		   
		   case 2:
            			//perguntar valor do saque
                printf("Informe o valor do saque: ");
                scanf("%d", &valorSaque);


                if (valorSaque > saldo) {
                    printf("Saldo Insuficiente!\n");
                } else if (valorSaque > 0) {
                    int tempSaque = valorSaque;

                    numNotas50 = tempSaque / 50;
                    if (numNotas50 > 60) {
                        numNotas50 = 60;
                    }
                    tempSaque -= numNotas50 * 50;

                    numNotas20 = tempSaque / 20;
                    if (numNotas20 > 80) {
                        numNotas20 = 80;
                    }
                    tempSaque -= numNotas20 * 20;

                    numNotas10 = tempSaque / 10;
                    if (numNotas10 > 90) {
                        numNotas10 = 90;
                    }
                    tempSaque -= numNotas10 * 10;

                    numNotas5 = tempSaque / 5;
                    if (numNotas5 > 100) {
                        numNotas5 = 100;
                    }

                    if (valorSaque > numNotas50 * 50 + numNotas20 * 20 + numNotas10 * 10 + numNotas5 * 5) {
                        printf("Não é possível sacar esse valor com as notas disponíveis.\n");
                    } else {
                        saldo -= valorSaque;
                        printf("Parabéns, você sacou R$ %d\n", valorSaque);
                        // Imprimindo o número de notas de cada tipo
                        printf("Sendo:\n");
                        printf("%d notas de R$50\n", numNotas50);
                        printf("%d notas de R$20\n", numNotas20);
                        printf("%d notas de R$10\n", numNotas10);
                        printf("%d notas de R$5\n\n", numNotas5);
                    }
                }
                break;

            
						// Encerra o programa
			case 3:
                printf("Saindo...\n");
                return 0;
        }
    }

    return 0;
}

