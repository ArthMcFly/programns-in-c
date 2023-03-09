#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	double square(double x){
		return x*x;
	}
	int main(){
		double x = square(3.14);
		printf("%lf\n", x);
		return 0;
	}

