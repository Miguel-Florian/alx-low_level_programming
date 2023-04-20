#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all arguments.
 * @n: amount of the arguments.
 *
 * Return: sum of parameters given as arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	int total = 0;
	va_list valist;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		total += va_arg(valist, int);

	va_end(valist);

	return (total);
}
