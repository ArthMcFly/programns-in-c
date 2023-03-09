#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	void hello(char[],int); 
	//A partir de agora quando declararmos uma função, iremos
	//declrá-la abaixo da função msin() e apenas declarar seu 
	//protótipo acima, isso permite que o código seja mais limpo e
	//que se ouver falta de argumentos ao chamar uma função,dê erro 
	//ao invés de compilar com bugs.
	int main(){
		char name[] = "Arthur";
		int age = 15;
		hello(name, age);
		return 0;

	}

	void hello(char name[], int age){
		printf("Você se chama %s e tem %d anos\n", name, age);
	}
