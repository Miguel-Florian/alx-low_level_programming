#include "main.h"
/**
 * reverse_array - reverse the contain of an array
 *@*a: array
 *@n: lentgth of array
 *
 * Return: no return
 */
void reverse_array(int *a,int n){
   int i, tmp;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
