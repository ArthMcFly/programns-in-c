#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	int main(){
		int n = 0;
		int i = 0;
		while(n < 4000000){
			if(n%2 == 0){
				n = n + n;
			}else{}
		}
		printf("%d", n);
		return 0;
	}

