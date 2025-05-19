#include<stdio.h>

/* Count characters with for loop. send EOF signal by using ctrl+D while running the programme
 * note that terminal emulator will send newline signal when testing so it will always report off by one
 * SRC=R&K C 
 */

int main()
{
	double nc;

	for(nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
}
