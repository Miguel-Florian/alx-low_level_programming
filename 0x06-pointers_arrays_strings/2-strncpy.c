#include "main.h"
/**
* _strncpy - copies a string
* @dest: pointer of string
* @src: pointer of string
* @n: int
*
* Return: @dest pointer of string 
*/

char *_strncpy(char *dest, char *src, int n){   
    int j;

    for (j = 0; j < n && src[j] != '\0'; j++)
        dest[j] = src[j];
    for ( ; j < n; j++)
        dest[j] = '\0';

    return dest;
}
