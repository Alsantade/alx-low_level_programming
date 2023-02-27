#include "main.h"
/**
* _strcpy - function to copy string
* @dest: destination of copied string
* @src: source of the string
* Return: destination
*/
char *_strcpy(char *dest, char *src)
{
int i;

i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);
}
