#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	int main(){
		char grade;
		printf("Digite sua nota: \n");
		scanf("%c",&grade);
		switch(grade){
			case 'a':
				printf("Perfeito!!!\n");
				break;
			case 'b':
				printf("bom!!!\n");
				break;
			case 'c':
				printf("mediano\n");
				break;
			case 'd':
				printf("ruim\n");
				break;
			case 'f':
				printf("não passou\n");
				break;
			default:
				printf("nota não aceita");
		}
		return 0;
	}

