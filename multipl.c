#include <stdio.h>

int main(void)
{
	int dan=2;
	int num=1;
	while(dan<10)
	{
		while(num<10)
		{
			printf("%dx%d=%d\n",dan,num,dan*num);
			num++;
		}
		dan++;
	}
	return 0;
}
