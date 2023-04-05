#include "main.h"

int _sqrt(int x, int root);
int _sqrt_recursion(int n);
/**
 * _sqrt - Finds the natural square root of an inputted number.
 * @x: number
 * @root: iterator.
 * Return: number
 */
int _sqrt(int x, int root)
{
	if ((root * root) == x)
		return (root);

	if (root == x / 2)
		return (-1);

	return (_sqrt(x, root + 1));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: number 
 * Return:  a natural square root
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(n, root));
}
