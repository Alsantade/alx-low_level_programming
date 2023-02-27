#include "main.h"
#include <stdio.h>
/**
* print_array - function print array
* @a: parameter 1
* @n: size of the array
* Return: void method
*/
void print_array(int *a, int n)
{
int i;

i = 0;
while (i < n)
{
printf("%d", a[i]);

if (i < n - 1)
{
printf(", ");
}

i++;
}

printf("\n");
}
