#include <stdio.h>

int isPrime(int num)
{
	if(num < 2) return false;
	for(int i = 2; i*i <= num; i++)
		if(num % i == 0)
			return false;
	return true;
}

int main()
{
	int limit = 2000000;
	long sum = 0;
	for(int i = 2; i < limit; i++)
		if(isPrime(i))
			sum += i;
	printf("Answer: %li\n", sum);
	return 0;
}

