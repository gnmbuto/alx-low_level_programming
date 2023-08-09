#include "main.h"

/**
 * _isalpha - checks for alphabet letter
 * @c: checked character
 * Return: 1 if c is a letter, and 0 when not the case
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
