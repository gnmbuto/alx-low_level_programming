#include <unistd.h>
/**
 * _putchar - outputs char c to stdout
 * @c:char printed
 * Return:success 1.
 * If error, -1 is returned, and errno is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
