
#include <math.h>
#include <stdio.h>
#include <stdint.h>

#define FRACTION_BITS 8

int32_t fp2fx (float_t a, int32_t n)
{
	
}

float_t fx2fp (int32_t X, int32_t n)
{
	
}

int main(void)
{	
	float_t a, b;
	double c;
	int32_t X;
	
	a = 2.4515;
	X = fp2fx(a, FRACTION_BITS);
	b = fx2fp(X, FRACTION_BITS);
		 
	printf("a = %f \n", a );
	printf("c = %f \n", c );
	printf("X = %d \n", X );
	printf("b = %f \n", b );
	printf("diff = %f \n", a - b );
	
	return 0;
}
