#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(0==n)
		prinf("%d is zero\n",n);
	else if(n>1)
                prinf("%d is positive\n",n);
	else if(n<1)
                prinf("%d is negative\n",n);
	return (0);
}
