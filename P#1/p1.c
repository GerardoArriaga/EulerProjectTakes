/*
	Euler Project Problem #1

	Program written by: 
	Gerardo Enrique Arriaga Rendon
*/

#include <stdio.h>

#define N 1000

int main(void)
{
	int counter, sum = 0;
	
	for (counter = 1; counter < N; counter++)
	{
		if (counter % 3 == 0 || counter % 5 == 0)
		{
			sum += counter;
		}
	}

	printf("The sum of all natural numbers less than %d that are multiple of 3 or 5 is %d.\n", N, sum);
}
