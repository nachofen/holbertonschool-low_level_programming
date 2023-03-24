#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - functions that print anything
 * @format: the type of argument that will be passed
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list anything;
	const char *pformat = format;
	char *auxs;

	va_start(anything, format);
	while (pformat[i] != '\0')
	{
		switch (pformat[i])
		{
			case 'c':
				printf("%c, ", va_arg(anything, int));
				i++;
				break;
			case 'i':
				printf("%d, ", va_arg(anything, int));
				i++;
				break;
			case 'f':
				printf("%f, ", va_arg(anything, double));
				i++;
				break;
			case 's':
				auxs = va_arg(anything, char *);

				if (auxs == NULL)
				{
					printf("(nil)");
					i++;
				}
				if (auxs != NULL)	
				{
					printf("%s", auxs);
				}
				i++;
				break;
			default:
				i++;
				break;
		}
	}
	printf("\n");
	va_end(anything);
}
