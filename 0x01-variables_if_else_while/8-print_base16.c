#include <stdio.h>
/**
 *main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int x;
	char x1;

	for (x = 0; x <= 9; x++)
	printf("%i", x);
	for (x1 = 'a'; x1 <= 'f'; ++x1)
	putchar(x1);

	putchar('\n');

	return (0);
}
