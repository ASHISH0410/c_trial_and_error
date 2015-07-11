#include <stdio.h>

int main(void)
{
	int i=0, j=0;
	while(i<5)
	{
		// I declared value 'k' at this line, but this caused memory waste 
		while(j<i) // We need only two values 'i' and 'j' to solve this question 
		{
			printf("o");
			j++;
		}
		j=0; // And you must initialize value 'j' for second loop 
		i++;
		printf("*\n");
	}
	return 0;
}