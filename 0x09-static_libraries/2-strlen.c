#include "main.h"
/**
 * _strlen - length of string
 * @s: string value
 * Return: length input
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
