#include <stdio.h>
#include <stdio.h>
/**
* _strncpy - copies a string
* @dest: pointer of string
* @src: pointer of string
* @n: int
* Return: @dest pointer of string 
*/
int World_len(char *chaine){
    int i;
    for (i = 0; *chaine != '\0'; i++)
        chaine++;
    return i;
}

char *_strncat(char *dest, char *src, int n){
    int dest_len = World_len(dest);
    int j;

    for (j = 0 ; j < n && src[j] != '\0' ; j++)
        dest[dest_len + j] = src[j];
    dest[dest_len + j] = '\0';

    return dest;
}
