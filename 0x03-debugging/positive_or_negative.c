#include <stdio.h>

/**
* positive_or_negative - prints whether a num is zero, positive negative
*
* @i: an integer to be checked whether 0 + or -
*
* Return: Always 0 (Success)
*/

void positive_or_negative(int i)
{
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
