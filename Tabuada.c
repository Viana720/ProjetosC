#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
  int a, b, m;
  printf("Digite um valor de 1 a 10: \n");
  scanf("%d", &a);
  
  
    for(b = 1; b <= 10; b++){
    	m = a*b;
    printf("%d x %d = %d\n", a,b, m);
    }
    return 0;
  }
