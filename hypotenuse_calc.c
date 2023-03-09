#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	int main(){
		double c1;
		double c2;
		double h1;
		printf("Digite o comprimento de um cateto:\n");
		scanf("%lf",&c1);
		printf("Digite o comprimento do outro cateto:\n");
		scanf("%lf",&c2);
		h1 = sqrt(pow(c1,2) * pow(c2,2));
		printf("O valor da hipotenusa é:%.2lf\n",h1);
		return 0;
	}

