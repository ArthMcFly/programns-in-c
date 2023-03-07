#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	int main(){
		double c; //perímetro 
		double a; //Área
		double r; //raio
		const double PI = 3.141592;
		printf("Qual é o raio da circunferência? (cm)\n");
		scanf("%lf", &r);
		//Nunca utilize o \n quando estiver fazendo leitura 
		//de uma variável.
		c = 2 * PI * r;
		a = PI * pow(r,2);
		printf("O valor da sua circunferência é: %lf cm\n", c); 
		printf("O Valor da área é:%lf cm\n", a);
		return 0;
	}

