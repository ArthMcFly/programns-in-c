#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	int main(){
		int age;
		printf("Qual é a sua idade?\n");
		scanf("%d",&age);
		if(age >= 18 && age <= 105){
			printf("você é maior de idade!!!\n");
		}
		else if(age > 0 && age <= 17){
			printf("você é menor de idade!!!\n");
		}
		else{
			printf("idade inválida\n");
		}
		
		return 0;
	}

