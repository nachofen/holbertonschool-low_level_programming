#include <stdio.h>

/**
 *  * main - This is a description
 *   *
 *    * Return: 0 works
 */
int main(void)
{
	char ch = 'a';

	int num = 0;

	while (num < 10)
	{
		printf("%u", num);
		num++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
