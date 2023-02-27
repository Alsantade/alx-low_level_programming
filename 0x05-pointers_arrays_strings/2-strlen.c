#include "main.h"
/**
 * _strlen - length of a string
 * @s: a pointer parameter
 * Return: void method
 */
int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
