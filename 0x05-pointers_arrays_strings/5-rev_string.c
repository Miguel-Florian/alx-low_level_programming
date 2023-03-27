#include "main.h"

/**
 * rev_string : reverses a string
 * @s: input string
 * Return: no return
 */

void rev_string(char *s)
{
	int cpt=0, i, j;
	char *chaine, tmp;

	while (count >= 0)
	{
		if(s[cpt] == '\0')
		{
			break;
		}
		cpt++;
	}
	chaine = s;

	for (i = 0; i < (cpt-=1); i++)
	{
		for ( j = i+1; j > 0; j--)
		{
			tmp = *(chaine + j);
			*(chaine + j) = *(chaine +(j-1));
			*(chaine + (j-1)) = tmp;
		}
	}
}
