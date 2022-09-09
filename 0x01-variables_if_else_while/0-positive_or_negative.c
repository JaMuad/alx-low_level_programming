#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- Prints numbers is positive, zero or negative
 *
 * Return:Always(Success)
 */
int main(void)
{
	int s;

	srand(time(0));
	s=rand() - RAND_MAX/2;

	if(s>0)
	{
		printf("%d is postive\n"s);
	}
	else if(s == 0)
	{
		printf("%d is zero\n",s);
	}
	else
	{
		printf("%d is negative\n",s);
	}

	return(0);
}
