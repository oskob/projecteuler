#include <stdio.h>

int main()
{
	int magicNumber = 20;
	int num = magicNumber;

	while(true)
	{
		bool success = true;
		for(int i = magicNumber-1; i > 0; i--)
		{
			if(num % i != 0)
			{
				success = false;
				break;
			}
		}
			
		if(success)
		{
			printf("Answer is: %i", num);
			break;		
		}
		num += magicNumber;
	}
	return 0;

}
