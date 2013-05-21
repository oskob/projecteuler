#include <stdio.h>

int findTriplet(int limit)
{
	for(int a = 1; a < limit; a++)
	{
		for(int b = 1; b < limit; b++)
		{
			for(int c = 1; c < limit; c++)
			{
				if(a + b + c == 1000 && (a*a)+(b*b)==(c*c))
				{
					return a*b*c;
				}
			}
		}
	}
}

int main()
{
	int answer = findTriplet(1000);
	printf("Answer is: %i\n", answer);
	return 0;
}

