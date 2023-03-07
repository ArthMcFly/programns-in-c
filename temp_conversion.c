#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	int main(){
		char unit;
		float temp;
		printf("A temperatura está em (°F) ou (°C)?:\n");
		scanf("%c", &unit);
		if (unit == 'C' || unit == 'c'){
			printf("Qual é a temperatura?:\n");
			scanf("%f", &temp);
			temp = (temp * 9/5) + 32;
			printf("A temperatura é: %.2f\n°F", temp);
		}
		else if (unit == 'F' || unit == 'f'){
			printf("Qual é a temperatura?:\n");
			scanf("%f", &temp);
			temp = ((temp - 32) *5) /9;
			printf("A temperatura é: %.2f°C\n", temp);
		}
		else {
			printf("%c não é um valor suportado\n", unit);
		}
		return 0;
	}

