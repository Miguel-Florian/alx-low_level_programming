#include <stdio.h>
#include <stdio.h>
#include <string.h>
/**
* _strncpy - copies a string
* @dest: pointer of string
* @src: pointer of string
* @n: int
* Return: @dest pointer of string 
*/
char *_strncat(char *dest, char *src, int n){
    int dest_len = strlen(dest);
    int j;

    for (j = 0 ; j < n && src[j] != '\0' ; j++)
        dest[dest_len + j] = src[j];
    dest[dest_len + j] = '\0';

    return dest;
}
