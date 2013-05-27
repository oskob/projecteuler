#include <stdio.h>

int main()
{
	int max = 0;
	for(int start = 1, steps = 0; start < 1000000; start++)
	{
		int i = 0;
		for(long int n = start; n != 1;)
		{
			n = n % 2 == 0 ? n / 2 : n*3+1;
			i++;
		}
		if(i > steps)
		{
			steps = i;
			max = start;
		}
	}
	printf("\n%i\n", max);
	return 0;
}