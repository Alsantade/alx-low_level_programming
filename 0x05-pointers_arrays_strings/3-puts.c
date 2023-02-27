#include "main.h"
/**
 * _puts - print a string
 * @str: a pointer to int
 * Return: void method
 */
void _puts(char *str)
{
	char *c;
	int m;

	c = str;

	for (m = 0; c[m]; m++)
	{
		_putchar (c[m]);
	}
	_putchar('\n');
}
