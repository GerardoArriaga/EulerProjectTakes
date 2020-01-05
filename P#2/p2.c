/*
	Project Euler P#2
	
	Written by:
	Gerardo Enrique Arriaga Rendon
*/
#include <stdio.h>
#define LMT 4000000

int main(void)
{
	int f_prev = 0, f_crnt = 1, sum = 0, f_next;

	do
	{
		if (f_crnt % 2 == 0)
		{
			sum += f_crnt;
		}
		
		f_next = f_crnt + f_prev;
		f_prev = f_crnt;
		f_crnt = f_next;

	} while (f_next <= LMT);

	printf("The sum of all even Fibonacci numbers less than or equal to %d is %d.\n", LMT, sum);
	
	return 0;
}
