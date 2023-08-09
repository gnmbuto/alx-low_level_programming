#include "main.h"
/**
 * _strspn - Entry point
 * @s: the input named s
 * @accept: input in form of a string
 * Return: Always 0 means exited with no errors
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
