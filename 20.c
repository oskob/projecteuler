#include <stdio.h>
#include <math.h>

#define BUFFER_SIZE 200
#define N 100

int main()
{
	char buffer[BUFFER_SIZE];
	char mul[BUFFER_SIZE];

	for(int i = 0; i < BUFFER_SIZE; i++) buffer[i] = 0;
	buffer[1] = 1;

	for(int i = N-1; i > 1; i--)
	{
		for(int g = 0; g <= BUFFER_SIZE-1; g++)
			mul[g] = buffer[g];
		
		for(int h = i-1; h > 0; h--)
		{			
			for(int j = 0; j < BUFFER_SIZE; j++)
			{
				for(int k = j, rest = mul[j]; k < BUFFER_SIZE && rest > 0; k++)
				{
					buffer[k] += rest;
					rest = floorf(buffer[k]/10);
					buffer[k] -= rest*10;
				}	
			}
		}
	}

	int sum = 0;
	for(int i = 0; i < BUFFER_SIZE; i++)	
		sum += buffer[i];

	printf("Answer: %i\n", sum);
}
