#include<stdio.h>

/* print fahrenheit-celsius table
 * for fahr = 0, 20, ..., 300 */
/* SOURCE: K&R */

main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;	/* lower limit of temperature table*/
	upper = 300;	/* upper limit */
	step = 20;	/* step size */


	fahr = lower;
	printf("Fahrenheit - C\n");
	while(fahr <= upper) {
		celsius = 5.0/9.0 * (fahr-32.0);
		printf("%3.0f\t  %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
