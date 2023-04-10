#include "main.h"

/**
 * create_file - appends text at the end of a file.
 * @filename: file descripter
 * @text_content: count
 *
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int gf, lz;

	gf = open(filename, O_WRONLY | O_CREAT | O_APPEND | O_TRUNC, 0600);
	if ((filename == NULL) || (gf == -1))
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(gf);
		return (1);
	}
	lz = write(gf, text_content, _strlen(text_content));
	if (lz == -1)
		return (-1);
	close(gf);
	return (1);
}

/**
 * _strlen - return the length of a a string
 * @s: string to be checked
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int a;
	int output = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		output += 1;
	}
	return (output);
}
