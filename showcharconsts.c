#include<stdio.h>

/* A program that copies its input to output, replacing each tab by \t, each backspace by \b,
 */

int main()
{
	int c;
	int backspace = '\b';
	int tab = '\t';
	int backslash = '\\';
	
	while ((c = getchar()) != EOF)
	{
		if (c == tab)
		{
			putchar('\\');
			putchar('t');
			continue;
		}
		if (c == backspace)
		{
			putchar('\\');
			putchar('b');
			continue;
		}
		if (c == backslash) 
		{
			putchar('\\');
			putchar('\\');
			continue;
		}

		putchar(c);
			
	}
}
