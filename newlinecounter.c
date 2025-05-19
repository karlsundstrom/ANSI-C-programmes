#include <stdio.h>

int main()
{
	int nnl, c;
	nnl = 0;

	while((c = getchar()) != EOF)
		if (c == '\n')
			nnl++;
	if (nnl > 0)
		printf("No of new lines: %d\n", nnl);
	else if (nnl == 0)
		printf("No of new lines: 1\n");
	else
		printf("Unknown number of new lines\n");
}
