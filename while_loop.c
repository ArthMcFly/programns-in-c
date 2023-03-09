#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
	int main(){
		int i = 0;
		char name[25];
		printf("Digite seu nome\n");
		fgets(name,25,stdin);
		name[strlen(name) - 1] = '\0';
		while(strlen(name) == 0){
			system("clear");
			printf("Vocẽ não digitou seu nome!!!\n");
			printf("Digite seu nome\n");
			fgets(name,25,stdin);
			name[strlen(name) - 1] = '\0';
		}
		printf("Olá: %s\n",name);
		return 0;
	}

