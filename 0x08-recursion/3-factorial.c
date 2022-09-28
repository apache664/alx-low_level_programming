#include "main.h"

/**
 * factorial - this eturns the factorial of any given number.
 * @n: the number which we find the factorial of.
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
