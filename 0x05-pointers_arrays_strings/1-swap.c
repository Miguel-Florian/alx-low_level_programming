#include "main.h"

/**
 * swap_int : swap the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: no return
 */
void swap_int(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
