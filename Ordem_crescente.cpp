#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int a,b,c;
	
	printf("Informe o primeiro numero:\n ");
	scanf("%d", &a);
	
	printf("Informe o segundo numero:\n ");
	scanf("%d", &b);
	
	printf("Informe o terceiro numero:\n ");
	scanf("%d", &c);
	
	if(a>b && a>c && b>c){
		printf("A ordem crescente é: %d,%d,%d", c, b, a);
	}
	else{
		if(b>a && b>c && a>c)
			printf("A ordem crescente é: %d,%d,%d", c, a, b);
		else if (c>a && c>b && b>a)
			printf("A ordem crescente é: %d,%d,%d", a, b, c);
		else if (b>a && b>c && c>a)
			printf("A ordem crescente é: %d,%d,%d", a, c, b);
		else if (a>b && a>c && c>b)
			printf("A ordem crescente é: %d,%d,%d", b, c, a);
		else if (c>a && c>b && a>b)
			printf("A ordem crescente é: %d,%d,%d", b, a, c);
		else if (a==b && a==c)
			printf("Informe numeros diferentes!!! ");
	}
	
	
	return 0;
}
