#include "main.h"
/**
 * factorial - returns a=the factorial of a given number
 * @n: given integer
 * Retern: Always 0
 */
int factorial(int n)
{

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n*factorial(n-1));
}
