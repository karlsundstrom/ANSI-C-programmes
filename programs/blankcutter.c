#include<stdio.h>

/* program that copies input to its output, replacing each
 * string of one or more blanks by a single blank
 */

/* pseudocode;
 *
 * main(){
 * 	int char, lastchar;
 * 	char = getchar();
 *
 * 	while char != EOF
 *		if char is not blankspace
 *			lastchar = char;
 *			putchar(char);
 *		if char == ' '
 *			if char == lastchar
 *				check next char?
 *
 *		while char == ' '
 *			char = getchar
 * }
 */

int main()
{
	int c, lc;
	lc = 0;
	while ((c = getchar()) != EOF)
	{		
		if (c == ' ') 
		{
			if (lc != ' ')
			{
				putchar(c);
			}
		} else 
		{
			putchar(c);
		}
		lc = c;
	}
}
