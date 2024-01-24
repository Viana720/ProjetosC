#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	float limite2 (float n1){
		float operacao = n1+((n1*20)/100);
		return (operacao);
	}
	
	float deposito2 (float n1, float n2){
		float operacao = n1+n2;
		return (operacao);
	}
	
	float saque2 (float n1, float n2){
		float operacao = n1-n2;
		return (operacao);
	}

  int main(){
    setlocale(LC_ALL,"portuguese");
    
    float saldo= 5005, saque, deposito, limite, op;
    int j;

    do{
    printf("Bem-vindo(a)! Escolha a modalidade:\n");
    printf("(1) Consultar saldo\n");
    printf("(2) Consultar limite\n");
    printf("(3) Realizar depósito\n");
    printf("(4) Realizar saque\n");
    printf("(0) Sair\n");
    scanf("%d", &j);
      
    switch(j){
      case(1):
          printf("Seu saldo é igual a: R$%.2f\n", saldo);
      break;
      
      case(2):
        if(saldo > 5000){
          op = limite2(saldo);
          printf("Seu limite de crédito é: R$%.2f\n", op);
          break;
		}
        else{
          printf("Seu limite de crédito é: R$%.2f\n", limite = saldo);
          break;
		}
      case(3):
          printf("Insira o valor que será depositado:\n");
          scanf("%f", &deposito);
        if(deposito > 0){
          op = deposito2(saldo,deposito);
          printf("O saldo atual é: R$%.2f\n", op);
          break;
      	}
        else{
          printf("Nenhum valor inserido!\n");
          break;
     	}
      
      case(4):
          printf("Insira o valor que será sacado:\n");
          scanf("%f", &saque);
      if(saque > 0 && saque <= saldo){
	      op = saque2(saldo,saque);
	      printf("O saldo atual é: R$%.2f\n", op);
    	}
      else{
          printf("Nenhum valor inserido!\n");
    	}
      break;
      
      case(0):
          printf("Obrigado por utilizar nossos serviços!\n");

      default: printf("S2 S2 S2\n");
      break;
    }
    } while(j != 0);

  return 0;
  }
