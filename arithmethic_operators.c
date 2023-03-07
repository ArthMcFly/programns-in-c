#include <stdio.h>
#include <stdlib.h>
	int x = 2;
	float y = 5;
	float z;

	// Tive esse caso estranho onde só pude fazer a soma de duas variáveis 
	// se elas fossem duas constantes.
	int main(){
		z = y / x;
		//A soma das variáveis deve ser feita dentro de uma função 
		//para funcionar corretamente, caso contrário elas terão 
		//que ser constantes.
		//Em uma divisão, o divisor (y) e o quociente (z)  deve sempre
		//ser um número de ponto flutuante para não arredondar o resultado
		printf("%f\n", z);
		//(x = x + 4) = (x+=4) 
		//(x = x * 4) = (x*=4)
		//(x = x / 4) = (x/=4)
		return 0;
	}




