#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	int find_max(int x, int y){
			return (x > y) ? x : y;
	}
	int main(){
		int max = find_max (7,4);
		printf("%d\n",max);
		return 0;
	}

