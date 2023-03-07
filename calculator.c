#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	int main(){
		char operator;
		double num1;
		double num2;
		double result;
		printf("Digite um operador: (+, -, *, /)");
		scanf("%c", &operator);
		printf("Digite o primeiro número:");
		scanf("%lf", &num1);
		printf("Digite o segundo número:");
		scanf("%lf", &num2);
		switch(operator){
			case '+':
				result = num1 + num2;
				printf("o resultado é: %.2lf\n", result);
				break;
			case '-':
				result = num1 - num2;
				printf("o resultado é: %.2lf\n", result);
				break;
			case '*':
				result = num1 * num2;
				printf("o resultado é: %.2lf\n", result);
				break;
			case '/':
				result = num1 / num2;
				printf("o resultado é: %.2lf\n", result);
				break;
		default:
			printf("Operador %c não válido\n", operator);
		}
		return 0;
	}

