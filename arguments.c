#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	void birthday(char name[]){
		printf("feliz aniversário %s \n", name);
	}

	int main(){
		char name[] = "Arthur";
		birthday(name);	
		return 0;
	}

