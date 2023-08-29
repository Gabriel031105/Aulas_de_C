#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero = 7, multiplicacao, resultado;

    for (multiplicacao = 1; resultado < 70; multiplicacao++) {
        resultado = numero * multiplicacao;
        printf("%i vezes %i é: %i\n", numero, multiplicacao, resultado);
    }

    return 0;
}

