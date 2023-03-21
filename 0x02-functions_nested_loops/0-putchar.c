#include "main.h"

/**
 * main - Prints Holberton as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int c, t;	

	t = sizeof(str) / sizeof(int);
	for (c = 0; c < t; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
	return (0);
}
