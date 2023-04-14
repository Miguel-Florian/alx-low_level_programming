#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenes two strings
 * @s1: string 
 * @s2: string
 * @n: amount of bytes
 * 
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
       	unsigned int i;
	char *res;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n > strlen(s2))
		n = strlen(s2);

	res = malloc((strlen(s1) + n) + 1);

	if (res == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1) + n; i++)
	{
		if (i < strlen(s1))
			res[i] = s1[i];
		else
			res[i] = s2[i - strlen(s1)];
	}
	res[i] = '\0';

	return (res);
}
