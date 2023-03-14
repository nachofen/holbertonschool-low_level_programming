#include <stdlib.h>
#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int s1_len = 0, s2_len = 0;

	for (s1_len = 0; s1[s1_len]; s1_len++)
	{}
	for (s2_len = 0; s2[s2_len]; s2_len++)
	{}
	if (s1 == NULL)
	{
		s1 = "";
		s1_len = 0;
	}
	if (s2 == NULL)
	{
		s2 = "";
		s2_len = 0;
	}
	if (n >= s2_len)
	{
		n = s2_len;
	}
	pointer = malloc(s1_len + n + 1);
	if (!pointer)
	{
		exit(1);
	}
	_memcpy(pointer, s1, s1_len);
	_memcpy(pointer + s1_len, s2, n);
	pointer[s1_len + n] = '\0';
	return (pointer);
}
