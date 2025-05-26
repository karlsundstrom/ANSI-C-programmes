/* This is a program made for exercise 1-13 in K&R C
 * It will take your input and then it will print a histogram
 * of the length of input words 
 */

#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
	int wLengthArr[10];
	char wordArr[10];

	int c, i, state; wordLength;

		
	state = OUT;

	for (i = 0; i < 10; i++)
		wLengthArr[i] = 0;
		wordArr[i] = "";
	while ((c = getchar()) != EOF) {

		if (c == ' ' || '\t' || '\n') {

			state = OUT;

		}
		
		if (state = IN) {
			
		} else if (state = OUT) {


		} else if (c == EOF) {
			
			for (i = 0; i < 10; i++) {
				
				printf("%s", wordArr[i])
				/* for (i = 0; i < 10; i++) {
				 *	
				 * }
				 * 
				 *
				 *
				 *
				 * */		

			}
		}

	}
}

