#include <stdio.h>
#include <stdlib.h>

/*
 * *string_touper - changes all lowercase to uppercase
 * @s: string
 *
 * Return: string
 */
char *string_toupper(char *s){
    int i;
    i = 0;
    while(s[i] != '\0'){
        if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
    }
    return s;
}
