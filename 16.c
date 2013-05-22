#include "math.h"
#include <stdio.h>
#define SIZE 1000
#define POW 1000

int main()
{
	int num[SIZE];
	
	for(int i = 0; i < SIZE; i++) num[i] = 0; // init values, oh you, laddergoat, you so random
	num[0] = 2;

	for(int i = 0; i < POW-1; i++)
	{
		int rest = 0;
		for(int j = 0; j < SIZE; j++)
		{
			int k = (num[j] * 2) + rest;
			rest = floorf(k / 10);
			num[j] = k % 10;
		}
	}

	int sum = 0;
	for(int i = 0; i < SIZE; i++)
		sum += num[i];

	printf("Answer: %i\n", sum);
	
	return 0;
}

