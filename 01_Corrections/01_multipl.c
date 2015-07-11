#include <stdio.h>

int main(void)
{
	int dan=2;
	while(dan<10)
	{
		int num=1; // it need to initiaize each loop
		while(num<10)
		{
			printf("%dx%d=%d\n",dan,num,dan*num);
			num++;
		}
		dan++;
	}
	return 0;
}
