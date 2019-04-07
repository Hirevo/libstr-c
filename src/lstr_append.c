/*
** EPITECH PROJECT, 2018
** str
** File description:
** lstr_append
*/

#include "str.h"

/**
 * Appends the specifed string to this string.
 * 
 * **Does directly modify the original string.**
**/
char *lstr_append(char *this, const char *str)
{
	char *ret;

	if (this == NULL || str == NULL)
		return (NULL);
	ret = calloc(strlen(this) + strlen(str) + 1, sizeof(char));
	if (ret == NULL)
		return (NULL);
	ret = strcat(strcpy(ret, this), str);
	free(this);
	return (ret);
}
