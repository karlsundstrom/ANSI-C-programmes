#include<stdio.h>

/*counts no of tabs entered*/

int main()
{
	int c, nt;
	nt = 0;
	while ((c = getchar()) != EOF)
		if (c == '\t')
			nt++;
	printf("No of tabs: %d\n", nt);
}
