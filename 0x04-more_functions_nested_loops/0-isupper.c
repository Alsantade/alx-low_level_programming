#include "main.h"
/**
 * _isupper - evaluate if character is in uppercase
 * @c: print int
 * Return: always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
