#include<stdio.h>
/* c to fahr table tool */
main()
{
	float fahr;
	int c, lower, upper, step;
	
	lower = -50;
	upper = 250;
	step = 10;
	
	c = lower;
	while(c <= upper) {
		fahr = c * 9.0/5.0 + 32;
		printf("%3d %6.2f\n", c, fahr);
		c = c + step;
	}
}
