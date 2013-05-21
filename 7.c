#include <stdio.h>

int main()
{
	int limit = 10001;
	int primeIndex = 0;
	for(int i = 2; primeIndex < limit; i++)
	{
		bool prime = true;
		for(int j = 2; j < i; j++)
		{			
			if(i % j == 0)
			{
				prime = false;
				break;
			}
		}
		if(prime)
		{
			primeIndex++;
			if(primeIndex == limit)
			{
				printf("Answer is: %i\n", i);
			}
		}
	}
}
