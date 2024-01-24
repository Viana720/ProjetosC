#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
	//vari�vel de armazenagem 
	int idade;
	
	// vari�veis de armazenagem quantitativa e de f�rmulas matematicas
	float  totalM = 0 , homens_Maior_21 = 0 , totalF = 0, mulheres_Maior_21 = 0,  percent_homens, percent_mulheres  ;
	
	//vari�vel repons�vel por armazenar o caractere correspondente ao sexo
	char sexo;
	
	//loop infinito at� que o usu�rio digite o comando para quebrar o loop
	while(1){ 
	
		printf("Para encerrar a opera��o digite q ou Q no campo de informa��o do sexo!\n");
		printf("Informe seu sexo(m/f): ");
		scanf("%s", &sexo);
		if (sexo == 'q'|| sexo == 'Q'){// comando para quebrar o loop
			break;
		}
		printf("Informe sua idade: ");//
		scanf("%d", &idade);
		
	
		//segue as condicionais para cada caractere digitado pelo usu�rio
		if (sexo == 'm'|| sexo == 'M'){
			totalM++;
			if ( idade >= 21){
				homens_Maior_21++;
			}
		}
		else if ( sexo == 'f' || sexo =='F'){
			totalF++;
			if (idade >= 21){
				mulheres_Maior_21++;
			}
		}
		
		
		else{
			printf("Informe um sexo v�lido!\n");
		}
  }
  
  percent_homens = (homens_Maior_21/totalM) *100; // formula para encontrar a porcentagem de homens com 21 anos ou mais
  percent_mulheres = (mulheres_Maior_21/totalF) *100; // formula para encontrar a porcentagem de mulheres com 21 anos ou mais
	
	
  // informa��es da opera��o realizada para o usu�rio
  printf("O total de homens �: %.0f\n", totalM);
  printf("O total de homens maiores de 21 � de: %.0f\n", homens_Maior_21 );
  printf("A porcentagem de homens com idade igual ou maior a 21 � de: %.2f%%\n", percent_homens );
  printf("O total de mulheres �: %.0f\n", totalF);
  printf("O total de mulheres maiores de 21 � de: %.0f\n", mulheres_Maior_21 );
  printf("A porcentagem de mulheres com idade igual ou maior a 21 � de: %.2f%%\n", percent_mulheres );
  
  	system("pause");
	return 0;
}
