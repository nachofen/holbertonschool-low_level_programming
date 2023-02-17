#include <stdio.h>

/**
 *  * main - This is a description
 *   *
 *    * Return: 0 works
 *
 *
 */
int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		num++;
		if (num <= 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
