#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int numero,qtdPares = 0,qtdImpares = 0,somaPares = 0, somaGeral = 0;
    double mediaPares = 0, mediaGeral = 0;
    
    while (1) {
        printf("Digite um número (ou 0 para encerrar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero % 2 == 0) {
            qtdPares++;
            somaPares += numero;
        } else {
            qtdImpares++;
        }

        somaGeral += numero;
    }

    
    if (qtdPares > 0) {
        mediaPares = (double)somaPares / qtdPares;
    }

    
    if (qtdPares + qtdImpares > 0) {
        mediaGeral = (double)somaGeral / (qtdPares + qtdImpares);
    }

    printf("Quantidade de números pares: %d\n", qtdPares);
    printf("Quantidade de números ímpares: %d\n", qtdImpares);
    printf("Média dos valores pares: %.2lf\n", mediaPares);
    printf("Média geral dos números lidos: %.2lf\n", mediaGeral);

    return 0;
    
}
