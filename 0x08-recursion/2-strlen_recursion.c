#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - return the length of a string
 * @s: string
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int cpt = 0;
	if (*s != '\0')
	{
		cpt = cpt + 1;
		_strlen_recursion(s + 1);
	}
	else
	{
		return(cpt);
	}
}
