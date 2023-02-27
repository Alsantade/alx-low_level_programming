#include "main.h"
/**
 * print_rev - print reverse order
 * @s: a pointer parameter
 * Return: void method
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
