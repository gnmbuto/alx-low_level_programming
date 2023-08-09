#include "main.h"
/**
 * char *_strcpy - a func to copy the string pointed by src
 * @dest: copy destination
 * @src: copysource
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
