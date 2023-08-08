#include "main.h"
/**
 * _puts_recursion - print a string followedby a new line character
 * @s- character printer to be printed and is also the parameter
 * @gnmbuto
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
