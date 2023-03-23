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
	int auxi, auxc;
	float auxf;

	va_start(anything, format);
	while (pformat[i] != '\0')
	{
		switch (pformat[i])
		{
			case 'c':
				auxc = va_arg(anything, int);

				printf("%c, ", (int)auxc);
				i++;
				break;
			case 'i':
				auxi = va_arg(anything, int);

				printf("%d, ", auxi);
				i++;
				break;
			case 'f':
				auxf = va_arg(anything, int);

				printf("%f, ", auxf);
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
