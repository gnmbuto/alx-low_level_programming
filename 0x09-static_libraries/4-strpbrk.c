#include "main.h"
/**
 * _strpbrk - Not figured this one out yet, but is func proto
 * @s: character  input
 * @accept: string  input
 * Return: Exits with code  0 for success
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
return ('\0');
}
