#include<stdio.h>

/*counts blank spaces*/

int main()
{
	int c, nbs;
	nbs = 0;
	while((c = getchar()) != EOF)
		if (c == ' ')
			nbs++;
	printf("No of blank spaces: %d\n", nbs);
}
