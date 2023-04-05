#include "main.h"
/**
 * _pow_recursion - return the value of x raised to the power of y
 * @x: number
 * @y: number
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (_pow_recursion(x, y - 1) * x);
}

