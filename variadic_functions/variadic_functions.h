#ifndef variadicf_h
#define variadicf_h
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void printchar(va_list c);
void printstr(va_list str);
void printint(va_list i);
void printfloat(va_list fl);

 /**
 * str - Struct str
 *
 * @letra: The pointer to the char
 * @f: The function associated
 */
typedef struct str
{
	char *letra;
	void (*f)(va_list anything);
} strvar;

#endif
