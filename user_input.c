#include <stdio.h>
#include <stdlib.h>
	int main(){
		int age;
		char name[25];
		printf("Qual é a seu nome?\n");
		//Para ler texto com espaços nós devemos utilizar a função
		//fgets(), exemplo para esse código.
		//fgets(name,25,stdin);
		scanf("%24s", name);
		//Leituras de uma string não é necessário referenciar
		//o ponteiro da variável,além disso sempre limite o input
		//do usuário a um byte a menos do valor da string, para assim
		//não causar um buffer overflow.
		printf("Quantos anos você tem?\n");
		scanf("%d", &age);
		printf("Você se chama %s\n", name);
		printf("Você tem %d anos\n", age);
		return 0;
	}

