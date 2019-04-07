/*
** EPITECH PROJECT, 2018
** str
** File description:
** lstr_epur
*/

#include "str.h"

static int internal_lstr_spaces_len(const char *str)
{
	int count = -1;

	while (str[++count])
		if (str[count] != ' ' && str[count] != '\t')
			return (count);
	return (count);
}

/**
 * Canonicalizes spaces and tabs to just one space character.
**/
char *lstr_epur(char *this)
{
	char *tmp;
	int len;

	if (this == NULL)
		return (NULL);
	for (size_t start = 0; this[start]; start++)
		if (this[start] == ' ' || this[start] == '\t') {
			len = internal_lstr_spaces_len(this + start);
			tmp = calloc(strlen(this) - len + 2, sizeof(char));
			if (tmp == NULL)
				return (NULL);
			tmp = strncpy(tmp, this, start);
			tmp[start] = 0;
			strcat(strcat(tmp, " "), this + start + len);
			free(this);
			this = tmp;
		}
	return (this);
}
