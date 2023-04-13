#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - this will concatenate the arguments
 * @ac: the count of string
 * @av: the string argument
 *
 * Return: returns a pointer to a string of character
 */
char *argstostr(int ac, char **av)
{
	int i;
	int len = 0, x = 0;
	char *str;

 if (ac == 0 || av == NULL) {
        return NULL;
    }

    for (i = 0; i < ac; i++) {
        len += strlen(av[i]) + 1;
    }

    str = malloc(len * sizeof(char) + 1);
    if (str == NULL) {
        return NULL;
    }

    
    for (i = 0; i < ac; i++) {
        strcpy(&str[x], av[i]);
        x += strlen(av[i]);
        str[x] = '\n';
        x++;
    } 

    return str;
    free(str);
}

