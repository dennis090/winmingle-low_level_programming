#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Author: okoh dennis onoja
 * Program: Winmingle community training on c
 * Description:c code to know if a number is positive negative etc*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() -RAND_MAX / 2;
	if (n > 0)
	{printf("%d is positive\n", n);}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else {
	printf("%d is negative\n",n);
	}
	return (0);
}
