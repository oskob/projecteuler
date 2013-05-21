#include <stdio.h>

int main()
{
	int max = 100,
	sumSquares = 0,
	sumStep = 0;

	for(int i = 1; i <= max; i++)
	{
		sumSquares += i * i;
		sumStep += i;
	}

	printf("Answer is %i\n", (sumStep*sumStep)-sumSquares);
	return 0;
}