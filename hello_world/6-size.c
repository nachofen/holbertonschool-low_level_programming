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
printf("Size of char: %ld bytes\n", sizeof(charType));
printf("Size of int: %ld bytes\n", sizeof(IntType));
printf("Size of long int: %ld bytes\n", sizeof(longintType));
printf("Size of long long int: %ld byte\n", sizeof(longlongintType));
printf("Size of char: %ld bytes\n", sizeof(floatType));
return (0);
}
