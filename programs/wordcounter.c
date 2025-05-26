#include<stdio.h>

#define IN 1 /*inside a word*/
#define OUT 0 /*outside a word*/

/* count lines, words, and character in input
 * from K&R C p. 20 */

int main()
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		nc++;
		if (c == '\n')
			nl++;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			nw++;
		}
	}
	printf("\nNo of new lines:%d \nNo of words:%d \nNo of chars:%d\n", nl, nw, nc);
}
