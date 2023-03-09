#include <stdio.h>
#include <stdlib.h>
#include <math.h>




//
//ESSE PROGRAMA NÃO FUNCIONA.
//   
	



int main(){
		int x,c;
		printf("Digite um número inteiro:\n");
		scanf("%d",&x);
		for (int i = 1;i <= x;i++){
			if(x % i == 0){
				c++;
			}
		}
		if(c == 2){
			printf("%d é um número primo\n",x);
		}else{
			printf("%d não é um número primo\n",x);
		}
		return 0;
	}

