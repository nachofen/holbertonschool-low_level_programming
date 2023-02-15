#include <stdio.h>
/**
 * main - This is a description
 *
 * Return: 0 works
 */
int main(void)
{
char charType;
int IntType;
long int longintType;
long long int longlongintType;
float floatType;
printf("Size of char: %ld byte(s)\n", sizeof(charType));
printf("Size of int: %ld byte(s)\n", sizeof(IntType));
printf("Size of long int: %ld byte(s)\n", sizeof(longintType));
printf("Size of long long int: %ld byte(s)\n", sizeof(longlongintType));
printf("Size of char: %ld byte(s)\n", sizeof(floatType));
return (0);
}
