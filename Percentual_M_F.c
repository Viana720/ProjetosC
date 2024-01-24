#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
	//variável de armazenagem 
	int idade;
	
	// variáveis de armazenagem quantitativa e de fórmulas matematicas
	float  totalM = 0 , homens_Maior_21 = 0 , totalF = 0, mulheres_Maior_21 = 0,  percent_homens, percent_mulheres  ;
	
	//variável reponsável por armazenar o caractere correspondente ao sexo
	char sexo;
	
	//loop infinito até que o usuário digite o comando para quebrar o loop
	while(1){ 
	
		printf("Para encerrar a operação digite q ou Q no campo de informação do sexo!\n");
		printf("Informe seu sexo(m/f): ");
		scanf("%s", &sexo);
		if (sexo == 'q'|| sexo == 'Q'){// comando para quebrar o loop
			break;
		}
		printf("Informe sua idade: ");//
		scanf("%d", &idade);
		
	
		//segue as condicionais para cada caractere digitado pelo usuário
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
			printf("Informe um sexo válido!\n");
		}
  }
  
  percent_homens = (homens_Maior_21/totalM) *100; // formula para encontrar a porcentagem de homens com 21 anos ou mais
  percent_mulheres = (mulheres_Maior_21/totalF) *100; // formula para encontrar a porcentagem de mulheres com 21 anos ou mais
	
	
  // informações da operação realizada para o usuário
  printf("O total de homens é: %.0f\n", totalM);
  printf("O total de homens maiores de 21 é de: %.0f\n", homens_Maior_21 );
  printf("A porcentagem de homens com idade igual ou maior a 21 é de: %.2f%%\n", percent_homens );
  printf("O total de mulheres é: %.0f\n", totalF);
  printf("O total de mulheres maiores de 21 é de: %.0f\n", mulheres_Maior_21 );
  printf("A porcentagem de mulheres com idade igual ou maior a 21 é de: %.2f%%\n", percent_mulheres );
  
  	system("pause");
	return 0;
}
