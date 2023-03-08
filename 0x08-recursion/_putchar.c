#include <unistd.h>

/**
 * _putchar - write the character to the stdout
 * @c: The character to print
 *
 * Return: always 0 or 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
