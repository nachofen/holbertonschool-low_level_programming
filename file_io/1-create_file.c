#include "main.h"
/**
 * _strlen - a function that tells the length of a string
 * @s: the char pointer
 * Return: int
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * create_file - a
 * @filename: pointer to file
 * @text_content: number of letters
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fdopen, txtlen, fdwrite;

	if (filename == NULL)
		return (-1);

	fdopen = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fdopen == -1)
	{
		return (-1);
	}
	txtlen = _strlen(text_content);
	fdwrite = write(fdopen, text_content, txtlen);

	close(fdopen);
	if (fdwrite == -1)
		return (-1);

	return (1);
}
