#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @n: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit < 0)
	{
		_putchar(-digit + 48);
		return (-digit);
	}
	else
	{
		_putchar(digit + 48);
		return (digit);
	}
}
