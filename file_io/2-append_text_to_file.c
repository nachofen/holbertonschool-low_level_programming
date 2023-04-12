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
 * append_text_to_file - a
 * @filename: pointer to file
 * @text_content: number of letters
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdopen, txtlen, fdwrite;

	if (filename == NULL)
		return (-1);

	fdopen = open(filename, O_WRONLY | O_APPEND);

	if (fdopen == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
		text_content = "";

	txtlen = _strlen(text_content);
	fdwrite = write(fdopen, text_content, txtlen);

	close(fdopen);
	if (fdwrite == -1)
		return (-1);

	return (1);
}
