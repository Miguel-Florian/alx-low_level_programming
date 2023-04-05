#include "main.h"
/**
 * _sqrt_recusion - return the natural square root of a number
 * @n: integer
 * Return: int
 */
int _sqrt_recursion(int n)
{
    if ( n % 1 != 0)
	    return (0);
    if else (n == 0)
	    return (0);
    else
	    return (_sqrt_recursion(n) + (_sqrt_recursion(n) + (n / _sqrt_recursion(n))) / 2);
}
