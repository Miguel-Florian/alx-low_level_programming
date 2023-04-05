#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - print string followed by new line
 * @s : string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s+1);
	}
	printf("\n");
}

