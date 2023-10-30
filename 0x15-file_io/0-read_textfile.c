#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - entry point
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, br, bw;
	char *store;


	if (filename == NULL)
		return (0);

	store = malloc(sizeof(char) * letters);

	if (store == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(store);
		return (0);
	}

	br = read(fd, store, letters);
	bw = write(STDOUT_FILENO, store, br);

	if (br == -1 || bw == -1 || bw != br)
	{
		free(store);
		close(fd);
		return (0);
	}

	free(store);
	close(fd);

	return (bw);
}
