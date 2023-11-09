#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: parameter
 * @n: parameter
 * @...: infinity parameter
 * Return: --
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
int i = 0;
char *s;

va_start(args, n);
for (i = 0; i < (int)n; i++)
{
s = va_arg(args, char *);
printf("%s%s",
s == NULL ? "(nil)" : s,
i != (int)n - 1 && separator != NULL ? separator : "");
}
va_end(args);
printf("\n");
}
