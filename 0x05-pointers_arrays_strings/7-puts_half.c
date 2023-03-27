#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int cpt = 0, i;

	while (cpt >= 0)
	{
		if (str[cpt] == '\0')
			break;
		cpt++;
	}

	if (cpt % 2 == 1)
		i = cpt / 2;
	else
		i = (cpt - 1) / 2;

	for (i++; i < cpt; i++)
		_putchar(str[i]);
	_putchar('\n');
}
