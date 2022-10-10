#include "main.h"

/**
 *strpbk - searches astring for bytes
 *returns a pointer to s or
 *NULL
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int counter;

	for (; *s != '\0'; s++)
	{
		for (counter = 0; accept[counter] != '\0'; counter++)
		{

			if (*s == accept[counter])
				return (s);
		}
	}
	return (0);
}
