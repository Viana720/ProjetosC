#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int idade, diasVida;
	char nome[50];
	
	printf("Digite o seu nome: %s\n", &nome);
	scanf("%s", &nome );
	printf("Digite a sua idade: %d\n", &idade);
	scanf("%d", &idade );
	
	diasVida= idade*365;
	
	printf("Você já viveu (em dias): %d", diasVida);
	
	
	return 0;
}
