#include "main.h"
/**
 * create_file - creates file
 * @filename: pointer to the name of the file created
 * @textcontent: pointer to a string to write to the file
 * Return: if the function fails --1
 * else -1
 */
int create_file(const char *filename, char *textcontent)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (textcontent != NULL)
	{
		for (len = 0; textcontent[len];)
			len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, textcontent, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);
	return (1);
}
