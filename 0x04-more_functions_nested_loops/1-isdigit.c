#include "main.h"
/**
 * _isdigit - check whether the given input is digit or not
 * @c: input
 * Return: always 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
