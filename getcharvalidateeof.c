#include <stdio.h>

/* Copy input to output 2nd version*/
/* SOURCE: K&R */

main()
{
	int c;
	
	while((c = getchar()) != EOF)
	{
		putchar(c);
		printf(" -  The expression getchar() != EOF evaluates to %i\n", c != EOF);
	}
}
