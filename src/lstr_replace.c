/*
** EPITECH PROJECT, 2018
** str
** File description:
** lstr_replace
*/

#include "str.h"

static int assign(int *var, int value)
{
	*var = value;
	return (*var);
}

/**
 * Replaces all occurences of a substring by a given string.
 * 
 * **Does directly modify the current string.**
**/
char *lstr_replace(char *this, const char *old, const char *new)
{
	char *ret = 0;
	int idx = 0;
	int offs = 0;

	if (this == NULL || old == NULL || new == NULL)
		return (NULL);
	while (idx != -1) {
		if (assign(&idx, lstr_index_of(this, offs, old)) == -1)
			break;
		ret = calloc(strlen(this) - strlen(old) + strlen(new) + 1, 1);
		if (ret == NULL)
			return (NULL);
		ret = strncpy(ret, this, idx);
		ret[idx] = 0;
		ret = strcat(strcat(ret, new), this + idx + strlen(old));
		free(this);
		this = ret;
		offs = idx + strlen(new);
	}
	return (this);
}
