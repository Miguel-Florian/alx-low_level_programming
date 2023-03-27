#include "main.h"

/**
 * print_rev : print a reverse of string followed by a line.
 * @s: input string
 * Return: no return
 */

void print_rev(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
		{
			break;
		}
		i++;
	}
	for (i--;i>=0;i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
