#include <stdio.h>

/* Copy input to output 2nd version*/
/* SOURCE: K&R */

main()
{
	int c;

	while((c = getchar()) != EOF)
		putchar(c);
}
