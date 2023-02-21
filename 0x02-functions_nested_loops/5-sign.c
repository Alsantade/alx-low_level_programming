#include "main.h"
/**
 *print_sign - print the sign of number
 *@n: the number tha will be given
 *Return: 1 if greate than zero, 0 if equal to zero, -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
