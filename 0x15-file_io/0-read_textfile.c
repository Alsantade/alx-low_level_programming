#include "main.h"

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: file descripter
 * @letters: count
 *
 * Return: any time size_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int gf, sz, lz;
	char *buf = malloc(sizeof(char) * letters);

	gf = open(filename, O_RDONLY);
	if ((filename == NULL) || (gf == -1) || (buf == NULL))
	{
		free(buf);
		return (0);
	}
	sz = read(gf, buf, letters);
	if (sz == -1)
		return (0);
	buf[sz] = '\0';
	lz = write(STDOUT_FILENO, buf, sz);
	if (lz == -1)
		return (0);
	close(gf);
	return (lz);
}
