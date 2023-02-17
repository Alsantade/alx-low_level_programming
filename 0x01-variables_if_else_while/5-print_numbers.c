#include <stdio.h>
/**
 *main - entry point
 *
 * Description: print numbers 0 to 9 on one line
 *Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}
	putchar('\n');
	return (0);
}
