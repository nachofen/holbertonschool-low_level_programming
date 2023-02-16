#include <stdio.h>

/**
 * main - This is a description
 *
 * Return: 0 works
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
	if (ch != 'e' && ch != 'q')
	{
		putchar(ch);
	}
	ch++;
}
putchar('\n');
return (0);
}
