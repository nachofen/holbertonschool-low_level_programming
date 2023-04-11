#include "main.h"

/**
 * read_textfile - a
 * @filename: pointer to file
 * @letters: number of letters
 * Return: the number of chars
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filepointer;
	char *buffer;
	ssize_t readn, writen;

	if (filename == NULL)
		return (0);

	filepointer = open(filename, O_RDONLY);
	if (filepointer == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (-1);

	/**
	* buffer pointer to string
	* size = sizeof(data) the size of the elements that will read
	* count = letters the number of elements that will read
	* stream = pointer to the file that will read
	*/
	readn = read(filepointer, buffer, letters);
	if (readn == -1)
		return (0);
	writen = write(STDOUT_FILENO, buffer, readn);

	if (writen == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(filepointer);

	return (readn);
}
