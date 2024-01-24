#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	float i, n, cont=0, negativo = 0, positivo = 0,soma = 0,media, porcentagemP, porcentagemN;
	char res;
	
	while (1){
		printf("informe um numero: \n");
		scanf("%f", &n);
		
		if(n>0){
			positivo+=1;
			cont+=1;
			soma= soma+n;
		}
		else{
			negativo+=1;
				cont+=1;
				soma= soma +n;
		}
		
		media = soma/cont;
		porcentagemP = ((positivo*10)/cont)*10;
		porcentagemN = ((negativo*10)/cont)*10;
		
		printf("Deseja continuar?(s/n): \n");
		scanf("%s", &res);
		
		if(res=='s'|| res=='S'){
			continue;
		}else{
			break;
		}
		
		i++;
			
	}
	printf("A media dos valores é de: %.1f\n", media);
	printf("A quantidade de numeros positivos é: %.0f\n", positivo);
	printf("A quantidade de numeros negativos é: %.0f\n", negativo);
	printf("O percentual de numeros positivos é: %.0f%%\n", porcentagemP);
	printf("O percentual de numeros negativos é: %.0f%%\n", porcentagemN);
	
	
	
	return 0;
}
