#include "main.h"
/**
 * string_toupper - conver the string to upper
 * @p: string
 * Return: return the character
 */

char *string_toupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}

		a++;
	}

	return (p);
}
