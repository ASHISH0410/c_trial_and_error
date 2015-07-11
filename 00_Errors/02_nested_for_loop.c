#include <stdio.h>

int main(void)
{
	int i=0, j=0;
	while(i<5)
	{
		int k=0;
		while(k<j)
		{
			printf("o");
			k++;
		}
		i++;
		j++;
		printf("*\n");
	}
	return 0;
}